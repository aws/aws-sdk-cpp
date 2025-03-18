/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadJiraConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

WorkloadJiraConfigurationInput::WorkloadJiraConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkloadJiraConfigurationInput& WorkloadJiraConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IssueManagementStatus"))
  {
    m_issueManagementStatus = WorkloadIssueManagementStatusMapper::GetWorkloadIssueManagementStatusForName(jsonValue.GetString("IssueManagementStatus"));
    m_issueManagementStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IssueManagementType"))
  {
    m_issueManagementType = IssueManagementTypeMapper::GetIssueManagementTypeForName(jsonValue.GetString("IssueManagementType"));
    m_issueManagementTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JiraProjectKey"))
  {
    m_jiraProjectKey = jsonValue.GetString("JiraProjectKey");
    m_jiraProjectKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadJiraConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_issueManagementStatusHasBeenSet)
  {
   payload.WithString("IssueManagementStatus", WorkloadIssueManagementStatusMapper::GetNameForWorkloadIssueManagementStatus(m_issueManagementStatus));
  }

  if(m_issueManagementTypeHasBeenSet)
  {
   payload.WithString("IssueManagementType", IssueManagementTypeMapper::GetNameForIssueManagementType(m_issueManagementType));
  }

  if(m_jiraProjectKeyHasBeenSet)
  {
   payload.WithString("JiraProjectKey", m_jiraProjectKey);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
