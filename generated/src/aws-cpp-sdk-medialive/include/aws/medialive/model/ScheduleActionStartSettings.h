/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FixedModeScheduleActionStartSettings.h>
#include <aws/medialive/model/FollowModeScheduleActionStartSettings.h>
#include <aws/medialive/model/ImmediateModeScheduleActionStartSettings.h>
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
   * Settings to specify when an action should occur. Only one of the options must be
   * selected.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class ScheduleActionStartSettings
  {
  public:
    AWS_MEDIALIVE_API ScheduleActionStartSettings() = default;
    AWS_MEDIALIVE_API ScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Option for specifying the start time for an action.
     */
    inline const FixedModeScheduleActionStartSettings& GetFixedModeScheduleActionStartSettings() const { return m_fixedModeScheduleActionStartSettings; }
    inline bool FixedModeScheduleActionStartSettingsHasBeenSet() const { return m_fixedModeScheduleActionStartSettingsHasBeenSet; }
    template<typename FixedModeScheduleActionStartSettingsT = FixedModeScheduleActionStartSettings>
    void SetFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettingsT&& value) { m_fixedModeScheduleActionStartSettingsHasBeenSet = true; m_fixedModeScheduleActionStartSettings = std::forward<FixedModeScheduleActionStartSettingsT>(value); }
    template<typename FixedModeScheduleActionStartSettingsT = FixedModeScheduleActionStartSettings>
    ScheduleActionStartSettings& WithFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettingsT&& value) { SetFixedModeScheduleActionStartSettings(std::forward<FixedModeScheduleActionStartSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Option for specifying an action as relative to another action.
     */
    inline const FollowModeScheduleActionStartSettings& GetFollowModeScheduleActionStartSettings() const { return m_followModeScheduleActionStartSettings; }
    inline bool FollowModeScheduleActionStartSettingsHasBeenSet() const { return m_followModeScheduleActionStartSettingsHasBeenSet; }
    template<typename FollowModeScheduleActionStartSettingsT = FollowModeScheduleActionStartSettings>
    void SetFollowModeScheduleActionStartSettings(FollowModeScheduleActionStartSettingsT&& value) { m_followModeScheduleActionStartSettingsHasBeenSet = true; m_followModeScheduleActionStartSettings = std::forward<FollowModeScheduleActionStartSettingsT>(value); }
    template<typename FollowModeScheduleActionStartSettingsT = FollowModeScheduleActionStartSettings>
    ScheduleActionStartSettings& WithFollowModeScheduleActionStartSettings(FollowModeScheduleActionStartSettingsT&& value) { SetFollowModeScheduleActionStartSettings(std::forward<FollowModeScheduleActionStartSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Option for specifying an action that should be applied immediately.
     */
    inline const ImmediateModeScheduleActionStartSettings& GetImmediateModeScheduleActionStartSettings() const { return m_immediateModeScheduleActionStartSettings; }
    inline bool ImmediateModeScheduleActionStartSettingsHasBeenSet() const { return m_immediateModeScheduleActionStartSettingsHasBeenSet; }
    template<typename ImmediateModeScheduleActionStartSettingsT = ImmediateModeScheduleActionStartSettings>
    void SetImmediateModeScheduleActionStartSettings(ImmediateModeScheduleActionStartSettingsT&& value) { m_immediateModeScheduleActionStartSettingsHasBeenSet = true; m_immediateModeScheduleActionStartSettings = std::forward<ImmediateModeScheduleActionStartSettingsT>(value); }
    template<typename ImmediateModeScheduleActionStartSettingsT = ImmediateModeScheduleActionStartSettings>
    ScheduleActionStartSettings& WithImmediateModeScheduleActionStartSettings(ImmediateModeScheduleActionStartSettingsT&& value) { SetImmediateModeScheduleActionStartSettings(std::forward<ImmediateModeScheduleActionStartSettingsT>(value)); return *this;}
    ///@}
  private:

    FixedModeScheduleActionStartSettings m_fixedModeScheduleActionStartSettings;
    bool m_fixedModeScheduleActionStartSettingsHasBeenSet = false;

    FollowModeScheduleActionStartSettings m_followModeScheduleActionStartSettings;
    bool m_followModeScheduleActionStartSettingsHasBeenSet = false;

    ImmediateModeScheduleActionStartSettings m_immediateModeScheduleActionStartSettings;
    bool m_immediateModeScheduleActionStartSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
