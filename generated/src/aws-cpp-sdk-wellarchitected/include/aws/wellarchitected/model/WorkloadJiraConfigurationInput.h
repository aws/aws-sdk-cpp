/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/WorkloadIssueManagementStatus.h>
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
   * <p>Workload-level: Input for the Jira configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/WorkloadJiraConfigurationInput">AWS
   * API Reference</a></p>
   */
  class WorkloadJiraConfigurationInput
  {
  public:
    AWS_WELLARCHITECTED_API WorkloadJiraConfigurationInput();
    AWS_WELLARCHITECTED_API WorkloadJiraConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadJiraConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Workload-level: Jira issue management status.</p>
     */
    inline const WorkloadIssueManagementStatus& GetIssueManagementStatus() const{ return m_issueManagementStatus; }

    /**
     * <p>Workload-level: Jira issue management status.</p>
     */
    inline bool IssueManagementStatusHasBeenSet() const { return m_issueManagementStatusHasBeenSet; }

    /**
     * <p>Workload-level: Jira issue management status.</p>
     */
    inline void SetIssueManagementStatus(const WorkloadIssueManagementStatus& value) { m_issueManagementStatusHasBeenSet = true; m_issueManagementStatus = value; }

    /**
     * <p>Workload-level: Jira issue management status.</p>
     */
    inline void SetIssueManagementStatus(WorkloadIssueManagementStatus&& value) { m_issueManagementStatusHasBeenSet = true; m_issueManagementStatus = std::move(value); }

    /**
     * <p>Workload-level: Jira issue management status.</p>
     */
    inline WorkloadJiraConfigurationInput& WithIssueManagementStatus(const WorkloadIssueManagementStatus& value) { SetIssueManagementStatus(value); return *this;}

    /**
     * <p>Workload-level: Jira issue management status.</p>
     */
    inline WorkloadJiraConfigurationInput& WithIssueManagementStatus(WorkloadIssueManagementStatus&& value) { SetIssueManagementStatus(std::move(value)); return *this;}


    /**
     * <p>Workload-level: Jira issue management type.</p>
     */
    inline const IssueManagementType& GetIssueManagementType() const{ return m_issueManagementType; }

    /**
     * <p>Workload-level: Jira issue management type.</p>
     */
    inline bool IssueManagementTypeHasBeenSet() const { return m_issueManagementTypeHasBeenSet; }

    /**
     * <p>Workload-level: Jira issue management type.</p>
     */
    inline void SetIssueManagementType(const IssueManagementType& value) { m_issueManagementTypeHasBeenSet = true; m_issueManagementType = value; }

    /**
     * <p>Workload-level: Jira issue management type.</p>
     */
    inline void SetIssueManagementType(IssueManagementType&& value) { m_issueManagementTypeHasBeenSet = true; m_issueManagementType = std::move(value); }

    /**
     * <p>Workload-level: Jira issue management type.</p>
     */
    inline WorkloadJiraConfigurationInput& WithIssueManagementType(const IssueManagementType& value) { SetIssueManagementType(value); return *this;}

    /**
     * <p>Workload-level: Jira issue management type.</p>
     */
    inline WorkloadJiraConfigurationInput& WithIssueManagementType(IssueManagementType&& value) { SetIssueManagementType(std::move(value)); return *this;}


    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline const Aws::String& GetJiraProjectKey() const{ return m_jiraProjectKey; }

    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline bool JiraProjectKeyHasBeenSet() const { return m_jiraProjectKeyHasBeenSet; }

    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline void SetJiraProjectKey(const Aws::String& value) { m_jiraProjectKeyHasBeenSet = true; m_jiraProjectKey = value; }

    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline void SetJiraProjectKey(Aws::String&& value) { m_jiraProjectKeyHasBeenSet = true; m_jiraProjectKey = std::move(value); }

    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline void SetJiraProjectKey(const char* value) { m_jiraProjectKeyHasBeenSet = true; m_jiraProjectKey.assign(value); }

    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline WorkloadJiraConfigurationInput& WithJiraProjectKey(const Aws::String& value) { SetJiraProjectKey(value); return *this;}

    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline WorkloadJiraConfigurationInput& WithJiraProjectKey(Aws::String&& value) { SetJiraProjectKey(std::move(value)); return *this;}

    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline WorkloadJiraConfigurationInput& WithJiraProjectKey(const char* value) { SetJiraProjectKey(value); return *this;}

  private:

    WorkloadIssueManagementStatus m_issueManagementStatus;
    bool m_issueManagementStatusHasBeenSet = false;

    IssueManagementType m_issueManagementType;
    bool m_issueManagementTypeHasBeenSet = false;

    Aws::String m_jiraProjectKey;
    bool m_jiraProjectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
