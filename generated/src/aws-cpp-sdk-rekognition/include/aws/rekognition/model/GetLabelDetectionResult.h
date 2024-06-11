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
    AWS_REKOGNITION_API GetLabelDetectionResult();
    AWS_REKOGNITION_API GetLabelDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetLabelDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the label detection job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }
    inline GetLabelDetectionResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}
    inline GetLabelDetectionResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetLabelDetectionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetLabelDetectionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetLabelDetectionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition video operation.</p>
     */
    inline const VideoMetadata& GetVideoMetadata() const{ return m_videoMetadata; }
    inline void SetVideoMetadata(const VideoMetadata& value) { m_videoMetadata = value; }
    inline void SetVideoMetadata(VideoMetadata&& value) { m_videoMetadata = std::move(value); }
    inline GetLabelDetectionResult& WithVideoMetadata(const VideoMetadata& value) { SetVideoMetadata(value); return *this;}
    inline GetLabelDetectionResult& WithVideoMetadata(VideoMetadata&& value) { SetVideoMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetLabelDetectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetLabelDetectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetLabelDetectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline const Aws::Vector<LabelDetection>& GetLabels() const{ return m_labels; }
    inline void SetLabels(const Aws::Vector<LabelDetection>& value) { m_labels = value; }
    inline void SetLabels(Aws::Vector<LabelDetection>&& value) { m_labels = std::move(value); }
    inline GetLabelDetectionResult& WithLabels(const Aws::Vector<LabelDetection>& value) { SetLabels(value); return *this;}
    inline GetLabelDetectionResult& WithLabels(Aws::Vector<LabelDetection>&& value) { SetLabels(std::move(value)); return *this;}
    inline GetLabelDetectionResult& AddLabels(const LabelDetection& value) { m_labels.push_back(value); return *this; }
    inline GetLabelDetectionResult& AddLabels(LabelDetection&& value) { m_labels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline const Aws::String& GetLabelModelVersion() const{ return m_labelModelVersion; }
    inline void SetLabelModelVersion(const Aws::String& value) { m_labelModelVersion = value; }
    inline void SetLabelModelVersion(Aws::String&& value) { m_labelModelVersion = std::move(value); }
    inline void SetLabelModelVersion(const char* value) { m_labelModelVersion.assign(value); }
    inline GetLabelDetectionResult& WithLabelModelVersion(const Aws::String& value) { SetLabelModelVersion(value); return *this;}
    inline GetLabelDetectionResult& WithLabelModelVersion(Aws::String&& value) { SetLabelModelVersion(std::move(value)); return *this;}
    inline GetLabelDetectionResult& WithLabelModelVersion(const char* value) { SetLabelModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job identifier for the label detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartLabelDetection.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetLabelDetectionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetLabelDetectionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetLabelDetectionResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Video& GetVideo() const{ return m_video; }
    inline void SetVideo(const Video& value) { m_video = value; }
    inline void SetVideo(Video&& value) { m_video = std::move(value); }
    inline GetLabelDetectionResult& WithVideo(const Video& value) { SetVideo(value); return *this;}
    inline GetLabelDetectionResult& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job identifier specified in the call to StartLabelDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }
    inline void SetJobTag(const Aws::String& value) { m_jobTag = value; }
    inline void SetJobTag(Aws::String&& value) { m_jobTag = std::move(value); }
    inline void SetJobTag(const char* value) { m_jobTag.assign(value); }
    inline GetLabelDetectionResult& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}
    inline GetLabelDetectionResult& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}
    inline GetLabelDetectionResult& WithJobTag(const char* value) { SetJobTag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the paramters used when getting a response. Includes
     * information on aggregation and sorting methods.</p>
     */
    inline const GetLabelDetectionRequestMetadata& GetGetRequestMetadata() const{ return m_getRequestMetadata; }
    inline void SetGetRequestMetadata(const GetLabelDetectionRequestMetadata& value) { m_getRequestMetadata = value; }
    inline void SetGetRequestMetadata(GetLabelDetectionRequestMetadata&& value) { m_getRequestMetadata = std::move(value); }
    inline GetLabelDetectionResult& WithGetRequestMetadata(const GetLabelDetectionRequestMetadata& value) { SetGetRequestMetadata(value); return *this;}
    inline GetLabelDetectionResult& WithGetRequestMetadata(GetLabelDetectionRequestMetadata&& value) { SetGetRequestMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLabelDetectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLabelDetectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLabelDetectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    VideoMetadata m_videoMetadata;

    Aws::String m_nextToken;

    Aws::Vector<LabelDetection> m_labels;

    Aws::String m_labelModelVersion;

    Aws::String m_jobId;

    Video m_video;

    Aws::String m_jobTag;

    GetLabelDetectionRequestMetadata m_getRequestMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
