/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/VideoJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/VideoMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Video.h>
#include <aws/rekognition/model/CelebrityRecognition.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class GetCelebrityRecognitionResult
  {
  public:
    AWS_REKOGNITION_API GetCelebrityRecognitionResult();
    AWS_REKOGNITION_API GetCelebrityRecognitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetCelebrityRecognitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the celebrity recognition job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the celebrity recognition job.</p>
     */
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The current status of the celebrity recognition job.</p>
     */
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the celebrity recognition job.</p>
     */
    inline GetCelebrityRecognitionResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the celebrity recognition job.</p>
     */
    inline GetCelebrityRecognitionResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetCelebrityRecognitionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetCelebrityRecognitionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetCelebrityRecognitionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition Video operation.</p>
     */
    inline const VideoMetadata& GetVideoMetadata() const{ return m_videoMetadata; }

    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition Video operation.</p>
     */
    inline void SetVideoMetadata(const VideoMetadata& value) { m_videoMetadata = value; }

    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition Video operation.</p>
     */
    inline void SetVideoMetadata(VideoMetadata&& value) { m_videoMetadata = std::move(value); }

    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition Video operation.</p>
     */
    inline GetCelebrityRecognitionResult& WithVideoMetadata(const VideoMetadata& value) { SetVideoMetadata(value); return *this;}

    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition Video operation.</p>
     */
    inline GetCelebrityRecognitionResult& WithVideoMetadata(VideoMetadata&& value) { SetVideoMetadata(std::move(value)); return *this;}


    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * celebrities.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * celebrities.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * celebrities.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * celebrities.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * celebrities.</p>
     */
    inline GetCelebrityRecognitionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * celebrities.</p>
     */
    inline GetCelebrityRecognitionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * celebrities.</p>
     */
    inline GetCelebrityRecognitionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Array of celebrities recognized in the video.</p>
     */
    inline const Aws::Vector<CelebrityRecognition>& GetCelebrities() const{ return m_celebrities; }

    /**
     * <p>Array of celebrities recognized in the video.</p>
     */
    inline void SetCelebrities(const Aws::Vector<CelebrityRecognition>& value) { m_celebrities = value; }

    /**
     * <p>Array of celebrities recognized in the video.</p>
     */
    inline void SetCelebrities(Aws::Vector<CelebrityRecognition>&& value) { m_celebrities = std::move(value); }

    /**
     * <p>Array of celebrities recognized in the video.</p>
     */
    inline GetCelebrityRecognitionResult& WithCelebrities(const Aws::Vector<CelebrityRecognition>& value) { SetCelebrities(value); return *this;}

    /**
     * <p>Array of celebrities recognized in the video.</p>
     */
    inline GetCelebrityRecognitionResult& WithCelebrities(Aws::Vector<CelebrityRecognition>&& value) { SetCelebrities(std::move(value)); return *this;}

    /**
     * <p>Array of celebrities recognized in the video.</p>
     */
    inline GetCelebrityRecognitionResult& AddCelebrities(const CelebrityRecognition& value) { m_celebrities.push_back(value); return *this; }

    /**
     * <p>Array of celebrities recognized in the video.</p>
     */
    inline GetCelebrityRecognitionResult& AddCelebrities(CelebrityRecognition&& value) { m_celebrities.push_back(std::move(value)); return *this; }


    /**
     * <p>Job identifier for the celebrity recognition operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartCelebrityRecognition.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Job identifier for the celebrity recognition operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartCelebrityRecognition.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>Job identifier for the celebrity recognition operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartCelebrityRecognition.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>Job identifier for the celebrity recognition operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartCelebrityRecognition.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>Job identifier for the celebrity recognition operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartCelebrityRecognition.</p>
     */
    inline GetCelebrityRecognitionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Job identifier for the celebrity recognition operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartCelebrityRecognition.</p>
     */
    inline GetCelebrityRecognitionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Job identifier for the celebrity recognition operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartCelebrityRecognition.</p>
     */
    inline GetCelebrityRecognitionResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Video& GetVideo() const{ return m_video; }

    
    inline void SetVideo(const Video& value) { m_video = value; }

    
    inline void SetVideo(Video&& value) { m_video = std::move(value); }

    
    inline GetCelebrityRecognitionResult& WithVideo(const Video& value) { SetVideo(value); return *this;}

    
    inline GetCelebrityRecognitionResult& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>A job identifier specified in the call to StartCelebrityRecognition and
     * returned in the job completion notification sent to your Amazon Simple
     * Notification Service topic.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>A job identifier specified in the call to StartCelebrityRecognition and
     * returned in the job completion notification sent to your Amazon Simple
     * Notification Service topic.</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTag = value; }

    /**
     * <p>A job identifier specified in the call to StartCelebrityRecognition and
     * returned in the job completion notification sent to your Amazon Simple
     * Notification Service topic.</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTag = std::move(value); }

    /**
     * <p>A job identifier specified in the call to StartCelebrityRecognition and
     * returned in the job completion notification sent to your Amazon Simple
     * Notification Service topic.</p>
     */
    inline void SetJobTag(const char* value) { m_jobTag.assign(value); }

    /**
     * <p>A job identifier specified in the call to StartCelebrityRecognition and
     * returned in the job completion notification sent to your Amazon Simple
     * Notification Service topic.</p>
     */
    inline GetCelebrityRecognitionResult& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>A job identifier specified in the call to StartCelebrityRecognition and
     * returned in the job completion notification sent to your Amazon Simple
     * Notification Service topic.</p>
     */
    inline GetCelebrityRecognitionResult& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>A job identifier specified in the call to StartCelebrityRecognition and
     * returned in the job completion notification sent to your Amazon Simple
     * Notification Service topic.</p>
     */
    inline GetCelebrityRecognitionResult& WithJobTag(const char* value) { SetJobTag(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCelebrityRecognitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCelebrityRecognitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCelebrityRecognitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    VideoMetadata m_videoMetadata;

    Aws::String m_nextToken;

    Aws::Vector<CelebrityRecognition> m_celebrities;

    Aws::String m_jobId;

    Video m_video;

    Aws::String m_jobTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
