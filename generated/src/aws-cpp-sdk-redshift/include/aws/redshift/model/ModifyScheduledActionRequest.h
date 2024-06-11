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
    AWS_REDSHIFT_API ModifyScheduledActionRequest();

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
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }
    inline ModifyScheduledActionRequest& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}
    inline ModifyScheduledActionRequest& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}
    inline ModifyScheduledActionRequest& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified JSON format of the scheduled action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline const ScheduledActionType& GetTargetAction() const{ return m_targetAction; }
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }
    inline void SetTargetAction(const ScheduledActionType& value) { m_targetActionHasBeenSet = true; m_targetAction = value; }
    inline void SetTargetAction(ScheduledActionType&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::move(value); }
    inline ModifyScheduledActionRequest& WithTargetAction(const ScheduledActionType& value) { SetTargetAction(value); return *this;}
    inline ModifyScheduledActionRequest& WithTargetAction(ScheduledActionType&& value) { SetTargetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified schedule in either <code>at( )</code> or <code>cron( )</code>
     * format. For more information about this parameter, see
     * <a>ScheduledAction</a>.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }
    inline ModifyScheduledActionRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline ModifyScheduledActionRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline ModifyScheduledActionRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A different IAM role to assume to run the target action. For more information
     * about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }
    inline ModifyScheduledActionRequest& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}
    inline ModifyScheduledActionRequest& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}
    inline ModifyScheduledActionRequest& WithIamRole(const char* value) { SetIamRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified description of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionDescription() const{ return m_scheduledActionDescription; }
    inline bool ScheduledActionDescriptionHasBeenSet() const { return m_scheduledActionDescriptionHasBeenSet; }
    inline void SetScheduledActionDescription(const Aws::String& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = value; }
    inline void SetScheduledActionDescription(Aws::String&& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = std::move(value); }
    inline void SetScheduledActionDescription(const char* value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription.assign(value); }
    inline ModifyScheduledActionRequest& WithScheduledActionDescription(const Aws::String& value) { SetScheduledActionDescription(value); return *this;}
    inline ModifyScheduledActionRequest& WithScheduledActionDescription(Aws::String&& value) { SetScheduledActionDescription(std::move(value)); return *this;}
    inline ModifyScheduledActionRequest& WithScheduledActionDescription(const char* value) { SetScheduledActionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified start time of the scheduled action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ModifyScheduledActionRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ModifyScheduledActionRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified end time of the scheduled action. For more information about this
     * parameter, see <a>ScheduledAction</a>. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ModifyScheduledActionRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ModifyScheduledActionRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A modified enable flag of the scheduled action. If true, the scheduled action
     * is active. If false, the scheduled action is disabled. </p>
     */
    inline bool GetEnable() const{ return m_enable; }
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

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    bool m_enable;
    bool m_enableHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
