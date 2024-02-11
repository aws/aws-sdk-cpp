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
    AWS_REKOGNITION_API GetTextDetectionResult();
    AWS_REKOGNITION_API GetTextDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetTextDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Current status of the text detection job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Current status of the text detection job.</p>
     */
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>Current status of the text detection job.</p>
     */
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>Current status of the text detection job.</p>
     */
    inline GetTextDetectionResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Current status of the text detection job.</p>
     */
    inline GetTextDetectionResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


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
    inline GetTextDetectionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetTextDetectionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetTextDetectionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    
    inline const VideoMetadata& GetVideoMetadata() const{ return m_videoMetadata; }

    
    inline void SetVideoMetadata(const VideoMetadata& value) { m_videoMetadata = value; }

    
    inline void SetVideoMetadata(VideoMetadata&& value) { m_videoMetadata = std::move(value); }

    
    inline GetTextDetectionResult& WithVideoMetadata(const VideoMetadata& value) { SetVideoMetadata(value); return *this;}

    
    inline GetTextDetectionResult& WithVideoMetadata(VideoMetadata&& value) { SetVideoMetadata(std::move(value)); return *this;}


    /**
     * <p>An array of text detected in the video. Each element contains the detected
     * text, the time in milliseconds from the start of the video that the text was
     * detected, and where it was detected on the screen.</p>
     */
    inline const Aws::Vector<TextDetectionResult>& GetTextDetections() const{ return m_textDetections; }

    /**
     * <p>An array of text detected in the video. Each element contains the detected
     * text, the time in milliseconds from the start of the video that the text was
     * detected, and where it was detected on the screen.</p>
     */
    inline void SetTextDetections(const Aws::Vector<TextDetectionResult>& value) { m_textDetections = value; }

    /**
     * <p>An array of text detected in the video. Each element contains the detected
     * text, the time in milliseconds from the start of the video that the text was
     * detected, and where it was detected on the screen.</p>
     */
    inline void SetTextDetections(Aws::Vector<TextDetectionResult>&& value) { m_textDetections = std::move(value); }

    /**
     * <p>An array of text detected in the video. Each element contains the detected
     * text, the time in milliseconds from the start of the video that the text was
     * detected, and where it was detected on the screen.</p>
     */
    inline GetTextDetectionResult& WithTextDetections(const Aws::Vector<TextDetectionResult>& value) { SetTextDetections(value); return *this;}

    /**
     * <p>An array of text detected in the video. Each element contains the detected
     * text, the time in milliseconds from the start of the video that the text was
     * detected, and where it was detected on the screen.</p>
     */
    inline GetTextDetectionResult& WithTextDetections(Aws::Vector<TextDetectionResult>&& value) { SetTextDetections(std::move(value)); return *this;}

    /**
     * <p>An array of text detected in the video. Each element contains the detected
     * text, the time in milliseconds from the start of the video that the text was
     * detected, and where it was detected on the screen.</p>
     */
    inline GetTextDetectionResult& AddTextDetections(const TextDetectionResult& value) { m_textDetections.push_back(value); return *this; }

    /**
     * <p>An array of text detected in the video. Each element contains the detected
     * text, the time in milliseconds from the start of the video that the text was
     * detected, and where it was detected on the screen.</p>
     */
    inline GetTextDetectionResult& AddTextDetections(TextDetectionResult&& value) { m_textDetections.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline GetTextDetectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline GetTextDetectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline GetTextDetectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Version number of the text detection model that was used to detect text.</p>
     */
    inline const Aws::String& GetTextModelVersion() const{ return m_textModelVersion; }

    /**
     * <p>Version number of the text detection model that was used to detect text.</p>
     */
    inline void SetTextModelVersion(const Aws::String& value) { m_textModelVersion = value; }

    /**
     * <p>Version number of the text detection model that was used to detect text.</p>
     */
    inline void SetTextModelVersion(Aws::String&& value) { m_textModelVersion = std::move(value); }

    /**
     * <p>Version number of the text detection model that was used to detect text.</p>
     */
    inline void SetTextModelVersion(const char* value) { m_textModelVersion.assign(value); }

    /**
     * <p>Version number of the text detection model that was used to detect text.</p>
     */
    inline GetTextDetectionResult& WithTextModelVersion(const Aws::String& value) { SetTextModelVersion(value); return *this;}

    /**
     * <p>Version number of the text detection model that was used to detect text.</p>
     */
    inline GetTextDetectionResult& WithTextModelVersion(Aws::String&& value) { SetTextModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the text detection model that was used to detect text.</p>
     */
    inline GetTextDetectionResult& WithTextModelVersion(const char* value) { SetTextModelVersion(value); return *this;}


    /**
     * <p>Job identifier for the text detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartTextDetection.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Job identifier for the text detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartTextDetection.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>Job identifier for the text detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartTextDetection.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>Job identifier for the text detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartTextDetection.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>Job identifier for the text detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartTextDetection.</p>
     */
    inline GetTextDetectionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Job identifier for the text detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartTextDetection.</p>
     */
    inline GetTextDetectionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Job identifier for the text detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartTextDetection.</p>
     */
    inline GetTextDetectionResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Video& GetVideo() const{ return m_video; }

    
    inline void SetVideo(const Video& value) { m_video = value; }

    
    inline void SetVideo(Video&& value) { m_video = std::move(value); }

    
    inline GetTextDetectionResult& WithVideo(const Video& value) { SetVideo(value); return *this;}

    
    inline GetTextDetectionResult& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>A job identifier specified in the call to StartTextDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>A job identifier specified in the call to StartTextDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTag = value; }

    /**
     * <p>A job identifier specified in the call to StartTextDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTag = std::move(value); }

    /**
     * <p>A job identifier specified in the call to StartTextDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline void SetJobTag(const char* value) { m_jobTag.assign(value); }

    /**
     * <p>A job identifier specified in the call to StartTextDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline GetTextDetectionResult& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>A job identifier specified in the call to StartTextDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline GetTextDetectionResult& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>A job identifier specified in the call to StartTextDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline GetTextDetectionResult& WithJobTag(const char* value) { SetJobTag(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTextDetectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTextDetectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTextDetectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    VideoMetadata m_videoMetadata;

    Aws::Vector<TextDetectionResult> m_textDetections;

    Aws::String m_nextToken;

    Aws::String m_textModelVersion;

    Aws::String m_jobId;

    Video m_video;

    Aws::String m_jobTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
