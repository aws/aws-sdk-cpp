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
#include <aws/rekognition/model/GetLabelDetectionRequestMetadata.h>
#include <aws/rekognition/model/LabelDetection.h>
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
  class GetLabelDetectionResult
  {
  public:
    AWS_REKOGNITION_API GetLabelDetectionResult() = default;
    AWS_REKOGNITION_API GetLabelDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetLabelDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the label detection job.</p>
     */
    inline VideoJobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(VideoJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetLabelDetectionResult& WithJobStatus(VideoJobStatus value) { SetJobStatus(value); return *this;}
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
    GetLabelDetectionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition video operation.</p>
     */
    inline const VideoMetadata& GetVideoMetadata() const { return m_videoMetadata; }
    template<typename VideoMetadataT = VideoMetadata>
    void SetVideoMetadata(VideoMetadataT&& value) { m_videoMetadataHasBeenSet = true; m_videoMetadata = std::forward<VideoMetadataT>(value); }
    template<typename VideoMetadataT = VideoMetadata>
    GetLabelDetectionResult& WithVideoMetadata(VideoMetadataT&& value) { SetVideoMetadata(std::forward<VideoMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetLabelDetectionResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline const Aws::Vector<LabelDetection>& GetLabels() const { return m_labels; }
    template<typename LabelsT = Aws::Vector<LabelDetection>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<LabelDetection>>
    GetLabelDetectionResult& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = LabelDetection>
    GetLabelDetectionResult& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline const Aws::String& GetLabelModelVersion() const { return m_labelModelVersion; }
    template<typename LabelModelVersionT = Aws::String>
    void SetLabelModelVersion(LabelModelVersionT&& value) { m_labelModelVersionHasBeenSet = true; m_labelModelVersion = std::forward<LabelModelVersionT>(value); }
    template<typename LabelModelVersionT = Aws::String>
    GetLabelDetectionResult& WithLabelModelVersion(LabelModelVersionT&& value) { SetLabelModelVersion(std::forward<LabelModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job identifier for the label detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartLabelDetection.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetLabelDetectionResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Video& GetVideo() const { return m_video; }
    template<typename VideoT = Video>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = Video>
    GetLabelDetectionResult& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job identifier specified in the call to StartLabelDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline const Aws::String& GetJobTag() const { return m_jobTag; }
    template<typename JobTagT = Aws::String>
    void SetJobTag(JobTagT&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::forward<JobTagT>(value); }
    template<typename JobTagT = Aws::String>
    GetLabelDetectionResult& WithJobTag(JobTagT&& value) { SetJobTag(std::forward<JobTagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the paramters used when getting a response. Includes
     * information on aggregation and sorting methods.</p>
     */
    inline const GetLabelDetectionRequestMetadata& GetGetRequestMetadata() const { return m_getRequestMetadata; }
    template<typename GetRequestMetadataT = GetLabelDetectionRequestMetadata>
    void SetGetRequestMetadata(GetRequestMetadataT&& value) { m_getRequestMetadataHasBeenSet = true; m_getRequestMetadata = std::forward<GetRequestMetadataT>(value); }
    template<typename GetRequestMetadataT = GetLabelDetectionRequestMetadata>
    GetLabelDetectionResult& WithGetRequestMetadata(GetRequestMetadataT&& value) { SetGetRequestMetadata(std::forward<GetRequestMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLabelDetectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VideoJobStatus m_jobStatus{VideoJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    VideoMetadata m_videoMetadata;
    bool m_videoMetadataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LabelDetection> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::String m_labelModelVersion;
    bool m_labelModelVersionHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Video m_video;
    bool m_videoHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;

    GetLabelDetectionRequestMetadata m_getRequestMetadata;
    bool m_getRequestMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
