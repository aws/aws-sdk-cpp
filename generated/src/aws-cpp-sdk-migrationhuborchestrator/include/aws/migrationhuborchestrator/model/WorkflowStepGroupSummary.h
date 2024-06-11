/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/Owner.h>
#include <aws/migrationhuborchestrator/model/StepGroupStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>The summary of a step group in a workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/WorkflowStepGroupSummary">AWS
   * API Reference</a></p>
   */
  class WorkflowStepGroupSummary
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepGroupSummary();
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WorkflowStepGroupSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WorkflowStepGroupSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WorkflowStepGroupSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkflowStepGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkflowStepGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkflowStepGroupSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the step group.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Owner& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Owner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline WorkflowStepGroupSummary& WithOwner(const Owner& value) { SetOwner(value); return *this;}
    inline WorkflowStepGroupSummary& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the step group.</p>
     */
    inline const StepGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StepGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StepGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkflowStepGroupSummary& WithStatus(const StepGroupStatus& value) { SetStatus(value); return *this;}
    inline WorkflowStepGroupSummary& WithStatus(StepGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }
    inline bool PreviousHasBeenSet() const { return m_previousHasBeenSet; }
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previousHasBeenSet = true; m_previous = value; }
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previousHasBeenSet = true; m_previous = std::move(value); }
    inline WorkflowStepGroupSummary& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}
    inline WorkflowStepGroupSummary& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}
    inline WorkflowStepGroupSummary& AddPrevious(const Aws::String& value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }
    inline WorkflowStepGroupSummary& AddPrevious(Aws::String&& value) { m_previousHasBeenSet = true; m_previous.push_back(std::move(value)); return *this; }
    inline WorkflowStepGroupSummary& AddPrevious(const char* value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_nextHasBeenSet = true; m_next = value; }
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }
    inline WorkflowStepGroupSummary& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}
    inline WorkflowStepGroupSummary& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}
    inline WorkflowStepGroupSummary& AddNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }
    inline WorkflowStepGroupSummary& AddNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next.push_back(std::move(value)); return *this; }
    inline WorkflowStepGroupSummary& AddNext(const char* value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    StepGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_previous;
    bool m_previousHasBeenSet = false;

    Aws::Vector<Aws::String> m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
