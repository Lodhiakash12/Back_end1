from googleapiclient.discovery import build

def search_youtube(search_query, max_results=5):
    """
    Search YouTube and return video links
    
    Args:
        search_query: String to search for
        max_results: Number of results to return (default 5)
    
    Returns:
        List of dictionaries with video title and URL
    """
    # Your YouTube API key
    API_KEY = 'YOUR_API_KEY_HERE'
    
    # Build YouTube API client
    youtube = build('youtube', 'v3', developerKey=API_KEY)
    
    # Search for videos
    request = youtube.search().list(
        part='snippet',
        q=search_query,
        type='video',
        maxResults=max_results
    )
    
    response = request.execute()
    
    # Extract video information
    videos = []
    for item in response['items']:
        video_id = item['id']['videoId']
        title = item['snippet']['title']
        url = f'https://www.youtube.com/watch?v={video_id}'
        
        videos.append({
            'title': title,
            'url': url
        })
    
    return videos


# Example usage
if __name__ == '__main__':
    search_term = 'python programming tutorial'
    results = search_youtube(search_term, max_results=5)
    
    print(f"Search results for: {search_term}\n")
    for i, video in enumerate(results, 1):
        print(f"{i}. {video['title']}")
        print(f"   {video['url']}\n")
