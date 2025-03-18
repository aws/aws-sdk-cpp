/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TimecodeConfigSource.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Timecode Config<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TimecodeConfig">AWS
   * API Reference</a></p>
   */
  class TimecodeConfig
  {
  public:
    AWS_MEDIALIVE_API TimecodeConfig() = default;
    AWS_MEDIALIVE_API TimecodeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TimecodeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Identifies the source for the timecode that will be associated with the events
     * outputs.
-Embedded (embedded): Initialize the output timecode with timecode from
     * the the source.  If no embedded timecode is detected in the source, the system
     * falls back to using "Start at 0" (zerobased).
-System Clock (systemclock): Use
     * the UTC time.
-Start at 0 (zerobased): The time of the first frame of the event
     * will be 00:00:00:00.
     */
    inline TimecodeConfigSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(TimecodeConfigSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline TimecodeConfig& WithSource(TimecodeConfigSource value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * Threshold in frames beyond which output timecode is resynchronized to the input
     * timecode. Discrepancies below this threshold are permitted to avoid unnecessary
     * discontinuities in the output timecode. No timecode sync when this is not
     * specified.
     */
    inline int GetSyncThreshold() const { return m_syncThreshold; }
    inline bool SyncThresholdHasBeenSet() const { return m_syncThresholdHasBeenSet; }
    inline void SetSyncThreshold(int value) { m_syncThresholdHasBeenSet = true; m_syncThreshold = value; }
    inline TimecodeConfig& WithSyncThreshold(int value) { SetSyncThreshold(value); return *this;}
    ///@}
  private:

    TimecodeConfigSource m_source{TimecodeConfigSource::NOT_SET};
    bool m_sourceHasBeenSet = false;

    int m_syncThreshold{0};
    bool m_syncThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
