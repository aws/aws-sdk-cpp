/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/CelebrityRecognition.h>
#include <aws/rekognition/model/Video.h>
#include <aws/rekognition/model/VideoJobStatus.h>
#include <aws/rekognition/model/VideoMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Rekognition {
namespace Model {
class GetCelebrityRecognitionResult {
 public:
  AWS_REKOGNITION_API GetCelebrityRecognitionResult() = default;
  AWS_REKOGNITION_API GetCelebrityRecognitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_REKOGNITION_API GetCelebrityRecognitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the celebrity recognition job.</p>
   */
  inline VideoJobStatus GetJobStatus() const { return m_jobStatus; }
  inline void SetJobStatus(VideoJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline GetCelebrityRecognitionResult& WithJobStatus(VideoJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
   * message.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  GetCelebrityRecognitionResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about a video that Amazon Rekognition Video analyzed.
   * <code>Videometadata</code> is returned in every page of paginated responses from
   * a Amazon Rekognition Video operation.</p>
   */
  inline const VideoMetadata& GetVideoMetadata() const { return m_videoMetadata; }
  template <typename VideoMetadataT = VideoMetadata>
  void SetVideoMetadata(VideoMetadataT&& value) {
    m_videoMetadataHasBeenSet = true;
    m_videoMetadata = std::forward<VideoMetadataT>(value);
  }
  template <typename VideoMetadataT = VideoMetadata>
  GetCelebrityRecognitionResult& WithVideoMetadata(VideoMetadataT&& value) {
    SetVideoMetadata(std::forward<VideoMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, Amazon Rekognition Video returns this token
   * that you can use in the subsequent request to retrieve the next set of
   * celebrities.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetCelebrityRecognitionResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Array of celebrities recognized in the video.</p>
   */
  inline const Aws::Vector<CelebrityRecognition>& GetCelebrities() const { return m_celebrities; }
  template <typename CelebritiesT = Aws::Vector<CelebrityRecognition>>
  void SetCelebrities(CelebritiesT&& value) {
    m_celebritiesHasBeenSet = true;
    m_celebrities = std::forward<CelebritiesT>(value);
  }
  template <typename CelebritiesT = Aws::Vector<CelebrityRecognition>>
  GetCelebrityRecognitionResult& WithCelebrities(CelebritiesT&& value) {
    SetCelebrities(std::forward<CelebritiesT>(value));
    return *this;
  }
  template <typename CelebritiesT = CelebrityRecognition>
  GetCelebrityRecognitionResult& AddCelebrities(CelebritiesT&& value) {
    m_celebritiesHasBeenSet = true;
    m_celebrities.emplace_back(std::forward<CelebritiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Job identifier for the celebrity recognition operation for which you want to
   * obtain results. The job identifer is returned by an initial call to
   * StartCelebrityRecognition.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetCelebrityRecognitionResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Video& GetVideo() const { return m_video; }
  template <typename VideoT = Video>
  void SetVideo(VideoT&& value) {
    m_videoHasBeenSet = true;
    m_video = std::forward<VideoT>(value);
  }
  template <typename VideoT = Video>
  GetCelebrityRecognitionResult& WithVideo(VideoT&& value) {
    SetVideo(std::forward<VideoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A job identifier specified in the call to StartCelebrityRecognition and
   * returned in the job completion notification sent to your Amazon Simple
   * Notification Service topic.</p>
   */
  inline const Aws::String& GetJobTag() const { return m_jobTag; }
  template <typename JobTagT = Aws::String>
  void SetJobTag(JobTagT&& value) {
    m_jobTagHasBeenSet = true;
    m_jobTag = std::forward<JobTagT>(value);
  }
  template <typename JobTagT = Aws::String>
  GetCelebrityRecognitionResult& WithJobTag(JobTagT&& value) {
    SetJobTag(std::forward<JobTagT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetCelebrityRecognitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  VideoJobStatus m_jobStatus{VideoJobStatus::NOT_SET};

  Aws::String m_statusMessage;

  VideoMetadata m_videoMetadata;

  Aws::String m_nextToken;

  Aws::Vector<CelebrityRecognition> m_celebrities;

  Aws::String m_jobId;

  Video m_video;

  Aws::String m_jobTag;

  Aws::String m_requestId;
  bool m_jobStatusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_videoMetadataHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_celebritiesHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_videoHasBeenSet = false;
  bool m_jobTagHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
