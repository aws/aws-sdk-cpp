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
    AWS_WELLARCHITECTED_API AccountJiraConfigurationOutput();
    AWS_WELLARCHITECTED_API AccountJiraConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API AccountJiraConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline const IntegrationStatus& GetIntegrationStatus() const{ return m_integrationStatus; }

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline bool IntegrationStatusHasBeenSet() const { return m_integrationStatusHasBeenSet; }

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline void SetIntegrationStatus(const IntegrationStatus& value) { m_integrationStatusHasBeenSet = true; m_integrationStatus = value; }

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline void SetIntegrationStatus(IntegrationStatus&& value) { m_integrationStatusHasBeenSet = true; m_integrationStatus = std::move(value); }

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline AccountJiraConfigurationOutput& WithIntegrationStatus(const IntegrationStatus& value) { SetIntegrationStatus(value); return *this;}

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline AccountJiraConfigurationOutput& WithIntegrationStatus(IntegrationStatus&& value) { SetIntegrationStatus(std::move(value)); return *this;}


    /**
     * <p>Account-level: Jira issue management status.</p>
     */
    inline const AccountJiraIssueManagementStatus& GetIssueManagementStatus() const{ return m_issueManagementStatus; }

    /**
     * <p>Account-level: Jira issue management status.</p>
     */
    inline bool IssueManagementStatusHasBeenSet() const { return m_issueManagementStatusHasBeenSet; }

    /**
     * <p>Account-level: Jira issue management status.</p>
     */
    inline void SetIssueManagementStatus(const AccountJiraIssueManagementStatus& value) { m_issueManagementStatusHasBeenSet = true; m_issueManagementStatus = value; }

    /**
     * <p>Account-level: Jira issue management status.</p>
     */
    inline void SetIssueManagementStatus(AccountJiraIssueManagementStatus&& value) { m_issueManagementStatusHasBeenSet = true; m_issueManagementStatus = std::move(value); }

    /**
     * <p>Account-level: Jira issue management status.</p>
     */
    inline AccountJiraConfigurationOutput& WithIssueManagementStatus(const AccountJiraIssueManagementStatus& value) { SetIssueManagementStatus(value); return *this;}

    /**
     * <p>Account-level: Jira issue management status.</p>
     */
    inline AccountJiraConfigurationOutput& WithIssueManagementStatus(AccountJiraIssueManagementStatus&& value) { SetIssueManagementStatus(std::move(value)); return *this;}


    /**
     * <p>Account-level: Jira issue management type.</p>
     */
    inline const IssueManagementType& GetIssueManagementType() const{ return m_issueManagementType; }

    /**
     * <p>Account-level: Jira issue management type.</p>
     */
    inline bool IssueManagementTypeHasBeenSet() const { return m_issueManagementTypeHasBeenSet; }

    /**
     * <p>Account-level: Jira issue management type.</p>
     */
    inline void SetIssueManagementType(const IssueManagementType& value) { m_issueManagementTypeHasBeenSet = true; m_issueManagementType = value; }

    /**
     * <p>Account-level: Jira issue management type.</p>
     */
    inline void SetIssueManagementType(IssueManagementType&& value) { m_issueManagementTypeHasBeenSet = true; m_issueManagementType = std::move(value); }

    /**
     * <p>Account-level: Jira issue management type.</p>
     */
    inline AccountJiraConfigurationOutput& WithIssueManagementType(const IssueManagementType& value) { SetIssueManagementType(value); return *this;}

    /**
     * <p>Account-level: Jira issue management type.</p>
     */
    inline AccountJiraConfigurationOutput& WithIssueManagementType(IssueManagementType&& value) { SetIssueManagementType(std::move(value)); return *this;}


    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline const Aws::String& GetSubdomain() const{ return m_subdomain; }

    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }

    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline void SetSubdomain(const Aws::String& value) { m_subdomainHasBeenSet = true; m_subdomain = value; }

    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline void SetSubdomain(Aws::String&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::move(value); }

    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline void SetSubdomain(const char* value) { m_subdomainHasBeenSet = true; m_subdomain.assign(value); }

    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline AccountJiraConfigurationOutput& WithSubdomain(const Aws::String& value) { SetSubdomain(value); return *this;}

    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline AccountJiraConfigurationOutput& WithSubdomain(Aws::String&& value) { SetSubdomain(std::move(value)); return *this;}

    /**
     * <p>Account-level: Jira subdomain URL.</p>
     */
    inline AccountJiraConfigurationOutput& WithSubdomain(const char* value) { SetSubdomain(value); return *this;}


    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline const Aws::String& GetJiraProjectKey() const{ return m_jiraProjectKey; }

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline bool JiraProjectKeyHasBeenSet() const { return m_jiraProjectKeyHasBeenSet; }

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline void SetJiraProjectKey(const Aws::String& value) { m_jiraProjectKeyHasBeenSet = true; m_jiraProjectKey = value; }

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline void SetJiraProjectKey(Aws::String&& value) { m_jiraProjectKeyHasBeenSet = true; m_jiraProjectKey = std::move(value); }

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline void SetJiraProjectKey(const char* value) { m_jiraProjectKeyHasBeenSet = true; m_jiraProjectKey.assign(value); }

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline AccountJiraConfigurationOutput& WithJiraProjectKey(const Aws::String& value) { SetJiraProjectKey(value); return *this;}

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline AccountJiraConfigurationOutput& WithJiraProjectKey(Aws::String&& value) { SetJiraProjectKey(std::move(value)); return *this;}

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline AccountJiraConfigurationOutput& WithJiraProjectKey(const char* value) { SetJiraProjectKey(value); return *this;}


    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline AccountJiraConfigurationOutput& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline AccountJiraConfigurationOutput& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Account-level: Status message on configuration of the Jira integration.</p>
     */
    inline AccountJiraConfigurationOutput& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    IntegrationStatus m_integrationStatus;
    bool m_integrationStatusHasBeenSet = false;

    AccountJiraIssueManagementStatus m_issueManagementStatus;
    bool m_issueManagementStatusHasBeenSet = false;

    IssueManagementType m_issueManagementType;
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
