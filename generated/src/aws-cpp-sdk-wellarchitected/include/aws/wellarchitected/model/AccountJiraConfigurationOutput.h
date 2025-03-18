/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/IntegrationStatus.h>
#include <aws/wellarchitected/model/AccountJiraIssueManagementStatus.h>
#include <aws/wellarchitected/model/IssueManagementType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Account-level: Output configuration of the Jira integration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AccountJiraConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class AccountJiraConfigurationOutput
  {
  public:
    AWS_WELLARCHITECTED_API AccountJiraConfigurationOutput() = default;
    AWS_WELLARCHITECTED_API AccountJiraConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API AccountJiraConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline IntegrationStatus GetIntegrationStatus() const { return m_integrationStatus; }
    inline bool IntegrationStatusHasBeenSet() const { return m_integrationStatusHasBeenSet; }
    inline void SetIntegrationStatus(IntegrationStatus value) { m_integrationStatusHasBeenSet = true; m_integrationStatus = value; }
    inline AccountJiraConfigurationOutput& WithIntegrationStatus(IntegrationStatus value) { SetIntegrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account-level: Jira issue management status.</p>
     */
    inline AccountJiraIssueManagementStatus GetIssueManagementStatus() const { return m_issueManagementStatus; }
    inline bool IssueManagementStatusHasBeenSet() const { return m_issueManagementStatusHasBeenSet; }
    inline void SetIssueManagementStatus(AccountJiraIssueManagementStatus value) { m_issueManagementStatusHasBeenSet = true; m_issueManagementStatus = value; }
    inline AccountJiraConfigurationOutput& WithIssueManagementStatus(AccountJiraIssueManagementStatus value) { SetIssueManagementStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account-level: Jira issue management type.</p>
     */
    inline IssueManagementType GetIssueManagementType() const { return m_issueManagementType; }
    inline bool IssueManagementTypeHasBeenSet() const { return m_issueManagementTypeHasBeenSet; }
    inline void SetIssueManagementType(IssueManagementType value) { m_issueManagementTypeHasBeenSet = true; m_issueManagementType = value; }
    inline AccountJiraConfigurationOutput& WithIssueManagementType(IssueManagementType value) { SetIssueManagementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline const Aws::String& GetSubdomain() const { return m_subdomain; }
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }
    template<typename SubdomainT = Aws::String>
    void SetSubdomain(SubdomainT&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::forward<SubdomainT>(value); }
    template<typename SubdomainT = Aws::String>
    AccountJiraConfigurationOutput& WithSubdomain(SubdomainT&& value) { SetSubdomain(std::forward<SubdomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline const Aws::String& GetJiraProjectKey() const { return m_jiraProjectKey; }
    inline bool JiraProjectKeyHasBeenSet() const { return m_jiraProjectKeyHasBeenSet; }
    template<typename JiraProjectKeyT = Aws::String>
    void SetJiraProjectKey(JiraProjectKeyT&& value) { m_jiraProjectKeyHasBeenSet = true; m_jiraProjectKey = std::forward<JiraProjectKeyT>(value); }
    template<typename JiraProjectKeyT = Aws::String>
    AccountJiraConfigurationOutput& WithJiraProjectKey(JiraProjectKeyT&& value) { SetJiraProjectKey(std::forward<JiraProjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    AccountJiraConfigurationOutput& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    IntegrationStatus m_integrationStatus{IntegrationStatus::NOT_SET};
    bool m_integrationStatusHasBeenSet = false;

    AccountJiraIssueManagementStatus m_issueManagementStatus{AccountJiraIssueManagementStatus::NOT_SET};
    bool m_issueManagementStatusHasBeenSet = false;

    IssueManagementType m_issueManagementType{IssueManagementType::NOT_SET};
    bool m_issueManagementTypeHasBeenSet = false;

    Aws::String m_subdomain;
    bool m_subdomainHasBeenSet = false;

    Aws::String m_jiraProjectKey;
    bool m_jiraProjectKeyHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
