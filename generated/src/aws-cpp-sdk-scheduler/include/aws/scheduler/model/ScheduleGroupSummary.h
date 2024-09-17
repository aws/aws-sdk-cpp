/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/scheduler/model/ScheduleGroupState.h>
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
   * <p>The details of a schedule group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ScheduleGroupSummary">AWS
   * API Reference</a></p>
   */
  class ScheduleGroupSummary
  {
  public:
    AWS_SCHEDULER_API ScheduleGroupSummary();
    AWS_SCHEDULER_API ScheduleGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API ScheduleGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ScheduleGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ScheduleGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ScheduleGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ScheduleGroupSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ScheduleGroupSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }
    inline bool LastModificationDateHasBeenSet() const { return m_lastModificationDateHasBeenSet; }
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = value; }
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = std::move(value); }
    inline ScheduleGroupSummary& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}
    inline ScheduleGroupSummary& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ScheduleGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ScheduleGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ScheduleGroupSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline const ScheduleGroupState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ScheduleGroupState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ScheduleGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ScheduleGroupSummary& WithState(const ScheduleGroupState& value) { SetState(value); return *this;}
    inline ScheduleGroupSummary& WithState(ScheduleGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationDate;
    bool m_lastModificationDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleGroupState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
