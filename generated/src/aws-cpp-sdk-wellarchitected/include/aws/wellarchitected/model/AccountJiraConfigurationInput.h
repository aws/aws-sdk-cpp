/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/AccountJiraIssueManagementStatus.h>
#include <aws/wellarchitected/model/IssueManagementType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/IntegrationStatusInput.h>
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
   * <p>Account-level: Input for the Jira configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AccountJiraConfigurationInput">AWS
   * API Reference</a></p>
   */
  class AccountJiraConfigurationInput
  {
  public:
    AWS_WELLARCHITECTED_API AccountJiraConfigurationInput();
    AWS_WELLARCHITECTED_API AccountJiraConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API AccountJiraConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AccountJiraConfigurationInput& WithIssueManagementStatus(const AccountJiraIssueManagementStatus& value) { SetIssueManagementStatus(value); return *this;}

    /**
     * <p>Account-level: Jira issue management status.</p>
     */
    inline AccountJiraConfigurationInput& WithIssueManagementStatus(AccountJiraIssueManagementStatus&& value) { SetIssueManagementStatus(std::move(value)); return *this;}


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
    inline AccountJiraConfigurationInput& WithIssueManagementType(const IssueManagementType& value) { SetIssueManagementType(value); return *this;}

    /**
     * <p>Account-level: Jira issue management type.</p>
     */
    inline AccountJiraConfigurationInput& WithIssueManagementType(IssueManagementType&& value) { SetIssueManagementType(std::move(value)); return *this;}


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
    inline AccountJiraConfigurationInput& WithJiraProjectKey(const Aws::String& value) { SetJiraProjectKey(value); return *this;}

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline AccountJiraConfigurationInput& WithJiraProjectKey(Aws::String&& value) { SetJiraProjectKey(std::move(value)); return *this;}

    /**
     * <p>Account-level: Jira project key to sync workloads to.</p>
     */
    inline AccountJiraConfigurationInput& WithJiraProjectKey(const char* value) { SetJiraProjectKey(value); return *this;}


    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline const IntegrationStatusInput& GetIntegrationStatus() const{ return m_integrationStatus; }

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline bool IntegrationStatusHasBeenSet() const { return m_integrationStatusHasBeenSet; }

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline void SetIntegrationStatus(const IntegrationStatusInput& value) { m_integrationStatusHasBeenSet = true; m_integrationStatus = value; }

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline void SetIntegrationStatus(IntegrationStatusInput&& value) { m_integrationStatusHasBeenSet = true; m_integrationStatus = std::move(value); }

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline AccountJiraConfigurationInput& WithIntegrationStatus(const IntegrationStatusInput& value) { SetIntegrationStatus(value); return *this;}

    /**
     * <p>Account-level: Configuration status of the Jira integration.</p>
     */
    inline AccountJiraConfigurationInput& WithIntegrationStatus(IntegrationStatusInput&& value) { SetIntegrationStatus(std::move(value)); return *this;}

  private:

    AccountJiraIssueManagementStatus m_issueManagementStatus;
    bool m_issueManagementStatusHasBeenSet = false;

    IssueManagementType m_issueManagementType;
    bool m_issueManagementTypeHasBeenSet = false;

    Aws::String m_jiraProjectKey;
    bool m_jiraProjectKeyHasBeenSet = false;

    IntegrationStatusInput m_integrationStatus;
    bool m_integrationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
