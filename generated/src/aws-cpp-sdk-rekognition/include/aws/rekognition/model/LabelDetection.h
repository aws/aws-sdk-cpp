﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/Label.h>
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
   * <p>Information about a label detected in a video analysis request and the time
   * the label was detected in the video. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/LabelDetection">AWS
   * API Reference</a></p>
   */
  class LabelDetection
  {
  public:
    AWS_REKOGNITION_API LabelDetection() = default;
    AWS_REKOGNITION_API LabelDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API LabelDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time, in milliseconds from the start of the video, that the label was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the label first appears.</p>
     */
    inline long long GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline LabelDetection& WithTimestamp(long long value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the detected label.</p>
     */
    inline const Label& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Label>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Label>
    LabelDetection& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in milliseconds defining the start of the timeline segment
     * containing a continuously detected label.</p>
     */
    inline long long GetStartTimestampMillis() const { return m_startTimestampMillis; }
    inline bool StartTimestampMillisHasBeenSet() const { return m_startTimestampMillisHasBeenSet; }
    inline void SetStartTimestampMillis(long long value) { m_startTimestampMillisHasBeenSet = true; m_startTimestampMillis = value; }
    inline LabelDetection& WithStartTimestampMillis(long long value) { SetStartTimestampMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in milliseconds defining the end of the timeline segment containing
     * a continuously detected label.</p>
     */
    inline long long GetEndTimestampMillis() const { return m_endTimestampMillis; }
    inline bool EndTimestampMillisHasBeenSet() const { return m_endTimestampMillisHasBeenSet; }
    inline void SetEndTimestampMillis(long long value) { m_endTimestampMillisHasBeenSet = true; m_endTimestampMillis = value; }
    inline LabelDetection& WithEndTimestampMillis(long long value) { SetEndTimestampMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time duration of a segment in milliseconds, I.e. time elapsed from
     * StartTimestampMillis to EndTimestampMillis.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline LabelDetection& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}
  private:

    long long m_timestamp{0};
    bool m_timestampHasBeenSet = false;

    Label m_label;
    bool m_labelHasBeenSet = false;

    long long m_startTimestampMillis{0};
    bool m_startTimestampMillisHasBeenSet = false;

    long long m_endTimestampMillis{0};
    bool m_endTimestampMillisHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
