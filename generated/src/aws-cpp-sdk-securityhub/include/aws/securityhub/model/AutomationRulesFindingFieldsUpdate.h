/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/NoteUpdate.h>
#include <aws/securityhub/model/SeverityUpdate.h>
#include <aws/securityhub/model/VerificationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/WorkflowUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RelatedFinding.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Identifies the finding fields that the automation rule action updates when a
   * finding matches the defined criteria. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesFindingFieldsUpdate">AWS
   * API Reference</a></p>
   */
  class AutomationRulesFindingFieldsUpdate
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdate() = default;
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const NoteUpdate& GetNote() const { return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    template<typename NoteT = NoteUpdate>
    void SetNote(NoteT&& value) { m_noteHasBeenSet = true; m_note = std::forward<NoteT>(value); }
    template<typename NoteT = NoteUpdate>
    AutomationRulesFindingFieldsUpdate& WithNote(NoteT&& value) { SetNote(std::forward<NoteT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SeverityUpdate& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = SeverityUpdate>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = SeverityUpdate>
    AutomationRulesFindingFieldsUpdate& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule action updates the <code>VerificationState</code> field of a
     * finding. </p>
     */
    inline VerificationState GetVerificationState() const { return m_verificationState; }
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }
    inline void SetVerificationState(VerificationState value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }
    inline AutomationRulesFindingFieldsUpdate& WithVerificationState(VerificationState value) { SetVerificationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule action updates the <code>Confidence</code> field of a finding. </p>
     */
    inline int GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline AutomationRulesFindingFieldsUpdate& WithConfidence(int value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule action updates the <code>Criticality</code> field of a finding.
     * </p>
     */
    inline int GetCriticality() const { return m_criticality; }
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }
    inline AutomationRulesFindingFieldsUpdate& WithCriticality(int value) { SetCriticality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<Aws::String>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<Aws::String>>
    AutomationRulesFindingFieldsUpdate& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    template<typename TypesT = Aws::String>
    AutomationRulesFindingFieldsUpdate& AddTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types.emplace_back(std::forward<TypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserDefinedFields() const { return m_userDefinedFields; }
    inline bool UserDefinedFieldsHasBeenSet() const { return m_userDefinedFieldsHasBeenSet; }
    template<typename UserDefinedFieldsT = Aws::Map<Aws::String, Aws::String>>
    void SetUserDefinedFields(UserDefinedFieldsT&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = std::forward<UserDefinedFieldsT>(value); }
    template<typename UserDefinedFieldsT = Aws::Map<Aws::String, Aws::String>>
    AutomationRulesFindingFieldsUpdate& WithUserDefinedFields(UserDefinedFieldsT&& value) { SetUserDefinedFields(std::forward<UserDefinedFieldsT>(value)); return *this;}
    template<typename UserDefinedFieldsKeyT = Aws::String, typename UserDefinedFieldsValueT = Aws::String>
    AutomationRulesFindingFieldsUpdate& AddUserDefinedFields(UserDefinedFieldsKeyT&& key, UserDefinedFieldsValueT&& value) {
      m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::forward<UserDefinedFieldsKeyT>(key), std::forward<UserDefinedFieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const WorkflowUpdate& GetWorkflow() const { return m_workflow; }
    inline bool WorkflowHasBeenSet() const { return m_workflowHasBeenSet; }
    template<typename WorkflowT = WorkflowUpdate>
    void SetWorkflow(WorkflowT&& value) { m_workflowHasBeenSet = true; m_workflow = std::forward<WorkflowT>(value); }
    template<typename WorkflowT = WorkflowUpdate>
    AutomationRulesFindingFieldsUpdate& WithWorkflow(WorkflowT&& value) { SetWorkflow(std::forward<WorkflowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline const Aws::Vector<RelatedFinding>& GetRelatedFindings() const { return m_relatedFindings; }
    inline bool RelatedFindingsHasBeenSet() const { return m_relatedFindingsHasBeenSet; }
    template<typename RelatedFindingsT = Aws::Vector<RelatedFinding>>
    void SetRelatedFindings(RelatedFindingsT&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = std::forward<RelatedFindingsT>(value); }
    template<typename RelatedFindingsT = Aws::Vector<RelatedFinding>>
    AutomationRulesFindingFieldsUpdate& WithRelatedFindings(RelatedFindingsT&& value) { SetRelatedFindings(std::forward<RelatedFindingsT>(value)); return *this;}
    template<typename RelatedFindingsT = RelatedFinding>
    AutomationRulesFindingFieldsUpdate& AddRelatedFindings(RelatedFindingsT&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.emplace_back(std::forward<RelatedFindingsT>(value)); return *this; }
    ///@}
  private:

    NoteUpdate m_note;
    bool m_noteHasBeenSet = false;

    SeverityUpdate m_severity;
    bool m_severityHasBeenSet = false;

    VerificationState m_verificationState{VerificationState::NOT_SET};
    bool m_verificationStateHasBeenSet = false;

    int m_confidence{0};
    bool m_confidenceHasBeenSet = false;

    int m_criticality{0};
    bool m_criticalityHasBeenSet = false;

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userDefinedFields;
    bool m_userDefinedFieldsHasBeenSet = false;

    WorkflowUpdate m_workflow;
    bool m_workflowHasBeenSet = false;

    Aws::Vector<RelatedFinding> m_relatedFindings;
    bool m_relatedFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
