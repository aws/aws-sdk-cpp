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
    AWS_MEDIALIVE_API ScheduleActionStartSettings();
    AWS_MEDIALIVE_API ScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Option for specifying the start time for an action.
     */
    inline const FixedModeScheduleActionStartSettings& GetFixedModeScheduleActionStartSettings() const{ return m_fixedModeScheduleActionStartSettings; }
    inline bool FixedModeScheduleActionStartSettingsHasBeenSet() const { return m_fixedModeScheduleActionStartSettingsHasBeenSet; }
    inline void SetFixedModeScheduleActionStartSettings(const FixedModeScheduleActionStartSettings& value) { m_fixedModeScheduleActionStartSettingsHasBeenSet = true; m_fixedModeScheduleActionStartSettings = value; }
    inline void SetFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettings&& value) { m_fixedModeScheduleActionStartSettingsHasBeenSet = true; m_fixedModeScheduleActionStartSettings = std::move(value); }
    inline ScheduleActionStartSettings& WithFixedModeScheduleActionStartSettings(const FixedModeScheduleActionStartSettings& value) { SetFixedModeScheduleActionStartSettings(value); return *this;}
    inline ScheduleActionStartSettings& WithFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettings&& value) { SetFixedModeScheduleActionStartSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Option for specifying an action as relative to another action.
     */
    inline const FollowModeScheduleActionStartSettings& GetFollowModeScheduleActionStartSettings() const{ return m_followModeScheduleActionStartSettings; }
    inline bool FollowModeScheduleActionStartSettingsHasBeenSet() const { return m_followModeScheduleActionStartSettingsHasBeenSet; }
    inline void SetFollowModeScheduleActionStartSettings(const FollowModeScheduleActionStartSettings& value) { m_followModeScheduleActionStartSettingsHasBeenSet = true; m_followModeScheduleActionStartSettings = value; }
    inline void SetFollowModeScheduleActionStartSettings(FollowModeScheduleActionStartSettings&& value) { m_followModeScheduleActionStartSettingsHasBeenSet = true; m_followModeScheduleActionStartSettings = std::move(value); }
    inline ScheduleActionStartSettings& WithFollowModeScheduleActionStartSettings(const FollowModeScheduleActionStartSettings& value) { SetFollowModeScheduleActionStartSettings(value); return *this;}
    inline ScheduleActionStartSettings& WithFollowModeScheduleActionStartSettings(FollowModeScheduleActionStartSettings&& value) { SetFollowModeScheduleActionStartSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Option for specifying an action that should be applied immediately.
     */
    inline const ImmediateModeScheduleActionStartSettings& GetImmediateModeScheduleActionStartSettings() const{ return m_immediateModeScheduleActionStartSettings; }
    inline bool ImmediateModeScheduleActionStartSettingsHasBeenSet() const { return m_immediateModeScheduleActionStartSettingsHasBeenSet; }
    inline void SetImmediateModeScheduleActionStartSettings(const ImmediateModeScheduleActionStartSettings& value) { m_immediateModeScheduleActionStartSettingsHasBeenSet = true; m_immediateModeScheduleActionStartSettings = value; }
    inline void SetImmediateModeScheduleActionStartSettings(ImmediateModeScheduleActionStartSettings&& value) { m_immediateModeScheduleActionStartSettingsHasBeenSet = true; m_immediateModeScheduleActionStartSettings = std::move(value); }
    inline ScheduleActionStartSettings& WithImmediateModeScheduleActionStartSettings(const ImmediateModeScheduleActionStartSettings& value) { SetImmediateModeScheduleActionStartSettings(value); return *this;}
    inline ScheduleActionStartSettings& WithImmediateModeScheduleActionStartSettings(ImmediateModeScheduleActionStartSettings&& value) { SetImmediateModeScheduleActionStartSettings(std::move(value)); return *this;}
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
