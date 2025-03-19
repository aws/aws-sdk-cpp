/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ScheduleActionSettings.h>
#include <aws/medialive/model/ScheduleActionStartSettings.h>
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
   * Contains information on a single schedule action.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ScheduleAction">AWS
   * API Reference</a></p>
   */
  class ScheduleAction
  {
  public:
    AWS_MEDIALIVE_API ScheduleAction() = default;
    AWS_MEDIALIVE_API ScheduleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ScheduleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    ScheduleAction& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for this schedule action.
     */
    inline const ScheduleActionSettings& GetScheduleActionSettings() const { return m_scheduleActionSettings; }
    inline bool ScheduleActionSettingsHasBeenSet() const { return m_scheduleActionSettingsHasBeenSet; }
    template<typename ScheduleActionSettingsT = ScheduleActionSettings>
    void SetScheduleActionSettings(ScheduleActionSettingsT&& value) { m_scheduleActionSettingsHasBeenSet = true; m_scheduleActionSettings = std::forward<ScheduleActionSettingsT>(value); }
    template<typename ScheduleActionSettingsT = ScheduleActionSettings>
    ScheduleAction& WithScheduleActionSettings(ScheduleActionSettingsT&& value) { SetScheduleActionSettings(std::forward<ScheduleActionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time for the action to start in the channel.
     */
    inline const ScheduleActionStartSettings& GetScheduleActionStartSettings() const { return m_scheduleActionStartSettings; }
    inline bool ScheduleActionStartSettingsHasBeenSet() const { return m_scheduleActionStartSettingsHasBeenSet; }
    template<typename ScheduleActionStartSettingsT = ScheduleActionStartSettings>
    void SetScheduleActionStartSettings(ScheduleActionStartSettingsT&& value) { m_scheduleActionStartSettingsHasBeenSet = true; m_scheduleActionStartSettings = std::forward<ScheduleActionStartSettingsT>(value); }
    template<typename ScheduleActionStartSettingsT = ScheduleActionStartSettings>
    ScheduleAction& WithScheduleActionStartSettings(ScheduleActionStartSettingsT&& value) { SetScheduleActionStartSettings(std::forward<ScheduleActionStartSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    ScheduleActionSettings m_scheduleActionSettings;
    bool m_scheduleActionSettingsHasBeenSet = false;

    ScheduleActionStartSettings m_scheduleActionStartSettings;
    bool m_scheduleActionStartSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
