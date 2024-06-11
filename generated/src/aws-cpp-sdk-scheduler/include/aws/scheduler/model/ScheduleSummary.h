/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/scheduler/model/ScheduleState.h>
#include <aws/scheduler/model/TargetSummary.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The details of a schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ScheduleSummary">AWS
   * API Reference</a></p>
   */
  class ScheduleSummary
  {
  public:
    AWS_SCHEDULER_API ScheduleSummary();
    AWS_SCHEDULER_API ScheduleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API ScheduleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ScheduleSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ScheduleSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ScheduleSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ScheduleSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ScheduleSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline ScheduleSummary& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline ScheduleSummary& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline ScheduleSummary& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }
    inline bool LastModificationDateHasBeenSet() const { return m_lastModificationDateHasBeenSet; }
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = value; }
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = std::move(value); }
    inline ScheduleSummary& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}
    inline ScheduleSummary& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ScheduleSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ScheduleSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ScheduleSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline const ScheduleState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ScheduleState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ScheduleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ScheduleSummary& WithState(const ScheduleState& value) { SetState(value); return *this;}
    inline ScheduleSummary& WithState(ScheduleState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule's target details.</p>
     */
    inline const TargetSummary& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const TargetSummary& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(TargetSummary&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline ScheduleSummary& WithTarget(const TargetSummary& value) { SetTarget(value); return *this;}
    inline ScheduleSummary& WithTarget(TargetSummary&& value) { SetTarget(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationDate;
    bool m_lastModificationDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleState m_state;
    bool m_stateHasBeenSet = false;

    TargetSummary m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
