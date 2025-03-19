/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/SegmentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/TechnicalCueSegment.h>
#include <aws/rekognition/model/ShotSegment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>A technical cue or shot detection segment detected in a video. An array of
   * <code>SegmentDetection</code> objects containing all segments detected in a
   * stored video is returned by <a>GetSegmentDetection</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SegmentDetection">AWS
   * API Reference</a></p>
   */
  class SegmentDetection
  {
  public:
    AWS_REKOGNITION_API SegmentDetection() = default;
    AWS_REKOGNITION_API SegmentDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API SegmentDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the segment. Valid values are <code>TECHNICAL_CUE</code> and
     * <code>SHOT</code>.</p>
     */
    inline SegmentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SegmentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SegmentDetection& WithType(SegmentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the detected segment in milliseconds from the start of the
     * video. This value is rounded down. For example, if the actual timestamp is
     * 100.6667 milliseconds, Amazon Rekognition Video returns a value of 100
     * millis.</p>
     */
    inline long long GetStartTimestampMillis() const { return m_startTimestampMillis; }
    inline bool StartTimestampMillisHasBeenSet() const { return m_startTimestampMillisHasBeenSet; }
    inline void SetStartTimestampMillis(long long value) { m_startTimestampMillisHasBeenSet = true; m_startTimestampMillis = value; }
    inline SegmentDetection& WithStartTimestampMillis(long long value) { SetStartTimestampMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the detected segment, in milliseconds, from the start of the
     * video. This value is rounded down.</p>
     */
    inline long long GetEndTimestampMillis() const { return m_endTimestampMillis; }
    inline bool EndTimestampMillisHasBeenSet() const { return m_endTimestampMillisHasBeenSet; }
    inline void SetEndTimestampMillis(long long value) { m_endTimestampMillisHasBeenSet = true; m_endTimestampMillis = value; }
    inline SegmentDetection& WithEndTimestampMillis(long long value) { SetEndTimestampMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the detected segment in milliseconds. </p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline SegmentDetection& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline const Aws::String& GetStartTimecodeSMPTE() const { return m_startTimecodeSMPTE; }
    inline bool StartTimecodeSMPTEHasBeenSet() const { return m_startTimecodeSMPTEHasBeenSet; }
    template<typename StartTimecodeSMPTET = Aws::String>
    void SetStartTimecodeSMPTE(StartTimecodeSMPTET&& value) { m_startTimecodeSMPTEHasBeenSet = true; m_startTimecodeSMPTE = std::forward<StartTimecodeSMPTET>(value); }
    template<typename StartTimecodeSMPTET = Aws::String>
    SegmentDetection& WithStartTimecodeSMPTE(StartTimecodeSMPTET&& value) { SetStartTimecodeSMPTE(std::forward<StartTimecodeSMPTET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline const Aws::String& GetEndTimecodeSMPTE() const { return m_endTimecodeSMPTE; }
    inline bool EndTimecodeSMPTEHasBeenSet() const { return m_endTimecodeSMPTEHasBeenSet; }
    template<typename EndTimecodeSMPTET = Aws::String>
    void SetEndTimecodeSMPTE(EndTimecodeSMPTET&& value) { m_endTimecodeSMPTEHasBeenSet = true; m_endTimecodeSMPTE = std::forward<EndTimecodeSMPTET>(value); }
    template<typename EndTimecodeSMPTET = Aws::String>
    SegmentDetection& WithEndTimecodeSMPTE(EndTimecodeSMPTET&& value) { SetEndTimecodeSMPTE(std::forward<EndTimecodeSMPTET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline const Aws::String& GetDurationSMPTE() const { return m_durationSMPTE; }
    inline bool DurationSMPTEHasBeenSet() const { return m_durationSMPTEHasBeenSet; }
    template<typename DurationSMPTET = Aws::String>
    void SetDurationSMPTE(DurationSMPTET&& value) { m_durationSMPTEHasBeenSet = true; m_durationSMPTE = std::forward<DurationSMPTET>(value); }
    template<typename DurationSMPTET = Aws::String>
    SegmentDetection& WithDurationSMPTE(DurationSMPTET&& value) { SetDurationSMPTE(std::forward<DurationSMPTET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the segment is a technical cue, contains information about the technical
     * cue.</p>
     */
    inline const TechnicalCueSegment& GetTechnicalCueSegment() const { return m_technicalCueSegment; }
    inline bool TechnicalCueSegmentHasBeenSet() const { return m_technicalCueSegmentHasBeenSet; }
    template<typename TechnicalCueSegmentT = TechnicalCueSegment>
    void SetTechnicalCueSegment(TechnicalCueSegmentT&& value) { m_technicalCueSegmentHasBeenSet = true; m_technicalCueSegment = std::forward<TechnicalCueSegmentT>(value); }
    template<typename TechnicalCueSegmentT = TechnicalCueSegment>
    SegmentDetection& WithTechnicalCueSegment(TechnicalCueSegmentT&& value) { SetTechnicalCueSegment(std::forward<TechnicalCueSegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the segment is a shot detection, contains information about the shot
     * detection.</p>
     */
    inline const ShotSegment& GetShotSegment() const { return m_shotSegment; }
    inline bool ShotSegmentHasBeenSet() const { return m_shotSegmentHasBeenSet; }
    template<typename ShotSegmentT = ShotSegment>
    void SetShotSegment(ShotSegmentT&& value) { m_shotSegmentHasBeenSet = true; m_shotSegment = std::forward<ShotSegmentT>(value); }
    template<typename ShotSegmentT = ShotSegment>
    SegmentDetection& WithShotSegment(ShotSegmentT&& value) { SetShotSegment(std::forward<ShotSegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The frame number of the start of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline long long GetStartFrameNumber() const { return m_startFrameNumber; }
    inline bool StartFrameNumberHasBeenSet() const { return m_startFrameNumberHasBeenSet; }
    inline void SetStartFrameNumber(long long value) { m_startFrameNumberHasBeenSet = true; m_startFrameNumber = value; }
    inline SegmentDetection& WithStartFrameNumber(long long value) { SetStartFrameNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The frame number at the end of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline long long GetEndFrameNumber() const { return m_endFrameNumber; }
    inline bool EndFrameNumberHasBeenSet() const { return m_endFrameNumberHasBeenSet; }
    inline void SetEndFrameNumber(long long value) { m_endFrameNumberHasBeenSet = true; m_endFrameNumber = value; }
    inline SegmentDetection& WithEndFrameNumber(long long value) { SetEndFrameNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The duration of a video segment, expressed in frames. </p>
     */
    inline long long GetDurationFrames() const { return m_durationFrames; }
    inline bool DurationFramesHasBeenSet() const { return m_durationFramesHasBeenSet; }
    inline void SetDurationFrames(long long value) { m_durationFramesHasBeenSet = true; m_durationFrames = value; }
    inline SegmentDetection& WithDurationFrames(long long value) { SetDurationFrames(value); return *this;}
    ///@}
  private:

    SegmentType m_type{SegmentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    long long m_startTimestampMillis{0};
    bool m_startTimestampMillisHasBeenSet = false;

    long long m_endTimestampMillis{0};
    bool m_endTimestampMillisHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;

    Aws::String m_startTimecodeSMPTE;
    bool m_startTimecodeSMPTEHasBeenSet = false;

    Aws::String m_endTimecodeSMPTE;
    bool m_endTimecodeSMPTEHasBeenSet = false;

    Aws::String m_durationSMPTE;
    bool m_durationSMPTEHasBeenSet = false;

    TechnicalCueSegment m_technicalCueSegment;
    bool m_technicalCueSegmentHasBeenSet = false;

    ShotSegment m_shotSegment;
    bool m_shotSegmentHasBeenSet = false;

    long long m_startFrameNumber{0};
    bool m_startFrameNumberHasBeenSet = false;

    long long m_endFrameNumber{0};
    bool m_endFrameNumberHasBeenSet = false;

    long long m_durationFrames{0};
    bool m_durationFramesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
