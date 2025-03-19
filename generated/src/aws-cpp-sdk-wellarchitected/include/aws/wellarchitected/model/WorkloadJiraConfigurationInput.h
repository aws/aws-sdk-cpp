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
    AWS_WELLARCHITECTED_API WorkloadJiraConfigurationInput() = default;
    AWS_WELLARCHITECTED_API WorkloadJiraConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadJiraConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Workload-level: Jira issue management status.</p>
     */
    inline WorkloadIssueManagementStatus GetIssueManagementStatus() const { return m_issueManagementStatus; }
    inline bool IssueManagementStatusHasBeenSet() const { return m_issueManagementStatusHasBeenSet; }
    inline void SetIssueManagementStatus(WorkloadIssueManagementStatus value) { m_issueManagementStatusHasBeenSet = true; m_issueManagementStatus = value; }
    inline WorkloadJiraConfigurationInput& WithIssueManagementStatus(WorkloadIssueManagementStatus value) { SetIssueManagementStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Workload-level: Jira issue management type.</p>
     */
    inline IssueManagementType GetIssueManagementType() const { return m_issueManagementType; }
    inline bool IssueManagementTypeHasBeenSet() const { return m_issueManagementTypeHasBeenSet; }
    inline void SetIssueManagementType(IssueManagementType value) { m_issueManagementTypeHasBeenSet = true; m_issueManagementType = value; }
    inline WorkloadJiraConfigurationInput& WithIssueManagementType(IssueManagementType value) { SetIssueManagementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Workload-level: Jira project key to sync workloads to.</p>
     */
    inline const Aws::String& GetJiraProjectKey() const { return m_jiraProjectKey; }
    inline bool JiraProjectKeyHasBeenSet() const { return m_jiraProjectKeyHasBeenSet; }
    template<typename JiraProjectKeyT = Aws::String>
    void SetJiraProjectKey(JiraProjectKeyT&& value) { m_jiraProjectKeyHasBeenSet = true; m_jiraProjectKey = std::forward<JiraProjectKeyT>(value); }
    template<typename JiraProjectKeyT = Aws::String>
    WorkloadJiraConfigurationInput& WithJiraProjectKey(JiraProjectKeyT&& value) { SetJiraProjectKey(std::forward<JiraProjectKeyT>(value)); return *this;}
    ///@}
  private:

    WorkloadIssueManagementStatus m_issueManagementStatus{WorkloadIssueManagementStatus::NOT_SET};
    bool m_issueManagementStatusHasBeenSet = false;

    IssueManagementType m_issueManagementType{IssueManagementType::NOT_SET};
    bool m_issueManagementTypeHasBeenSet = false;

    Aws::String m_jiraProjectKey;
    bool m_jiraProjectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
