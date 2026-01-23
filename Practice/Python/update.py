import requests
from urllib.parse import quote
import re

def search_youtube(search_query, max_results=5):
    
    
    encoded_query = quote(search_query)
    url = f'https://www.youtube.com/results?search_query={encoded_query}'
    
     
    response = requests.get(url)
    
    video_ids = re.findall(r'watch\?v=(\S{11})', response.text)
    
     
    seen = set()
    unique_ids = []
    for vid_id in video_ids:
        if vid_id not in seen:
            seen.add(vid_id)
            unique_ids.append(vid_id)
    
    
    unique_ids = unique_ids[:max_results] 
    videos = []
    for vid_id in unique_ids:
        url = f'https://www.youtube.com/watch?v={vid_id}'
        videos.append({
            'video_id': vid_id,
            'url': url
        })
    
    return videos



if __name__ == '__main__':
    search_term = input("Enter The Title:")
    results = search_youtube(search_term, max_results=5)
    
    print(f"Search results for: {search_term}\n")
    for i, video in enumerate(results, 1):
        print(f"{i}. Video ID: {video['video_id']}")
        print(f"   URL: {video['url']}\n")
