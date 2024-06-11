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
#include <aws/rekognition/model/FaceDetection.h>
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
  class GetFaceDetectionResult
  {
  public:
    AWS_REKOGNITION_API GetFaceDetectionResult();
    AWS_REKOGNITION_API GetFaceDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetFaceDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the face detection job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }
    inline GetFaceDetectionResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}
    inline GetFaceDetectionResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
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
    inline GetFaceDetectionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetFaceDetectionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetFaceDetectionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
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
    inline GetFaceDetectionResult& WithVideoMetadata(const VideoMetadata& value) { SetVideoMetadata(value); return *this;}
    inline GetFaceDetectionResult& WithVideoMetadata(VideoMetadata&& value) { SetVideoMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of faces. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetFaceDetectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetFaceDetectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetFaceDetectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of faces detected in the video. Each element contains a detected
     * face's details and the time, in milliseconds from the start of the video, the
     * face was detected. </p>
     */
    inline const Aws::Vector<FaceDetection>& GetFaces() const{ return m_faces; }
    inline void SetFaces(const Aws::Vector<FaceDetection>& value) { m_faces = value; }
    inline void SetFaces(Aws::Vector<FaceDetection>&& value) { m_faces = std::move(value); }
    inline GetFaceDetectionResult& WithFaces(const Aws::Vector<FaceDetection>& value) { SetFaces(value); return *this;}
    inline GetFaceDetectionResult& WithFaces(Aws::Vector<FaceDetection>&& value) { SetFaces(std::move(value)); return *this;}
    inline GetFaceDetectionResult& AddFaces(const FaceDetection& value) { m_faces.push_back(value); return *this; }
    inline GetFaceDetectionResult& AddFaces(FaceDetection&& value) { m_faces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Job identifier for the face detection operation for which you want to obtain
     * results. The job identifer is returned by an initial call to
     * StartFaceDetection.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetFaceDetectionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetFaceDetectionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetFaceDetectionResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Video& GetVideo() const{ return m_video; }
    inline void SetVideo(const Video& value) { m_video = value; }
    inline void SetVideo(Video&& value) { m_video = std::move(value); }
    inline GetFaceDetectionResult& WithVideo(const Video& value) { SetVideo(value); return *this;}
    inline GetFaceDetectionResult& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job identifier specified in the call to StartFaceDetection and returned in
     * the job completion notification sent to your Amazon Simple Notification Service
     * topic.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }
    inline void SetJobTag(const Aws::String& value) { m_jobTag = value; }
    inline void SetJobTag(Aws::String&& value) { m_jobTag = std::move(value); }
    inline void SetJobTag(const char* value) { m_jobTag.assign(value); }
    inline GetFaceDetectionResult& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}
    inline GetFaceDetectionResult& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}
    inline GetFaceDetectionResult& WithJobTag(const char* value) { SetJobTag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFaceDetectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFaceDetectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFaceDetectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    VideoMetadata m_videoMetadata;

    Aws::String m_nextToken;

    Aws::Vector<FaceDetection> m_faces;

    Aws::String m_jobId;

    Video m_video;

    Aws::String m_jobTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
