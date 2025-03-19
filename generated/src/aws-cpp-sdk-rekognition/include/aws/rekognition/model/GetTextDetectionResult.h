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
#include <aws/rekognition/model/TextDetectionResult.h>
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
  class GetTextDetectionResult
  {
  public:
    AWS_REKOGNITION_API GetTextDetectionResult() = default;
    AWS_REKOGNITION_API GetTextDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetTextDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Current status of the text detection job.</p>
     */
    inline VideoJobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(VideoJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetTextDetectionResult& WithJobStatus(VideoJobStatus value) { SetJobStatus(value); return *this;}
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
    GetTextDetectionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VideoMetadata& GetVideoMetadata() const { return m_videoMetadata; }
    template<typename VideoMetadataT = VideoMetadata>
    void SetVideoMetadata(VideoMetadataT&& value) { m_videoMetadataHasBeenSet = true; m_videoMetadata = std::forward<VideoMetadataT>(value); }
    template<typename VideoMetadataT = VideoMetadata>
    GetTextDetectionResult& WithVideoMetadata(VideoMetadataT&& value) { SetVideoMetadata(std::forward<VideoMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of text detected in the video. Each element contains the detected
     * text, the time in milliseconds from the start of the video that the text was
     * detected, and where it was detected on the screen.</p>
     */
    inline const Aws::Vector<TextDetectionResult>& GetTextDetections() const { return m_textDetections; }
    template<typename TextDetectionsT = Aws::Vector<TextDetectionResult>>
    void SetTextDetections(TextDetectionsT&& value) { m_textDetectionsHasBeenSet = true; m_textDetections = std::forward<TextDetectionsT>(value); }
    template<typename TextDetectionsT = Aws::Vector<TextDetectionResult>>
    GetTextDetectionResult& WithTextDetections(TextDetectionsT&& value) { SetTextDetections(std::forward<TextDetectionsT>(value)); return *this;}
    template<typename TextDetectionsT = TextDetectionResult>
    GetTextDetectionResult& AddTextDetections(TextDetectionsT&& value) { m_textDetectionsHasBeenSet = true; m_textDetections.emplace_back(std::forward<TextDetectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTextDetectionResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version number of the text detection model that was used to detect text.</p>
     */
    inline const Aws::String& GetTextModelVersion() const { return m_textModelVersion; }
    template<typename TextModelVersionT = Aws::String>
    void SetTextModelVersion(TextModelVersionT&& value) { m_textModelVersionHasBeenSet = true; m_textModelVersion = std::forward<TextModelVersionT>(value); }
    template<typename TextModelVersionT = Aws::String>
    GetTextDetectionResult& WithTextModelVersion(TextModelVersionT&& value) { SetTextModelVersion(std::forward<TextModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job identifier for the text detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartTextDetection.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetTextDetectionResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Video& GetVideo() const { return m_video; }
    template<typename VideoT = Video>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = Video>
    GetTextDetectionResult& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job identifier specified in the call to StartTextDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline const Aws::String& GetJobTag() const { return m_jobTag; }
    template<typename JobTagT = Aws::String>
    void SetJobTag(JobTagT&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::forward<JobTagT>(value); }
    template<typename JobTagT = Aws::String>
    GetTextDetectionResult& WithJobTag(JobTagT&& value) { SetJobTag(std::forward<JobTagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTextDetectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VideoJobStatus m_jobStatus{VideoJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    VideoMetadata m_videoMetadata;
    bool m_videoMetadataHasBeenSet = false;

    Aws::Vector<TextDetectionResult> m_textDetections;
    bool m_textDetectionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_textModelVersion;
    bool m_textModelVersionHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Video m_video;
    bool m_videoHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
