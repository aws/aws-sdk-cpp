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
   * Start time for the action.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FixedModeScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class FixedModeScheduleActionStartSettings
  {
  public:
    AWS_MEDIALIVE_API FixedModeScheduleActionStartSettings() = default;
    AWS_MEDIALIVE_API FixedModeScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FixedModeScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline const Aws::String& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::String>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::String>
    FixedModeScheduleActionStartSettings& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
