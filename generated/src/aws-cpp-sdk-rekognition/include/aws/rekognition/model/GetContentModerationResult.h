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
#include <aws/rekognition/model/GetContentModerationRequestMetadata.h>
#include <aws/rekognition/model/ContentModerationDetection.h>
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
  class GetContentModerationResult
  {
  public:
    AWS_REKOGNITION_API GetContentModerationResult();
    AWS_REKOGNITION_API GetContentModerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetContentModerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline GetContentModerationResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline GetContentModerationResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


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
    inline GetContentModerationResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetContentModerationResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetContentModerationResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline const VideoMetadata& GetVideoMetadata() const{ return m_videoMetadata; }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline void SetVideoMetadata(const VideoMetadata& value) { m_videoMetadata = value; }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline void SetVideoMetadata(VideoMetadata&& value) { m_videoMetadata = std::move(value); }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline GetContentModerationResult& WithVideoMetadata(const VideoMetadata& value) { SetVideoMetadata(value); return *this;}

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline GetContentModerationResult& WithVideoMetadata(VideoMetadata&& value) { SetVideoMetadata(std::move(value)); return *this;}


    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline const Aws::Vector<ContentModerationDetection>& GetModerationLabels() const{ return m_moderationLabels; }

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline void SetModerationLabels(const Aws::Vector<ContentModerationDetection>& value) { m_moderationLabels = value; }

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline void SetModerationLabels(Aws::Vector<ContentModerationDetection>&& value) { m_moderationLabels = std::move(value); }

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& WithModerationLabels(const Aws::Vector<ContentModerationDetection>& value) { SetModerationLabels(value); return *this;}

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& WithModerationLabels(Aws::Vector<ContentModerationDetection>&& value) { SetModerationLabels(std::move(value)); return *this;}

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& AddModerationLabels(const ContentModerationDetection& value) { m_moderationLabels.push_back(value); return *this; }

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& AddModerationLabels(ContentModerationDetection&& value) { m_moderationLabels.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline const Aws::String& GetModerationModelVersion() const{ return m_moderationModelVersion; }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline void SetModerationModelVersion(const Aws::String& value) { m_moderationModelVersion = value; }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline void SetModerationModelVersion(Aws::String&& value) { m_moderationModelVersion = std::move(value); }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline void SetModerationModelVersion(const char* value) { m_moderationModelVersion.assign(value); }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline GetContentModerationResult& WithModerationModelVersion(const Aws::String& value) { SetModerationModelVersion(value); return *this;}

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline GetContentModerationResult& WithModerationModelVersion(Aws::String&& value) { SetModerationModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline GetContentModerationResult& WithModerationModelVersion(const char* value) { SetModerationModelVersion(value); return *this;}


    /**
     * <p>Job identifier for the content moderation operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartContentModeration.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Job identifier for the content moderation operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartContentModeration.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>Job identifier for the content moderation operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartContentModeration.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>Job identifier for the content moderation operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartContentModeration.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>Job identifier for the content moderation operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartContentModeration.</p>
     */
    inline GetContentModerationResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Job identifier for the content moderation operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartContentModeration.</p>
     */
    inline GetContentModerationResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Job identifier for the content moderation operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartContentModeration.</p>
     */
    inline GetContentModerationResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Video& GetVideo() const{ return m_video; }

    
    inline void SetVideo(const Video& value) { m_video = value; }

    
    inline void SetVideo(Video&& value) { m_video = std::move(value); }

    
    inline GetContentModerationResult& WithVideo(const Video& value) { SetVideo(value); return *this;}

    
    inline GetContentModerationResult& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>A job identifier specified in the call to StartContentModeration and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>A job identifier specified in the call to StartContentModeration and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTag = value; }

    /**
     * <p>A job identifier specified in the call to StartContentModeration and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTag = std::move(value); }

    /**
     * <p>A job identifier specified in the call to StartContentModeration and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline void SetJobTag(const char* value) { m_jobTag.assign(value); }

    /**
     * <p>A job identifier specified in the call to StartContentModeration and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline GetContentModerationResult& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>A job identifier specified in the call to StartContentModeration and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline GetContentModerationResult& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>A job identifier specified in the call to StartContentModeration and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline GetContentModerationResult& WithJobTag(const char* value) { SetJobTag(value); return *this;}


    /**
     * <p>Information about the paramters used when getting a response. Includes
     * information on aggregation and sorting methods.</p>
     */
    inline const GetContentModerationRequestMetadata& GetGetRequestMetadata() const{ return m_getRequestMetadata; }

    /**
     * <p>Information about the paramters used when getting a response. Includes
     * information on aggregation and sorting methods.</p>
     */
    inline void SetGetRequestMetadata(const GetContentModerationRequestMetadata& value) { m_getRequestMetadata = value; }

    /**
     * <p>Information about the paramters used when getting a response. Includes
     * information on aggregation and sorting methods.</p>
     */
    inline void SetGetRequestMetadata(GetContentModerationRequestMetadata&& value) { m_getRequestMetadata = std::move(value); }

    /**
     * <p>Information about the paramters used when getting a response. Includes
     * information on aggregation and sorting methods.</p>
     */
    inline GetContentModerationResult& WithGetRequestMetadata(const GetContentModerationRequestMetadata& value) { SetGetRequestMetadata(value); return *this;}

    /**
     * <p>Information about the paramters used when getting a response. Includes
     * information on aggregation and sorting methods.</p>
     */
    inline GetContentModerationResult& WithGetRequestMetadata(GetContentModerationRequestMetadata&& value) { SetGetRequestMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetContentModerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetContentModerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetContentModerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    VideoMetadata m_videoMetadata;

    Aws::Vector<ContentModerationDetection> m_moderationLabels;

    Aws::String m_nextToken;

    Aws::String m_moderationModelVersion;

    Aws::String m_jobId;

    Video m_video;

    Aws::String m_jobTag;

    GetContentModerationRequestMetadata m_getRequestMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
