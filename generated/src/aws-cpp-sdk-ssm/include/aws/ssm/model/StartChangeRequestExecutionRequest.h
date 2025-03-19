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
    AWS_SSM_API StartChangeRequestExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartChangeRequestExecution"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The date and time specified in the change request to run the Automation
     * runbooks.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const { return m_scheduledTime; }
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
    template<typename ScheduledTimeT = Aws::Utils::DateTime>
    void SetScheduledTime(ScheduledTimeT&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::forward<ScheduledTimeT>(value); }
    template<typename ScheduledTimeT = Aws::Utils::DateTime>
    StartChangeRequestExecutionRequest& WithScheduledTime(ScheduledTimeT&& value) { SetScheduledTime(std::forward<ScheduledTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the change template document to run during the runbook
     * workflow.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    StartChangeRequestExecutionRequest& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the change template document to run during the runbook
     * workflow.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    StartChangeRequestExecutionRequest& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map of parameters that match the declared parameters in the
     * change template document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    StartChangeRequestExecutionRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    StartChangeRequestExecutionRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the change request associated with the runbook workflow to be
     * run.</p>
     */
    inline const Aws::String& GetChangeRequestName() const { return m_changeRequestName; }
    inline bool ChangeRequestNameHasBeenSet() const { return m_changeRequestNameHasBeenSet; }
    template<typename ChangeRequestNameT = Aws::String>
    void SetChangeRequestName(ChangeRequestNameT&& value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName = std::forward<ChangeRequestNameT>(value); }
    template<typename ChangeRequestNameT = Aws::String>
    StartChangeRequestExecutionRequest& WithChangeRequestName(ChangeRequestNameT&& value) { SetChangeRequestName(std::forward<ChangeRequestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartChangeRequestExecutionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
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
    inline bool GetAutoApprove() const { return m_autoApprove; }
    inline bool AutoApproveHasBeenSet() const { return m_autoApproveHasBeenSet; }
    inline void SetAutoApprove(bool value) { m_autoApproveHasBeenSet = true; m_autoApprove = value; }
    inline StartChangeRequestExecutionRequest& WithAutoApprove(bool value) { SetAutoApprove(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Automation runbooks that are run during the runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline const Aws::Vector<Runbook>& GetRunbooks() const { return m_runbooks; }
    inline bool RunbooksHasBeenSet() const { return m_runbooksHasBeenSet; }
    template<typename RunbooksT = Aws::Vector<Runbook>>
    void SetRunbooks(RunbooksT&& value) { m_runbooksHasBeenSet = true; m_runbooks = std::forward<RunbooksT>(value); }
    template<typename RunbooksT = Aws::Vector<Runbook>>
    StartChangeRequestExecutionRequest& WithRunbooks(RunbooksT&& value) { SetRunbooks(std::forward<RunbooksT>(value)); return *this;}
    template<typename RunbooksT = Runbook>
    StartChangeRequestExecutionRequest& AddRunbooks(RunbooksT&& value) { m_runbooksHasBeenSet = true; m_runbooks.emplace_back(std::forward<RunbooksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for a change request. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag a change request to identify an environment or target Amazon
     * Web Services Region. In this case, you could specify the following key-value
     * pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code> </p>
     * </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul> 
     * <p>The <code>Array Members</code> maximum value is reported as 1000. This number
     * includes capacity reserved for internal operations. When calling the
     * <code>StartChangeRequestExecution</code> action, you can specify a maximum of 5
     * tags. You can, however, use the <a>AddTagsToResource</a> action to add up to a
     * total of 50 tags to an existing change request configuration.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartChangeRequestExecutionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartChangeRequestExecutionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the requester expects the runbook workflow related to the
     * change request to complete. The time is an estimate only that the requester
     * provides for reviewers.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledEndTime() const { return m_scheduledEndTime; }
    inline bool ScheduledEndTimeHasBeenSet() const { return m_scheduledEndTimeHasBeenSet; }
    template<typename ScheduledEndTimeT = Aws::Utils::DateTime>
    void SetScheduledEndTime(ScheduledEndTimeT&& value) { m_scheduledEndTimeHasBeenSet = true; m_scheduledEndTime = std::forward<ScheduledEndTimeT>(value); }
    template<typename ScheduledEndTimeT = Aws::Utils::DateTime>
    StartChangeRequestExecutionRequest& WithScheduledEndTime(ScheduledEndTimeT&& value) { SetScheduledEndTime(std::forward<ScheduledEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-provided details about the change. If no details are provided, content
     * specified in the <b>Template information</b> section of the associated change
     * template is added.</p>
     */
    inline const Aws::String& GetChangeDetails() const { return m_changeDetails; }
    inline bool ChangeDetailsHasBeenSet() const { return m_changeDetailsHasBeenSet; }
    template<typename ChangeDetailsT = Aws::String>
    void SetChangeDetails(ChangeDetailsT&& value) { m_changeDetailsHasBeenSet = true; m_changeDetails = std::forward<ChangeDetailsT>(value); }
    template<typename ChangeDetailsT = Aws::String>
    StartChangeRequestExecutionRequest& WithChangeDetails(ChangeDetailsT&& value) { SetChangeDetails(std::forward<ChangeDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_scheduledTime{};
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

    bool m_autoApprove{false};
    bool m_autoApproveHasBeenSet = false;

    Aws::Vector<Runbook> m_runbooks;
    bool m_runbooksHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledEndTime{};
    bool m_scheduledEndTimeHasBeenSet = false;

    Aws::String m_changeDetails;
    bool m_changeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
