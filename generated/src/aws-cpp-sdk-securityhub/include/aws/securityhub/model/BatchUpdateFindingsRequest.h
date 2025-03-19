/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/NoteUpdate.h>
#include <aws/securityhub/model/SeverityUpdate.h>
#include <aws/securityhub/model/VerificationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/WorkflowUpdate.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RelatedFinding.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchUpdateFindingsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateFindings"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline const Aws::Vector<AwsSecurityFindingIdentifier>& GetFindingIdentifiers() const { return m_findingIdentifiers; }
    inline bool FindingIdentifiersHasBeenSet() const { return m_findingIdentifiersHasBeenSet; }
    template<typename FindingIdentifiersT = Aws::Vector<AwsSecurityFindingIdentifier>>
    void SetFindingIdentifiers(FindingIdentifiersT&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers = std::forward<FindingIdentifiersT>(value); }
    template<typename FindingIdentifiersT = Aws::Vector<AwsSecurityFindingIdentifier>>
    BatchUpdateFindingsRequest& WithFindingIdentifiers(FindingIdentifiersT&& value) { SetFindingIdentifiers(std::forward<FindingIdentifiersT>(value)); return *this;}
    template<typename FindingIdentifiersT = AwsSecurityFindingIdentifier>
    BatchUpdateFindingsRequest& AddFindingIdentifiers(FindingIdentifiersT&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers.emplace_back(std::forward<FindingIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const NoteUpdate& GetNote() const { return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    template<typename NoteT = NoteUpdate>
    void SetNote(NoteT&& value) { m_noteHasBeenSet = true; m_note = std::forward<NoteT>(value); }
    template<typename NoteT = NoteUpdate>
    BatchUpdateFindingsRequest& WithNote(NoteT&& value) { SetNote(std::forward<NoteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to update the finding severity.</p>
     */
    inline const SeverityUpdate& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = SeverityUpdate>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = SeverityUpdate>
    BatchUpdateFindingsRequest& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the veracity of a finding.</p> <p>The available values for
     * <code>VerificationState</code> are as follows.</p> <ul> <li> <p>
     * <code>UNKNOWN</code> – The default disposition of a security finding</p> </li>
     * <li> <p> <code>TRUE_POSITIVE</code> – The security finding is confirmed</p>
     * </li> <li> <p> <code>FALSE_POSITIVE</code> – The security finding was determined
     * to be a false alarm</p> </li> <li> <p> <code>BENIGN_POSITIVE</code> – A special
     * case of <code>TRUE_POSITIVE</code> where the finding doesn't pose any threat, is
     * expected, or both</p> </li> </ul>
     */
    inline VerificationState GetVerificationState() const { return m_verificationState; }
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }
    inline void SetVerificationState(VerificationState value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }
    inline BatchUpdateFindingsRequest& WithVerificationState(VerificationState value) { SetVerificationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated value for the finding confidence. Confidence is defined as the
     * likelihood that a finding accurately identifies the behavior or issue that it
     * was intended to identify.</p> <p>Confidence is scored on a 0-100 basis using a
     * ratio scale, where 0 means zero percent confidence and 100 means 100 percent
     * confidence.</p>
     */
    inline int GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline BatchUpdateFindingsRequest& WithConfidence(int value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated value for the level of importance assigned to the resources
     * associated with the findings.</p> <p>A score of 0 means that the underlying
     * resources have no criticality, and a score of 100 is reserved for the most
     * critical resources. </p>
     */
    inline int GetCriticality() const { return m_criticality; }
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }
    inline BatchUpdateFindingsRequest& WithCriticality(int value) { SetCriticality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<Aws::String>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<Aws::String>>
    BatchUpdateFindingsRequest& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    template<typename TypesT = Aws::String>
    BatchUpdateFindingsRequest& AddTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types.emplace_back(std::forward<TypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserDefinedFields() const { return m_userDefinedFields; }
    inline bool UserDefinedFieldsHasBeenSet() const { return m_userDefinedFieldsHasBeenSet; }
    template<typename UserDefinedFieldsT = Aws::Map<Aws::String, Aws::String>>
    void SetUserDefinedFields(UserDefinedFieldsT&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = std::forward<UserDefinedFieldsT>(value); }
    template<typename UserDefinedFieldsT = Aws::Map<Aws::String, Aws::String>>
    BatchUpdateFindingsRequest& WithUserDefinedFields(UserDefinedFieldsT&& value) { SetUserDefinedFields(std::forward<UserDefinedFieldsT>(value)); return *this;}
    template<typename UserDefinedFieldsKeyT = Aws::String, typename UserDefinedFieldsValueT = Aws::String>
    BatchUpdateFindingsRequest& AddUserDefinedFields(UserDefinedFieldsKeyT&& key, UserDefinedFieldsValueT&& value) {
      m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::forward<UserDefinedFieldsKeyT>(key), std::forward<UserDefinedFieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Used to update the workflow status of a finding.</p> <p>The workflow status
     * indicates the progress of the investigation into the finding. </p>
     */
    inline const WorkflowUpdate& GetWorkflow() const { return m_workflow; }
    inline bool WorkflowHasBeenSet() const { return m_workflowHasBeenSet; }
    template<typename WorkflowT = WorkflowUpdate>
    void SetWorkflow(WorkflowT&& value) { m_workflowHasBeenSet = true; m_workflow = std::forward<WorkflowT>(value); }
    template<typename WorkflowT = WorkflowUpdate>
    BatchUpdateFindingsRequest& WithWorkflow(WorkflowT&& value) { SetWorkflow(std::forward<WorkflowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline const Aws::Vector<RelatedFinding>& GetRelatedFindings() const { return m_relatedFindings; }
    inline bool RelatedFindingsHasBeenSet() const { return m_relatedFindingsHasBeenSet; }
    template<typename RelatedFindingsT = Aws::Vector<RelatedFinding>>
    void SetRelatedFindings(RelatedFindingsT&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = std::forward<RelatedFindingsT>(value); }
    template<typename RelatedFindingsT = Aws::Vector<RelatedFinding>>
    BatchUpdateFindingsRequest& WithRelatedFindings(RelatedFindingsT&& value) { SetRelatedFindings(std::forward<RelatedFindingsT>(value)); return *this;}
    template<typename RelatedFindingsT = RelatedFinding>
    BatchUpdateFindingsRequest& AddRelatedFindings(RelatedFindingsT&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.emplace_back(std::forward<RelatedFindingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsSecurityFindingIdentifier> m_findingIdentifiers;
    bool m_findingIdentifiersHasBeenSet = false;

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
