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
    AWS_SCHEDULER_API ScheduleSummary() = default;
    AWS_SCHEDULER_API ScheduleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API ScheduleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ScheduleSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ScheduleSummary& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    ScheduleSummary& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const { return m_lastModificationDate; }
    inline bool LastModificationDateHasBeenSet() const { return m_lastModificationDateHasBeenSet; }
    template<typename LastModificationDateT = Aws::Utils::DateTime>
    void SetLastModificationDate(LastModificationDateT&& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = std::forward<LastModificationDateT>(value); }
    template<typename LastModificationDateT = Aws::Utils::DateTime>
    ScheduleSummary& WithLastModificationDate(LastModificationDateT&& value) { SetLastModificationDate(std::forward<LastModificationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScheduleSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline ScheduleState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ScheduleState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ScheduleSummary& WithState(ScheduleState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule's target details.</p>
     */
    inline const TargetSummary& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = TargetSummary>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = TargetSummary>
    ScheduleSummary& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationDate{};
    bool m_lastModificationDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleState m_state{ScheduleState::NOT_SET};
    bool m_stateHasBeenSet = false;

    TargetSummary m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
