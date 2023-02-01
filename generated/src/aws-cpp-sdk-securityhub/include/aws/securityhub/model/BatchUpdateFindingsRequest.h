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
    AWS_SECURITYHUB_API BatchUpdateFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateFindings"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline const Aws::Vector<AwsSecurityFindingIdentifier>& GetFindingIdentifiers() const{ return m_findingIdentifiers; }

    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline bool FindingIdentifiersHasBeenSet() const { return m_findingIdentifiersHasBeenSet; }

    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline void SetFindingIdentifiers(const Aws::Vector<AwsSecurityFindingIdentifier>& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers = value; }

    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline void SetFindingIdentifiers(Aws::Vector<AwsSecurityFindingIdentifier>&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers = std::move(value); }

    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline BatchUpdateFindingsRequest& WithFindingIdentifiers(const Aws::Vector<AwsSecurityFindingIdentifier>& value) { SetFindingIdentifiers(value); return *this;}

    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline BatchUpdateFindingsRequest& WithFindingIdentifiers(Aws::Vector<AwsSecurityFindingIdentifier>&& value) { SetFindingIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline BatchUpdateFindingsRequest& AddFindingIdentifiers(const AwsSecurityFindingIdentifier& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers.push_back(value); return *this; }

    /**
     * <p>The list of findings to update. <code>BatchUpdateFindings</code> can be used
     * to update up to 100 findings at a time.</p> <p>For each finding, the list
     * provides the finding identifier and the ARN of the finding provider.</p>
     */
    inline BatchUpdateFindingsRequest& AddFindingIdentifiers(AwsSecurityFindingIdentifier&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers.push_back(std::move(value)); return *this; }


    
    inline const NoteUpdate& GetNote() const{ return m_note; }

    
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }

    
    inline void SetNote(const NoteUpdate& value) { m_noteHasBeenSet = true; m_note = value; }

    
    inline void SetNote(NoteUpdate&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }

    
    inline BatchUpdateFindingsRequest& WithNote(const NoteUpdate& value) { SetNote(value); return *this;}

    
    inline BatchUpdateFindingsRequest& WithNote(NoteUpdate&& value) { SetNote(std::move(value)); return *this;}


    /**
     * <p>Used to update the finding severity.</p>
     */
    inline const SeverityUpdate& GetSeverity() const{ return m_severity; }

    /**
     * <p>Used to update the finding severity.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>Used to update the finding severity.</p>
     */
    inline void SetSeverity(const SeverityUpdate& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>Used to update the finding severity.</p>
     */
    inline void SetSeverity(SeverityUpdate&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>Used to update the finding severity.</p>
     */
    inline BatchUpdateFindingsRequest& WithSeverity(const SeverityUpdate& value) { SetSeverity(value); return *this;}

    /**
     * <p>Used to update the finding severity.</p>
     */
    inline BatchUpdateFindingsRequest& WithSeverity(SeverityUpdate&& value) { SetSeverity(std::move(value)); return *this;}


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
    inline const VerificationState& GetVerificationState() const{ return m_verificationState; }

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
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }

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
    inline void SetVerificationState(const VerificationState& value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }

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
    inline void SetVerificationState(VerificationState&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::move(value); }

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
    inline BatchUpdateFindingsRequest& WithVerificationState(const VerificationState& value) { SetVerificationState(value); return *this;}

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
    inline BatchUpdateFindingsRequest& WithVerificationState(VerificationState&& value) { SetVerificationState(std::move(value)); return *this;}


    /**
     * <p>The updated value for the finding confidence. Confidence is defined as the
     * likelihood that a finding accurately identifies the behavior or issue that it
     * was intended to identify.</p> <p>Confidence is scored on a 0-100 basis using a
     * ratio scale, where 0 means zero percent confidence and 100 means 100 percent
     * confidence.</p>
     */
    inline int GetConfidence() const{ return m_confidence; }

    /**
     * <p>The updated value for the finding confidence. Confidence is defined as the
     * likelihood that a finding accurately identifies the behavior or issue that it
     * was intended to identify.</p> <p>Confidence is scored on a 0-100 basis using a
     * ratio scale, where 0 means zero percent confidence and 100 means 100 percent
     * confidence.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The updated value for the finding confidence. Confidence is defined as the
     * likelihood that a finding accurately identifies the behavior or issue that it
     * was intended to identify.</p> <p>Confidence is scored on a 0-100 basis using a
     * ratio scale, where 0 means zero percent confidence and 100 means 100 percent
     * confidence.</p>
     */
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The updated value for the finding confidence. Confidence is defined as the
     * likelihood that a finding accurately identifies the behavior or issue that it
     * was intended to identify.</p> <p>Confidence is scored on a 0-100 basis using a
     * ratio scale, where 0 means zero percent confidence and 100 means 100 percent
     * confidence.</p>
     */
    inline BatchUpdateFindingsRequest& WithConfidence(int value) { SetConfidence(value); return *this;}


    /**
     * <p>The updated value for the level of importance assigned to the resources
     * associated with the findings.</p> <p>A score of 0 means that the underlying
     * resources have no criticality, and a score of 100 is reserved for the most
     * critical resources. </p>
     */
    inline int GetCriticality() const{ return m_criticality; }

    /**
     * <p>The updated value for the level of importance assigned to the resources
     * associated with the findings.</p> <p>A score of 0 means that the underlying
     * resources have no criticality, and a score of 100 is reserved for the most
     * critical resources. </p>
     */
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }

    /**
     * <p>The updated value for the level of importance assigned to the resources
     * associated with the findings.</p> <p>A score of 0 means that the underlying
     * resources have no criticality, and a score of 100 is reserved for the most
     * critical resources. </p>
     */
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }

    /**
     * <p>The updated value for the level of importance assigned to the resources
     * associated with the findings.</p> <p>A score of 0 means that the underlying
     * resources have no criticality, and a score of 100 is reserved for the most
     * critical resources. </p>
     */
    inline BatchUpdateFindingsRequest& WithCriticality(int value) { SetCriticality(value); return *this;}


    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline BatchUpdateFindingsRequest& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline BatchUpdateFindingsRequest& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline BatchUpdateFindingsRequest& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline BatchUpdateFindingsRequest& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more finding types in the format of namespace/category/classifier that
     * classify a finding.</p> <p>Valid namespace values are as follows.</p> <ul> <li>
     * <p>Software and Configuration Checks</p> </li> <li> <p>TTPs</p> </li> <li>
     * <p>Effects</p> </li> <li> <p>Unusual Behaviors</p> </li> <li> <p>Sensitive Data
     * Identifications </p> </li> </ul>
     */
    inline BatchUpdateFindingsRequest& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }


    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserDefinedFields() const{ return m_userDefinedFields; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline bool UserDefinedFieldsHasBeenSet() const { return m_userDefinedFieldsHasBeenSet; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline void SetUserDefinedFields(const Aws::Map<Aws::String, Aws::String>& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = value; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline void SetUserDefinedFields(Aws::Map<Aws::String, Aws::String>&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = std::move(value); }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& WithUserDefinedFields(const Aws::Map<Aws::String, Aws::String>& value) { SetUserDefinedFields(value); return *this;}

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& WithUserDefinedFields(Aws::Map<Aws::String, Aws::String>&& value) { SetUserDefinedFields(std::move(value)); return *this;}

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& AddUserDefinedFields(const Aws::String& key, const Aws::String& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, value); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& AddUserDefinedFields(Aws::String&& key, const Aws::String& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& AddUserDefinedFields(const Aws::String& key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& AddUserDefinedFields(Aws::String&& key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& AddUserDefinedFields(const char* key, Aws::String&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& AddUserDefinedFields(Aws::String&& key, const char* value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of name/value string pairs associated with the finding. These are
     * custom, user-defined fields added to a finding.</p>
     */
    inline BatchUpdateFindingsRequest& AddUserDefinedFields(const char* key, const char* value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace(key, value); return *this; }


    /**
     * <p>Used to update the workflow status of a finding.</p> <p>The workflow status
     * indicates the progress of the investigation into the finding. </p>
     */
    inline const WorkflowUpdate& GetWorkflow() const{ return m_workflow; }

    /**
     * <p>Used to update the workflow status of a finding.</p> <p>The workflow status
     * indicates the progress of the investigation into the finding. </p>
     */
    inline bool WorkflowHasBeenSet() const { return m_workflowHasBeenSet; }

    /**
     * <p>Used to update the workflow status of a finding.</p> <p>The workflow status
     * indicates the progress of the investigation into the finding. </p>
     */
    inline void SetWorkflow(const WorkflowUpdate& value) { m_workflowHasBeenSet = true; m_workflow = value; }

    /**
     * <p>Used to update the workflow status of a finding.</p> <p>The workflow status
     * indicates the progress of the investigation into the finding. </p>
     */
    inline void SetWorkflow(WorkflowUpdate&& value) { m_workflowHasBeenSet = true; m_workflow = std::move(value); }

    /**
     * <p>Used to update the workflow status of a finding.</p> <p>The workflow status
     * indicates the progress of the investigation into the finding. </p>
     */
    inline BatchUpdateFindingsRequest& WithWorkflow(const WorkflowUpdate& value) { SetWorkflow(value); return *this;}

    /**
     * <p>Used to update the workflow status of a finding.</p> <p>The workflow status
     * indicates the progress of the investigation into the finding. </p>
     */
    inline BatchUpdateFindingsRequest& WithWorkflow(WorkflowUpdate&& value) { SetWorkflow(std::move(value)); return *this;}


    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline const Aws::Vector<RelatedFinding>& GetRelatedFindings() const{ return m_relatedFindings; }

    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline bool RelatedFindingsHasBeenSet() const { return m_relatedFindingsHasBeenSet; }

    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline void SetRelatedFindings(const Aws::Vector<RelatedFinding>& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = value; }

    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline void SetRelatedFindings(Aws::Vector<RelatedFinding>&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = std::move(value); }

    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline BatchUpdateFindingsRequest& WithRelatedFindings(const Aws::Vector<RelatedFinding>& value) { SetRelatedFindings(value); return *this;}

    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline BatchUpdateFindingsRequest& WithRelatedFindings(Aws::Vector<RelatedFinding>&& value) { SetRelatedFindings(std::move(value)); return *this;}

    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline BatchUpdateFindingsRequest& AddRelatedFindings(const RelatedFinding& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.push_back(value); return *this; }

    /**
     * <p>A list of findings that are related to the updated findings.</p>
     */
    inline BatchUpdateFindingsRequest& AddRelatedFindings(RelatedFinding&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsSecurityFindingIdentifier> m_findingIdentifiers;
    bool m_findingIdentifiersHasBeenSet = false;

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
