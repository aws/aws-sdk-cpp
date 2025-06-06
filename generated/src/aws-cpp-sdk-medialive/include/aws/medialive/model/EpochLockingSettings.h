﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Epoch Locking Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EpochLockingSettings">AWS
   * API Reference</a></p>
   */
  class EpochLockingSettings
  {
  public:
    AWS_MEDIALIVE_API EpochLockingSettings() = default;
    AWS_MEDIALIVE_API EpochLockingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API EpochLockingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional. Enter a value here to use a custom epoch, instead of the standard
     * epoch (which started at 1970-01-01T00:00:00 UTC). Specify the start time of the
     * custom epoch, in YYYY-MM-DDTHH:MM:SS in UTC. The time must be
     * 2000-01-01T00:00:00 or later. Always set the MM:SS portion to 00:00.
     */
    inline const Aws::String& GetCustomEpoch() const { return m_customEpoch; }
    inline bool CustomEpochHasBeenSet() const { return m_customEpochHasBeenSet; }
    template<typename CustomEpochT = Aws::String>
    void SetCustomEpoch(CustomEpochT&& value) { m_customEpochHasBeenSet = true; m_customEpoch = std::forward<CustomEpochT>(value); }
    template<typename CustomEpochT = Aws::String>
    EpochLockingSettings& WithCustomEpoch(CustomEpochT&& value) { SetCustomEpoch(std::forward<CustomEpochT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Enter a time for the jam sync. The default is midnight UTC. When epoch
     * locking is enabled, MediaLive performs a daily jam sync on every output encode
     * to ensure timecodes don’t diverge from the wall clock. The jam sync applies only
     * to encodes with frame rate of 29.97 or 59.94 FPS. To override, enter a time in
     * HH:MM:SS in UTC. Always set the MM:SS portion to 00:00.
     */
    inline const Aws::String& GetJamSyncTime() const { return m_jamSyncTime; }
    inline bool JamSyncTimeHasBeenSet() const { return m_jamSyncTimeHasBeenSet; }
    template<typename JamSyncTimeT = Aws::String>
    void SetJamSyncTime(JamSyncTimeT&& value) { m_jamSyncTimeHasBeenSet = true; m_jamSyncTime = std::forward<JamSyncTimeT>(value); }
    template<typename JamSyncTimeT = Aws::String>
    EpochLockingSettings& WithJamSyncTime(JamSyncTimeT&& value) { SetJamSyncTime(std::forward<JamSyncTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customEpoch;
    bool m_customEpochHasBeenSet = false;

    Aws::String m_jamSyncTime;
    bool m_jamSyncTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
