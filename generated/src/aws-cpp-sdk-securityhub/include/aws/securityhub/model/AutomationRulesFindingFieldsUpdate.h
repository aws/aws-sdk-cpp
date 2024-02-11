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
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdate();
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NoteUpdate& GetNote() const{ return m_note; }

    
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }

    
    inline void SetNote(const NoteUpdate& value) { m_noteHasBeenSet = true; m_note = value; }

    
    inline void SetNote(NoteUpdate&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }

    
    inline AutomationRulesFindingFieldsUpdate& WithNote(const NoteUpdate& value) { SetNote(value); return *this;}

    
    inline AutomationRulesFindingFieldsUpdate& WithNote(NoteUpdate&& value) { SetNote(std::move(value)); return *this;}


    
    inline const SeverityUpdate& GetSeverity() const{ return m_severity; }

    
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    
    inline void SetSeverity(const SeverityUpdate& value) { m_severityHasBeenSet = true; m_severity = value; }

    
    inline void SetSeverity(SeverityUpdate&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    
    inline AutomationRulesFindingFieldsUpdate& WithSeverity(const SeverityUpdate& value) { SetSeverity(value); return *this;}

    
    inline AutomationRulesFindingFieldsUpdate& WithSeverity(SeverityUpdate&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p> The rule action updates the <code>VerificationState</code> field of a
     * finding. </p>
     */
    inline const VerificationState& GetVerificationState() const{ return m_verificationState; }

    /**
     * <p> The rule action updates the <code>VerificationState</code> field of a
     * finding. </p>
     */
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }

    /**
     * <p> The rule action updates the <code>VerificationState</code> field of a
     * finding. </p>
     */
    inline void SetVerificationState(const VerificationState& value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }

    /**
     * <p> The rule action updates the <code>VerificationState</code> field of a
     * finding. </p>
     */
    inline void SetVerificationState(VerificationState&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::move(value); }

    /**
     * <p> The rule action updates the <code>VerificationState</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithVerificationState(const VerificationState& value) { SetVerificationState(value); return *this;}

    /**
     * <p> The rule action updates the <code>VerificationState</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithVerificationState(VerificationState&& value) { SetVerificationState(std::move(value)); return *this;}


    /**
     * <p> The rule action updates the <code>Confidence</code> field of a finding. </p>
     */
    inline int GetConfidence() const{ return m_confidence; }

    /**
     * <p> The rule action updates the <code>Confidence</code> field of a finding. </p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p> The rule action updates the <code>Confidence</code> field of a finding. </p>
     */
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p> The rule action updates the <code>Confidence</code> field of a finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithConfidence(int value) { SetConfidence(value); return *this;}


    /**
     * <p> The rule action updates the <code>Criticality</code> field of a finding.
     * </p>
     */
    inline int GetCriticality() const{ return m_criticality; }

    /**
     * <p> The rule action updates the <code>Criticality</code> field of a finding.
     * </p>
     */
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }

    /**
     * <p> The rule action updates the <code>Criticality</code> field of a finding.
     * </p>
     */
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }

    /**
     * <p> The rule action updates the <code>Criticality</code> field of a finding.
     * </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithCriticality(int value) { SetCriticality(value); return *this;}


    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p> The rule action updates the <code>Types</code> field of a finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }


    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserDefinedFields() const{ return m_userDefinedFields; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline bool UserDefinedFieldsHasBeenSet() const { return m_userDefinedFieldsHasBeenSet; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline void SetUserDefinedFields(const Aws::Map<Aws::String, Aws::String>& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = value; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline void SetUserDefinedFields(Aws::Map<Aws::String, Aws::String>&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = std::move(value); }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithUserDefinedFields(const Aws::Map<Aws::String, Aws::String>& value) { SetUserDefinedFields(value); return *this;}

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithUserDefinedFields(Aws::Map<Aws::String, Aws::String>&& value) { SetUserDefinedFields(std::move(value)); return *this;}

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddUserDefinedFields(const Aws::String& key, const Aws::String& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, value); return *this; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddUserDefinedFields(Aws::String&& key, const Aws::String& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), value); return *this; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddUserDefinedFields(const Aws::String& key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddUserDefinedFields(Aws::String&& key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddUserDefinedFields(const char* key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddUserDefinedFields(Aws::String&& key, const char* value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), value); return *this; }

    /**
     * <p> The rule action updates the <code>UserDefinedFields</code> field of a
     * finding. </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddUserDefinedFields(const char* key, const char* value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, value); return *this; }


    
    inline const WorkflowUpdate& GetWorkflow() const{ return m_workflow; }

    
    inline bool WorkflowHasBeenSet() const { return m_workflowHasBeenSet; }

    
    inline void SetWorkflow(const WorkflowUpdate& value) { m_workflowHasBeenSet = true; m_workflow = value; }

    
    inline void SetWorkflow(WorkflowUpdate&& value) { m_workflowHasBeenSet = true; m_workflow = std::move(value); }

    
    inline AutomationRulesFindingFieldsUpdate& WithWorkflow(const WorkflowUpdate& value) { SetWorkflow(value); return *this;}

    
    inline AutomationRulesFindingFieldsUpdate& WithWorkflow(WorkflowUpdate&& value) { SetWorkflow(std::move(value)); return *this;}


    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline const Aws::Vector<RelatedFinding>& GetRelatedFindings() const{ return m_relatedFindings; }

    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline bool RelatedFindingsHasBeenSet() const { return m_relatedFindingsHasBeenSet; }

    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline void SetRelatedFindings(const Aws::Vector<RelatedFinding>& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = value; }

    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline void SetRelatedFindings(Aws::Vector<RelatedFinding>&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = std::move(value); }

    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithRelatedFindings(const Aws::Vector<RelatedFinding>& value) { SetRelatedFindings(value); return *this;}

    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline AutomationRulesFindingFieldsUpdate& WithRelatedFindings(Aws::Vector<RelatedFinding>&& value) { SetRelatedFindings(std::move(value)); return *this;}

    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddRelatedFindings(const RelatedFinding& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.push_back(value); return *this; }

    /**
     * <p> The rule action updates the <code>RelatedFindings</code> field of a finding.
     * </p>
     */
    inline AutomationRulesFindingFieldsUpdate& AddRelatedFindings(RelatedFinding&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.push_back(std::move(value)); return *this; }

  private:

    NoteUpdate m_note;
    bool m_noteHasBeenSet = false;

    SeverityUpdate m_severity;
    bool m_severityHasBeenSet = false;

    VerificationState m_verificationState;
    bool m_verificationStateHasBeenSet = false;

    int m_confidence;
    bool m_confidenceHasBeenSet = false;

    int m_criticality;
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
