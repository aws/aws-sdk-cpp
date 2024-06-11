/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/StepActionType.h>
#include <aws/migrationhuborchestrator/model/TargetType.h>
#include <aws/migrationhuborchestrator/model/Owner.h>
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
   * <p>The summary of the step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/TemplateStepSummary">AWS
   * API Reference</a></p>
   */
  class TemplateStepSummary
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateStepSummary();
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TemplateStepSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TemplateStepSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TemplateStepSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }
    inline bool StepGroupIdHasBeenSet() const { return m_stepGroupIdHasBeenSet; }
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = value; }
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = std::move(value); }
    inline void SetStepGroupId(const char* value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId.assign(value); }
    inline TemplateStepSummary& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}
    inline TemplateStepSummary& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}
    inline TemplateStepSummary& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline TemplateStepSummary& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline TemplateStepSummary& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline TemplateStepSummary& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TemplateStepSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TemplateStepSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TemplateStepSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline const StepActionType& GetStepActionType() const{ return m_stepActionType; }
    inline bool StepActionTypeHasBeenSet() const { return m_stepActionTypeHasBeenSet; }
    inline void SetStepActionType(const StepActionType& value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = value; }
    inline void SetStepActionType(StepActionType&& value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = std::move(value); }
    inline TemplateStepSummary& WithStepActionType(const StepActionType& value) { SetStepActionType(value); return *this;}
    inline TemplateStepSummary& WithStepActionType(StepActionType&& value) { SetStepActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers on which to run the script.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline TemplateStepSummary& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}
    inline TemplateStepSummary& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the step.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Owner& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Owner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline TemplateStepSummary& WithOwner(const Owner& value) { SetOwner(value); return *this;}
    inline TemplateStepSummary& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }
    inline bool PreviousHasBeenSet() const { return m_previousHasBeenSet; }
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previousHasBeenSet = true; m_previous = value; }
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previousHasBeenSet = true; m_previous = std::move(value); }
    inline TemplateStepSummary& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}
    inline TemplateStepSummary& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}
    inline TemplateStepSummary& AddPrevious(const Aws::String& value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }
    inline TemplateStepSummary& AddPrevious(Aws::String&& value) { m_previousHasBeenSet = true; m_previous.push_back(std::move(value)); return *this; }
    inline TemplateStepSummary& AddPrevious(const char* value) { m_previousHasBeenSet = true; m_previous.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_nextHasBeenSet = true; m_next = value; }
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }
    inline TemplateStepSummary& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}
    inline TemplateStepSummary& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}
    inline TemplateStepSummary& AddNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }
    inline TemplateStepSummary& AddNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next.push_back(std::move(value)); return *this; }
    inline TemplateStepSummary& AddNext(const char* value) { m_nextHasBeenSet = true; m_next.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_stepGroupId;
    bool m_stepGroupIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StepActionType m_stepActionType;
    bool m_stepActionTypeHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Aws::String> m_previous;
    bool m_previousHasBeenSet = false;

    Aws::Vector<Aws::String> m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
