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
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateStepSummary() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API TemplateStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TemplateStepSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const { return m_stepGroupId; }
    inline bool StepGroupIdHasBeenSet() const { return m_stepGroupIdHasBeenSet; }
    template<typename StepGroupIdT = Aws::String>
    void SetStepGroupId(StepGroupIdT&& value) { m_stepGroupIdHasBeenSet = true; m_stepGroupId = std::forward<StepGroupIdT>(value); }
    template<typename StepGroupIdT = Aws::String>
    TemplateStepSummary& WithStepGroupId(StepGroupIdT&& value) { SetStepGroupId(std::forward<StepGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    TemplateStepSummary& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TemplateStepSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the step. You must run and update the status of a manual
     * step for the workflow to continue after the completion of the step.</p>
     */
    inline StepActionType GetStepActionType() const { return m_stepActionType; }
    inline bool StepActionTypeHasBeenSet() const { return m_stepActionTypeHasBeenSet; }
    inline void SetStepActionType(StepActionType value) { m_stepActionTypeHasBeenSet = true; m_stepActionType = value; }
    inline TemplateStepSummary& WithStepActionType(StepActionType value) { SetStepActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers on which to run the script.</p>
     */
    inline TargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(TargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline TemplateStepSummary& WithTargetType(TargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the step.</p>
     */
    inline Owner GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(Owner value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline TemplateStepSummary& WithOwner(Owner value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const { return m_previous; }
    inline bool PreviousHasBeenSet() const { return m_previousHasBeenSet; }
    template<typename PreviousT = Aws::Vector<Aws::String>>
    void SetPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous = std::forward<PreviousT>(value); }
    template<typename PreviousT = Aws::Vector<Aws::String>>
    TemplateStepSummary& WithPrevious(PreviousT&& value) { SetPrevious(std::forward<PreviousT>(value)); return *this;}
    template<typename PreviousT = Aws::String>
    TemplateStepSummary& AddPrevious(PreviousT&& value) { m_previousHasBeenSet = true; m_previous.emplace_back(std::forward<PreviousT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const { return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    template<typename NextT = Aws::Vector<Aws::String>>
    void SetNext(NextT&& value) { m_nextHasBeenSet = true; m_next = std::forward<NextT>(value); }
    template<typename NextT = Aws::Vector<Aws::String>>
    TemplateStepSummary& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    template<typename NextT = Aws::String>
    TemplateStepSummary& AddNext(NextT&& value) { m_nextHasBeenSet = true; m_next.emplace_back(std::forward<NextT>(value)); return *this; }
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

    StepActionType m_stepActionType{StepActionType::NOT_SET};
    bool m_stepActionTypeHasBeenSet = false;

    TargetType m_targetType{TargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    Owner m_owner{Owner::NOT_SET};
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Aws::String> m_previous;
    bool m_previousHasBeenSet = false;

    Aws::Vector<Aws::String> m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
