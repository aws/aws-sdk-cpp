/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/VideoJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Video.h>
#include <aws/rekognition/model/VideoMetadata.h>
#include <aws/rekognition/model/AudioMetadata.h>
#include <aws/rekognition/model/SegmentDetection.h>
#include <aws/rekognition/model/SegmentTypeInfo.h>
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
  class GetSegmentDetectionResult
  {
  public:
    AWS_REKOGNITION_API GetSegmentDetectionResult() = default;
    AWS_REKOGNITION_API GetSegmentDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetSegmentDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Current status of the segment detection job.</p>
     */
    inline VideoJobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(VideoJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetSegmentDetectionResult& WithJobStatus(VideoJobStatus value) { SetJobStatus(value); return *this;}
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
    GetSegmentDetectionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline const Aws::Vector<VideoMetadata>& GetVideoMetadata() const { return m_videoMetadata; }
    template<typename VideoMetadataT = Aws::Vector<VideoMetadata>>
    void SetVideoMetadata(VideoMetadataT&& value) { m_videoMetadataHasBeenSet = true; m_videoMetadata = std::forward<VideoMetadataT>(value); }
    template<typename VideoMetadataT = Aws::Vector<VideoMetadata>>
    GetSegmentDetectionResult& WithVideoMetadata(VideoMetadataT&& value) { SetVideoMetadata(std::forward<VideoMetadataT>(value)); return *this;}
    template<typename VideoMetadataT = VideoMetadata>
    GetSegmentDetectionResult& AddVideoMetadata(VideoMetadataT&& value) { m_videoMetadataHasBeenSet = true; m_videoMetadata.emplace_back(std::forward<VideoMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline const Aws::Vector<AudioMetadata>& GetAudioMetadata() const { return m_audioMetadata; }
    template<typename AudioMetadataT = Aws::Vector<AudioMetadata>>
    void SetAudioMetadata(AudioMetadataT&& value) { m_audioMetadataHasBeenSet = true; m_audioMetadata = std::forward<AudioMetadataT>(value); }
    template<typename AudioMetadataT = Aws::Vector<AudioMetadata>>
    GetSegmentDetectionResult& WithAudioMetadata(AudioMetadataT&& value) { SetAudioMetadata(std::forward<AudioMetadataT>(value)); return *this;}
    template<typename AudioMetadataT = AudioMetadata>
    GetSegmentDetectionResult& AddAudioMetadata(AudioMetadataT&& value) { m_audioMetadataHasBeenSet = true; m_audioMetadata.emplace_back(std::forward<AudioMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSegmentDetectionResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline const Aws::Vector<SegmentDetection>& GetSegments() const { return m_segments; }
    template<typename SegmentsT = Aws::Vector<SegmentDetection>>
    void SetSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments = std::forward<SegmentsT>(value); }
    template<typename SegmentsT = Aws::Vector<SegmentDetection>>
    GetSegmentDetectionResult& WithSegments(SegmentsT&& value) { SetSegments(std::forward<SegmentsT>(value)); return *this;}
    template<typename SegmentsT = SegmentDetection>
    GetSegmentDetectionResult& AddSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments.emplace_back(std::forward<SegmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline const Aws::Vector<SegmentTypeInfo>& GetSelectedSegmentTypes() const { return m_selectedSegmentTypes; }
    template<typename SelectedSegmentTypesT = Aws::Vector<SegmentTypeInfo>>
    void SetSelectedSegmentTypes(SelectedSegmentTypesT&& value) { m_selectedSegmentTypesHasBeenSet = true; m_selectedSegmentTypes = std::forward<SelectedSegmentTypesT>(value); }
    template<typename SelectedSegmentTypesT = Aws::Vector<SegmentTypeInfo>>
    GetSegmentDetectionResult& WithSelectedSegmentTypes(SelectedSegmentTypesT&& value) { SetSelectedSegmentTypes(std::forward<SelectedSegmentTypesT>(value)); return *this;}
    template<typename SelectedSegmentTypesT = SegmentTypeInfo>
    GetSegmentDetectionResult& AddSelectedSegmentTypes(SelectedSegmentTypesT&& value) { m_selectedSegmentTypesHasBeenSet = true; m_selectedSegmentTypes.emplace_back(std::forward<SelectedSegmentTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Job identifier for the segment detection operation for which you want to
     * obtain results. The job identifer is returned by an initial call to
     * StartSegmentDetection.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetSegmentDetectionResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Video& GetVideo() const { return m_video; }
    template<typename VideoT = Video>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = Video>
    GetSegmentDetectionResult& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job identifier specified in the call to StartSegmentDetection and returned
     * in the job completion notification sent to your Amazon Simple Notification
     * Service topic.</p>
     */
    inline const Aws::String& GetJobTag() const { return m_jobTag; }
    template<typename JobTagT = Aws::String>
    void SetJobTag(JobTagT&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::forward<JobTagT>(value); }
    template<typename JobTagT = Aws::String>
    GetSegmentDetectionResult& WithJobTag(JobTagT&& value) { SetJobTag(std::forward<JobTagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSegmentDetectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VideoJobStatus m_jobStatus{VideoJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<VideoMetadata> m_videoMetadata;
    bool m_videoMetadataHasBeenSet = false;

    Aws::Vector<AudioMetadata> m_audioMetadata;
    bool m_audioMetadataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SegmentDetection> m_segments;
    bool m_segmentsHasBeenSet = false;

    Aws::Vector<SegmentTypeInfo> m_selectedSegmentTypes;
    bool m_selectedSegmentTypesHasBeenSet = false;

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
