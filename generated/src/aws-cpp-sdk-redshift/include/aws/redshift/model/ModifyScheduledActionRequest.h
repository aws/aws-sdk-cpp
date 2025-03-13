/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ScheduledActionType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class ModifyScheduledActionRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyScheduledActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyScheduledAction"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the scheduled action to modify. </p>
     */
    inline const Aws::String& GetScheduledActionName() const { return m_scheduledActionName; }
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }
    template<typename ScheduledActionNameT = Aws::String>
    void SetScheduledActionName(ScheduledActionNameT&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::forward<ScheduledActionNameT>(value); }
    template<typename ScheduledActionNameT = Aws::String>
    ModifyScheduledActionRequest& WithScheduledActionName(ScheduledActionNameT&& value) { SetScheduledActionName(std::forward<ScheduledActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified JSON format of the scheduled action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline const ScheduledActionType& GetTargetAction() const { return m_targetAction; }
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }
    template<typename TargetActionT = ScheduledActionType>
    void SetTargetAction(TargetActionT&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::forward<TargetActionT>(value); }
    template<typename TargetActionT = ScheduledActionType>
    ModifyScheduledActionRequest& WithTargetAction(TargetActionT&& value) { SetTargetAction(std::forward<TargetActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified schedule in either <code>at( )</code> or <code>cron( )</code>
     * format. For more information about this parameter, see
     * <a>ScheduledAction</a>.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    ModifyScheduledActionRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A different IAM role to assume to run the target action. For more information
     * about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    ModifyScheduledActionRequest& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified description of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionDescription() const { return m_scheduledActionDescription; }
    inline bool ScheduledActionDescriptionHasBeenSet() const { return m_scheduledActionDescriptionHasBeenSet; }
    template<typename ScheduledActionDescriptionT = Aws::String>
    void SetScheduledActionDescription(ScheduledActionDescriptionT&& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = std::forward<ScheduledActionDescriptionT>(value); }
    template<typename ScheduledActionDescriptionT = Aws::String>
    ModifyScheduledActionRequest& WithScheduledActionDescription(ScheduledActionDescriptionT&& value) { SetScheduledActionDescription(std::forward<ScheduledActionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified start time of the scheduled action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ModifyScheduledActionRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified end time of the scheduled action. For more information about this
     * parameter, see <a>ScheduledAction</a>. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ModifyScheduledActionRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified enable flag of the scheduled action. If true, the scheduled action
     * is active. If false, the scheduled action is disabled. </p>
     */
    inline bool GetEnable() const { return m_enable; }
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }
    inline ModifyScheduledActionRequest& WithEnable(bool value) { SetEnable(value); return *this;}
    ///@}
  private:

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    ScheduledActionType m_targetAction;
    bool m_targetActionHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::String m_scheduledActionDescription;
    bool m_scheduledActionDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    bool m_enable{false};
    bool m_enableHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
