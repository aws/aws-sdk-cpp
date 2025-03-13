/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for a SCTE-35 splice_insert message.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35SpliceInsertScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class Scte35SpliceInsertScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API Scte35SpliceInsertScheduleActionSettings() = default;
    AWS_MEDIALIVE_API Scte35SpliceInsertScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35SpliceInsertScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional, the duration for the splice_insert, in 90 KHz ticks. To convert
     * seconds to ticks, multiple the seconds by 90,000. If you enter a duration, there
     * is an expectation that the downstream system can read the duration and cue in at
     * that time. If you do not enter a duration, the splice_insert will continue
     * indefinitely and there is an expectation that you will enter a return_to_network
     * to end the splice_insert at the appropriate time.
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Scte35SpliceInsertScheduleActionSettings& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline long long GetSpliceEventId() const { return m_spliceEventId; }
    inline bool SpliceEventIdHasBeenSet() const { return m_spliceEventIdHasBeenSet; }
    inline void SetSpliceEventId(long long value) { m_spliceEventIdHasBeenSet = true; m_spliceEventId = value; }
    inline Scte35SpliceInsertScheduleActionSettings& WithSpliceEventId(long long value) { SetSpliceEventId(value); return *this;}
    ///@}
  private:

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    long long m_spliceEventId{0};
    bool m_spliceEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
