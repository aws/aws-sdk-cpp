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
    AWS_REKOGNITION_API SegmentDetection();
    AWS_REKOGNITION_API SegmentDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API SegmentDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the segment. Valid values are <code>TECHNICAL_CUE</code> and
     * <code>SHOT</code>.</p>
     */
    inline const SegmentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the segment. Valid values are <code>TECHNICAL_CUE</code> and
     * <code>SHOT</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the segment. Valid values are <code>TECHNICAL_CUE</code> and
     * <code>SHOT</code>.</p>
     */
    inline void SetType(const SegmentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the segment. Valid values are <code>TECHNICAL_CUE</code> and
     * <code>SHOT</code>.</p>
     */
    inline void SetType(SegmentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the segment. Valid values are <code>TECHNICAL_CUE</code> and
     * <code>SHOT</code>.</p>
     */
    inline SegmentDetection& WithType(const SegmentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the segment. Valid values are <code>TECHNICAL_CUE</code> and
     * <code>SHOT</code>.</p>
     */
    inline SegmentDetection& WithType(SegmentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The start time of the detected segment in milliseconds from the start of the
     * video. This value is rounded down. For example, if the actual timestamp is
     * 100.6667 milliseconds, Amazon Rekognition Video returns a value of 100
     * millis.</p>
     */
    inline long long GetStartTimestampMillis() const{ return m_startTimestampMillis; }

    /**
     * <p>The start time of the detected segment in milliseconds from the start of the
     * video. This value is rounded down. For example, if the actual timestamp is
     * 100.6667 milliseconds, Amazon Rekognition Video returns a value of 100
     * millis.</p>
     */
    inline bool StartTimestampMillisHasBeenSet() const { return m_startTimestampMillisHasBeenSet; }

    /**
     * <p>The start time of the detected segment in milliseconds from the start of the
     * video. This value is rounded down. For example, if the actual timestamp is
     * 100.6667 milliseconds, Amazon Rekognition Video returns a value of 100
     * millis.</p>
     */
    inline void SetStartTimestampMillis(long long value) { m_startTimestampMillisHasBeenSet = true; m_startTimestampMillis = value; }

    /**
     * <p>The start time of the detected segment in milliseconds from the start of the
     * video. This value is rounded down. For example, if the actual timestamp is
     * 100.6667 milliseconds, Amazon Rekognition Video returns a value of 100
     * millis.</p>
     */
    inline SegmentDetection& WithStartTimestampMillis(long long value) { SetStartTimestampMillis(value); return *this;}


    /**
     * <p>The end time of the detected segment, in milliseconds, from the start of the
     * video. This value is rounded down.</p>
     */
    inline long long GetEndTimestampMillis() const{ return m_endTimestampMillis; }

    /**
     * <p>The end time of the detected segment, in milliseconds, from the start of the
     * video. This value is rounded down.</p>
     */
    inline bool EndTimestampMillisHasBeenSet() const { return m_endTimestampMillisHasBeenSet; }

    /**
     * <p>The end time of the detected segment, in milliseconds, from the start of the
     * video. This value is rounded down.</p>
     */
    inline void SetEndTimestampMillis(long long value) { m_endTimestampMillisHasBeenSet = true; m_endTimestampMillis = value; }

    /**
     * <p>The end time of the detected segment, in milliseconds, from the start of the
     * video. This value is rounded down.</p>
     */
    inline SegmentDetection& WithEndTimestampMillis(long long value) { SetEndTimestampMillis(value); return *this;}


    /**
     * <p>The duration of the detected segment in milliseconds. </p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }

    /**
     * <p>The duration of the detected segment in milliseconds. </p>
     */
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }

    /**
     * <p>The duration of the detected segment in milliseconds. </p>
     */
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }

    /**
     * <p>The duration of the detected segment in milliseconds. </p>
     */
    inline SegmentDetection& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}


    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline const Aws::String& GetStartTimecodeSMPTE() const{ return m_startTimecodeSMPTE; }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline bool StartTimecodeSMPTEHasBeenSet() const { return m_startTimecodeSMPTEHasBeenSet; }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline void SetStartTimecodeSMPTE(const Aws::String& value) { m_startTimecodeSMPTEHasBeenSet = true; m_startTimecodeSMPTE = value; }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline void SetStartTimecodeSMPTE(Aws::String&& value) { m_startTimecodeSMPTEHasBeenSet = true; m_startTimecodeSMPTE = std::move(value); }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline void SetStartTimecodeSMPTE(const char* value) { m_startTimecodeSMPTEHasBeenSet = true; m_startTimecodeSMPTE.assign(value); }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline SegmentDetection& WithStartTimecodeSMPTE(const Aws::String& value) { SetStartTimecodeSMPTE(value); return *this;}

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline SegmentDetection& WithStartTimecodeSMPTE(Aws::String&& value) { SetStartTimecodeSMPTE(std::move(value)); return *this;}

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the start
     * of a detected segment. <code>StartTimecode</code> is in <i>HH:MM:SS:fr</i>
     * format (and <i>;fr</i> for drop frame-rates). </p>
     */
    inline SegmentDetection& WithStartTimecodeSMPTE(const char* value) { SetStartTimecodeSMPTE(value); return *this;}


    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline const Aws::String& GetEndTimecodeSMPTE() const{ return m_endTimecodeSMPTE; }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline bool EndTimecodeSMPTEHasBeenSet() const { return m_endTimecodeSMPTEHasBeenSet; }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline void SetEndTimecodeSMPTE(const Aws::String& value) { m_endTimecodeSMPTEHasBeenSet = true; m_endTimecodeSMPTE = value; }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline void SetEndTimecodeSMPTE(Aws::String&& value) { m_endTimecodeSMPTEHasBeenSet = true; m_endTimecodeSMPTE = std::move(value); }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline void SetEndTimecodeSMPTE(const char* value) { m_endTimecodeSMPTEHasBeenSet = true; m_endTimecodeSMPTE.assign(value); }

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline SegmentDetection& WithEndTimecodeSMPTE(const Aws::String& value) { SetEndTimecodeSMPTE(value); return *this;}

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline SegmentDetection& WithEndTimecodeSMPTE(Aws::String&& value) { SetEndTimecodeSMPTE(std::move(value)); return *this;}

    /**
     * <p>The frame-accurate SMPTE timecode, from the start of a video, for the end of
     * a detected segment. <code>EndTimecode</code> is in <i>HH:MM:SS:fr</i> format
     * (and <i>;fr</i> for drop frame-rates).</p>
     */
    inline SegmentDetection& WithEndTimecodeSMPTE(const char* value) { SetEndTimecodeSMPTE(value); return *this;}


    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline const Aws::String& GetDurationSMPTE() const{ return m_durationSMPTE; }

    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline bool DurationSMPTEHasBeenSet() const { return m_durationSMPTEHasBeenSet; }

    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline void SetDurationSMPTE(const Aws::String& value) { m_durationSMPTEHasBeenSet = true; m_durationSMPTE = value; }

    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline void SetDurationSMPTE(Aws::String&& value) { m_durationSMPTEHasBeenSet = true; m_durationSMPTE = std::move(value); }

    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline void SetDurationSMPTE(const char* value) { m_durationSMPTEHasBeenSet = true; m_durationSMPTE.assign(value); }

    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline SegmentDetection& WithDurationSMPTE(const Aws::String& value) { SetDurationSMPTE(value); return *this;}

    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline SegmentDetection& WithDurationSMPTE(Aws::String&& value) { SetDurationSMPTE(std::move(value)); return *this;}

    /**
     * <p>The duration of the timecode for the detected segment in SMPTE format.</p>
     */
    inline SegmentDetection& WithDurationSMPTE(const char* value) { SetDurationSMPTE(value); return *this;}


    /**
     * <p>If the segment is a technical cue, contains information about the technical
     * cue.</p>
     */
    inline const TechnicalCueSegment& GetTechnicalCueSegment() const{ return m_technicalCueSegment; }

    /**
     * <p>If the segment is a technical cue, contains information about the technical
     * cue.</p>
     */
    inline bool TechnicalCueSegmentHasBeenSet() const { return m_technicalCueSegmentHasBeenSet; }

    /**
     * <p>If the segment is a technical cue, contains information about the technical
     * cue.</p>
     */
    inline void SetTechnicalCueSegment(const TechnicalCueSegment& value) { m_technicalCueSegmentHasBeenSet = true; m_technicalCueSegment = value; }

    /**
     * <p>If the segment is a technical cue, contains information about the technical
     * cue.</p>
     */
    inline void SetTechnicalCueSegment(TechnicalCueSegment&& value) { m_technicalCueSegmentHasBeenSet = true; m_technicalCueSegment = std::move(value); }

    /**
     * <p>If the segment is a technical cue, contains information about the technical
     * cue.</p>
     */
    inline SegmentDetection& WithTechnicalCueSegment(const TechnicalCueSegment& value) { SetTechnicalCueSegment(value); return *this;}

    /**
     * <p>If the segment is a technical cue, contains information about the technical
     * cue.</p>
     */
    inline SegmentDetection& WithTechnicalCueSegment(TechnicalCueSegment&& value) { SetTechnicalCueSegment(std::move(value)); return *this;}


    /**
     * <p>If the segment is a shot detection, contains information about the shot
     * detection.</p>
     */
    inline const ShotSegment& GetShotSegment() const{ return m_shotSegment; }

    /**
     * <p>If the segment is a shot detection, contains information about the shot
     * detection.</p>
     */
    inline bool ShotSegmentHasBeenSet() const { return m_shotSegmentHasBeenSet; }

    /**
     * <p>If the segment is a shot detection, contains information about the shot
     * detection.</p>
     */
    inline void SetShotSegment(const ShotSegment& value) { m_shotSegmentHasBeenSet = true; m_shotSegment = value; }

    /**
     * <p>If the segment is a shot detection, contains information about the shot
     * detection.</p>
     */
    inline void SetShotSegment(ShotSegment&& value) { m_shotSegmentHasBeenSet = true; m_shotSegment = std::move(value); }

    /**
     * <p>If the segment is a shot detection, contains information about the shot
     * detection.</p>
     */
    inline SegmentDetection& WithShotSegment(const ShotSegment& value) { SetShotSegment(value); return *this;}

    /**
     * <p>If the segment is a shot detection, contains information about the shot
     * detection.</p>
     */
    inline SegmentDetection& WithShotSegment(ShotSegment&& value) { SetShotSegment(std::move(value)); return *this;}


    /**
     * <p> The frame number of the start of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline long long GetStartFrameNumber() const{ return m_startFrameNumber; }

    /**
     * <p> The frame number of the start of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline bool StartFrameNumberHasBeenSet() const { return m_startFrameNumberHasBeenSet; }

    /**
     * <p> The frame number of the start of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline void SetStartFrameNumber(long long value) { m_startFrameNumberHasBeenSet = true; m_startFrameNumber = value; }

    /**
     * <p> The frame number of the start of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline SegmentDetection& WithStartFrameNumber(long long value) { SetStartFrameNumber(value); return *this;}


    /**
     * <p> The frame number at the end of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline long long GetEndFrameNumber() const{ return m_endFrameNumber; }

    /**
     * <p> The frame number at the end of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline bool EndFrameNumberHasBeenSet() const { return m_endFrameNumberHasBeenSet; }

    /**
     * <p> The frame number at the end of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline void SetEndFrameNumber(long long value) { m_endFrameNumberHasBeenSet = true; m_endFrameNumber = value; }

    /**
     * <p> The frame number at the end of a video segment, using a frame index that
     * starts with 0. </p>
     */
    inline SegmentDetection& WithEndFrameNumber(long long value) { SetEndFrameNumber(value); return *this;}


    /**
     * <p> The duration of a video segment, expressed in frames. </p>
     */
    inline long long GetDurationFrames() const{ return m_durationFrames; }

    /**
     * <p> The duration of a video segment, expressed in frames. </p>
     */
    inline bool DurationFramesHasBeenSet() const { return m_durationFramesHasBeenSet; }

    /**
     * <p> The duration of a video segment, expressed in frames. </p>
     */
    inline void SetDurationFrames(long long value) { m_durationFramesHasBeenSet = true; m_durationFrames = value; }

    /**
     * <p> The duration of a video segment, expressed in frames. </p>
     */
    inline SegmentDetection& WithDurationFrames(long long value) { SetDurationFrames(value); return *this;}

  private:

    SegmentType m_type;
    bool m_typeHasBeenSet = false;

    long long m_startTimestampMillis;
    bool m_startTimestampMillisHasBeenSet = false;

    long long m_endTimestampMillis;
    bool m_endTimestampMillisHasBeenSet = false;

    long long m_durationMillis;
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

    long long m_startFrameNumber;
    bool m_startFrameNumberHasBeenSet = false;

    long long m_endFrameNumber;
    bool m_endFrameNumberHasBeenSet = false;

    long long m_durationFrames;
    bool m_durationFramesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
