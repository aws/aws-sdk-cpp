/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Runbook.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class StartChangeRequestExecutionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API StartChangeRequestExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartChangeRequestExecution"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The date and time specified in the change request to run the Automation
     * runbooks.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const{ return m_scheduledTime; }

    /**
     * <p>The date and time specified in the change request to run the Automation
     * runbooks.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }

    /**
     * <p>The date and time specified in the change request to run the Automation
     * runbooks.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline void SetScheduledTime(const Aws::Utils::DateTime& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = value; }

    /**
     * <p>The date and time specified in the change request to run the Automation
     * runbooks.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline void SetScheduledTime(Aws::Utils::DateTime&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::move(value); }

    /**
     * <p>The date and time specified in the change request to run the Automation
     * runbooks.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline StartChangeRequestExecutionRequest& WithScheduledTime(const Aws::Utils::DateTime& value) { SetScheduledTime(value); return *this;}

    /**
     * <p>The date and time specified in the change request to run the Automation
     * runbooks.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline StartChangeRequestExecutionRequest& WithScheduledTime(Aws::Utils::DateTime&& value) { SetScheduledTime(std::move(value)); return *this;}


    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline StartChangeRequestExecutionRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline StartChangeRequestExecutionRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline StartChangeRequestExecutionRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline StartChangeRequestExecutionRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline StartChangeRequestExecutionRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline StartChangeRequestExecutionRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline StartChangeRequestExecutionRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline StartChangeRequestExecutionRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline StartChangeRequestExecutionRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline StartChangeRequestExecutionRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline StartChangeRequestExecutionRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline StartChangeRequestExecutionRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline StartChangeRequestExecutionRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline StartChangeRequestExecutionRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline const Aws::String& GetChangeRequestName() const{ return m_changeRequestName; }

    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline bool ChangeRequestNameHasBeenSet() const { return m_changeRequestNameHasBeenSet; }

    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline void SetChangeRequestName(const Aws::String& value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName = value; }

    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline void SetChangeRequestName(Aws::String&& value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName = std::move(value); }

    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline void SetChangeRequestName(const char* value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName.assign(value); }

    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline StartChangeRequestExecutionRequest& WithChangeRequestName(const Aws::String& value) { SetChangeRequestName(value); return *this;}

    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline StartChangeRequestExecutionRequest& WithChangeRequestName(Aws::String&& value) { SetChangeRequestName(std::move(value)); return *this;}

    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline StartChangeRequestExecutionRequest& WithChangeRequestName(const char* value) { SetChangeRequestName(value); return *this;}


    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline StartChangeRequestExecutionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline StartChangeRequestExecutionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline StartChangeRequestExecutionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Indicates whether the change request can be approved automatically without
     * the need for manual approvals.</p> <p>If <code>AutoApprovable</code> is enabled
     * in a change template, then setting <code>AutoApprove</code> to <code>true</code>
     * in <code>StartChangeRequestExecution</code> creates a change request that
     * bypasses approver review.</p>  <p>Change Calendar restrictions are not
     * bypassed in this scenario. If the state of an associated calendar is
     * <code>CLOSED</code>, change freeze approvers must still grant permission for
     * this change request to run. If they don't, the change won't be processed until
     * the calendar state is again <code>OPEN</code>. </p> 
     */
    inline bool GetAutoApprove() const{ return m_autoApprove; }

    /**
     * <p>Indicates whether the change request can be approved automatically without
     * the need for manual approvals.</p> <p>If <code>AutoApprovable</code> is enabled
     * in a change template, then setting <code>AutoApprove</code> to <code>true</code>
     * in <code>StartChangeRequestExecution</code> creates a change request that
     * bypasses approver review.</p>  <p>Change Calendar restrictions are not
     * bypassed in this scenario. If the state of an associated calendar is
     * <code>CLOSED</code>, change freeze approvers must still grant permission for
     * this change request to run. If they don't, the change won't be processed until
     * the calendar state is again <code>OPEN</code>. </p> 
     */
    inline bool AutoApproveHasBeenSet() const { return m_autoApproveHasBeenSet; }

    /**
     * <p>Indicates whether the change request can be approved automatically without
     * the need for manual approvals.</p> <p>If <code>AutoApprovable</code> is enabled
     * in a change template, then setting <code>AutoApprove</code> to <code>true</code>
     * in <code>StartChangeRequestExecution</code> creates a change request that
     * bypasses approver review.</p>  <p>Change Calendar restrictions are not
     * bypassed in this scenario. If the state of an associated calendar is
     * <code>CLOSED</code>, change freeze approvers must still grant permission for
     * this change request to run. If they don't, the change won't be processed until
     * the calendar state is again <code>OPEN</code>. </p> 
     */
    inline void SetAutoApprove(bool value) { m_autoApproveHasBeenSet = true; m_autoApprove = value; }

    /**
     * <p>Indicates whether the change request can be approved automatically without
     * the need for manual approvals.</p> <p>If <code>AutoApprovable</code> is enabled
     * in a change template, then setting <code>AutoApprove</code> to <code>true</code>
     * in <code>StartChangeRequestExecution</code> creates a change request that
     * bypasses approver review.</p>  <p>Change Calendar restrictions are not
     * bypassed in this scenario. If the state of an associated calendar is
     * <code>CLOSED</code>, change freeze approvers must still grant permission for
     * this change request to run. If they don't, the change won't be processed until
     * the calendar state is again <code>OPEN</code>. </p> 
     */
    inline StartChangeRequestExecutionRequest& WithAutoApprove(bool value) { SetAutoApprove(value); return *this;}


    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline const Aws::Vector<Runbook>& GetRunbooks() const{ return m_runbooks; }

    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline bool RunbooksHasBeenSet() const { return m_runbooksHasBeenSet; }

    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline void SetRunbooks(const Aws::Vector<Runbook>& value) { m_runbooksHasBeenSet = true; m_runbooks = value; }

    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline void SetRunbooks(Aws::Vector<Runbook>&& value) { m_runbooksHasBeenSet = true; m_runbooks = std::move(value); }

    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline StartChangeRequestExecutionRequest& WithRunbooks(const Aws::Vector<Runbook>& value) { SetRunbooks(value); return *this;}

    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline StartChangeRequestExecutionRequest& WithRunbooks(Aws::Vector<Runbook>&& value) { SetRunbooks(std::move(value)); return *this;}

    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline StartChangeRequestExecutionRequest& AddRunbooks(const Runbook& value) { m_runbooksHasBeenSet = true; m_runbooks.push_back(value); return *this; }

    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline StartChangeRequestExecutionRequest& AddRunbooks(Runbook&& value) { m_runbooksHasBeenSet = true; m_runbooks.push_back(std::move(value)); return *this; }


    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline StartChangeRequestExecutionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline StartChangeRequestExecutionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline StartChangeRequestExecutionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline StartChangeRequestExecutionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The time that the requester expects the runbook workflow related to the
     * change request to complete. The time is an estimate only that the requester
     * provides for reviewers.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledEndTime() const{ return m_scheduledEndTime; }

    /**
     * <p>The time that the requester expects the runbook workflow related to the
     * change request to complete. The time is an estimate only that the requester
     * provides for reviewers.</p>
     */
    inline bool ScheduledEndTimeHasBeenSet() const { return m_scheduledEndTimeHasBeenSet; }

    /**
     * <p>The time that the requester expects the runbook workflow related to the
     * change request to complete. The time is an estimate only that the requester
     * provides for reviewers.</p>
     */
    inline void SetScheduledEndTime(const Aws::Utils::DateTime& value) { m_scheduledEndTimeHasBeenSet = true; m_scheduledEndTime = value; }

    /**
     * <p>The time that the requester expects the runbook workflow related to the
     * change request to complete. The time is an estimate only that the requester
     * provides for reviewers.</p>
     */
    inline void SetScheduledEndTime(Aws::Utils::DateTime&& value) { m_scheduledEndTimeHasBeenSet = true; m_scheduledEndTime = std::move(value); }

    /**
     * <p>The time that the requester expects the runbook workflow related to the
     * change request to complete. The time is an estimate only that the requester
     * provides for reviewers.</p>
     */
    inline StartChangeRequestExecutionRequest& WithScheduledEndTime(const Aws::Utils::DateTime& value) { SetScheduledEndTime(value); return *this;}

    /**
     * <p>The time that the requester expects the runbook workflow related to the
     * change request to complete. The time is an estimate only that the requester
     * provides for reviewers.</p>
     */
    inline StartChangeRequestExecutionRequest& WithScheduledEndTime(Aws::Utils::DateTime&& value) { SetScheduledEndTime(std::move(value)); return *this;}


    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline const Aws::String& GetChangeDetails() const{ return m_changeDetails; }

    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline bool ChangeDetailsHasBeenSet() const { return m_changeDetailsHasBeenSet; }

    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline void SetChangeDetails(const Aws::String& value) { m_changeDetailsHasBeenSet = true; m_changeDetails = value; }

    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline void SetChangeDetails(Aws::String&& value) { m_changeDetailsHasBeenSet = true; m_changeDetails = std::move(value); }

    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline void SetChangeDetails(const char* value) { m_changeDetailsHasBeenSet = true; m_changeDetails.assign(value); }

    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline StartChangeRequestExecutionRequest& WithChangeDetails(const Aws::String& value) { SetChangeDetails(value); return *this;}

    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline StartChangeRequestExecutionRequest& WithChangeDetails(Aws::String&& value) { SetChangeDetails(std::move(value)); return *this;}

    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline StartChangeRequestExecutionRequest& WithChangeDetails(const char* value) { SetChangeDetails(value); return *this;}

  private:

    Aws::Utils::DateTime m_scheduledTime;
    bool m_scheduledTimeHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_changeRequestName;
    bool m_changeRequestNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_autoApprove;
    bool m_autoApproveHasBeenSet = false;

    Aws::Vector<Runbook> m_runbooks;
    bool m_runbooksHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledEndTime;
    bool m_scheduledEndTimeHasBeenSet = false;

    Aws::String m_changeDetails;
    bool m_changeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
