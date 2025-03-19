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
    AWS_REKOGNITION_API GetContentModerationResult() = default;
    AWS_REKOGNITION_API GetContentModerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetContentModerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline VideoJobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(VideoJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetContentModerationResult& WithJobStatus(VideoJobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetContentModerationResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline const VideoMetadata& GetVideoMetadata() const { return m_videoMetadata; }
    template<typename VideoMetadataT = VideoMetadata>
    void SetVideoMetadata(VideoMetadataT&& value) { m_videoMetadataHasBeenSet = true; m_videoMetadata = std::forward<VideoMetadataT>(value); }
    template<typename VideoMetadataT = VideoMetadata>
    GetContentModerationResult& WithVideoMetadata(VideoMetadataT&& value) { SetVideoMetadata(std::forward<VideoMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline const Aws::Vector<ContentModerationDetection>& GetModerationLabels() const { return m_moderationLabels; }
    template<typename ModerationLabelsT = Aws::Vector<ContentModerationDetection>>
    void SetModerationLabels(ModerationLabelsT&& value) { m_moderationLabelsHasBeenSet = true; m_moderationLabels = std::forward<ModerationLabelsT>(value); }
    template<typename ModerationLabelsT = Aws::Vector<ContentModerationDetection>>
    GetContentModerationResult& WithModerationLabels(ModerationLabelsT&& value) { SetModerationLabels(std::forward<ModerationLabelsT>(value)); return *this;}
    template<typename ModerationLabelsT = ContentModerationDetection>
    GetContentModerationResult& AddModerationLabels(ModerationLabelsT&& value) { m_moderationLabelsHasBeenSet = true; m_moderationLabels.emplace_back(std::forward<ModerationLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetContentModerationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline const Aws::String& GetModerationModelVersion() const { return m_moderationModelVersion; }
    template<typename ModerationModelVersionT = Aws::String>
    void SetModerationModelVersion(ModerationModelVersionT&& value) { m_moderationModelVersionHasBeenSet = true; m_moderationModelVersion = std::forward<ModerationModelVersionT>(value); }
    template<typename ModerationModelVersionT = Aws::String>
    GetContentModerationResult& WithModerationModelVersion(ModerationModelVersionT&& value) { SetModerationModelVersion(std::forward<ModerationModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job identifier for the content moderation operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartContentModeration.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetContentModerationResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Video& GetVideo() const { return m_video; }
    template<typename VideoT = Video>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = Video>
    GetContentModerationResult& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job identifier specified in the call to StartContentModeration and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline const Aws::String& GetJobTag() const { return m_jobTag; }
    template<typename JobTagT = Aws::String>
    void SetJobTag(JobTagT&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::forward<JobTagT>(value); }
    template<typename JobTagT = Aws::String>
    GetContentModerationResult& WithJobTag(JobTagT&& value) { SetJobTag(std::forward<JobTagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the paramters used when getting a response. Includes
     * information on aggregation and sorting methods.</p>
     */
    inline const GetContentModerationRequestMetadata& GetGetRequestMetadata() const { return m_getRequestMetadata; }
    template<typename GetRequestMetadataT = GetContentModerationRequestMetadata>
    void SetGetRequestMetadata(GetRequestMetadataT&& value) { m_getRequestMetadataHasBeenSet = true; m_getRequestMetadata = std::forward<GetRequestMetadataT>(value); }
    template<typename GetRequestMetadataT = GetContentModerationRequestMetadata>
    GetContentModerationResult& WithGetRequestMetadata(GetRequestMetadataT&& value) { SetGetRequestMetadata(std::forward<GetRequestMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContentModerationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VideoJobStatus m_jobStatus{VideoJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    VideoMetadata m_videoMetadata;
    bool m_videoMetadataHasBeenSet = false;

    Aws::Vector<ContentModerationDetection> m_moderationLabels;
    bool m_moderationLabelsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_moderationModelVersion;
    bool m_moderationModelVersionHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Video m_video;
    bool m_videoHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;

    GetContentModerationRequestMetadata m_getRequestMetadata;
    bool m_getRequestMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
