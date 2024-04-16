/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadJiraConfigurationOutput.h>
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

WorkloadJiraConfigurationOutput::WorkloadJiraConfigurationOutput() : 
    m_issueManagementStatus(WorkloadIssueManagementStatus::NOT_SET),
    m_issueManagementStatusHasBeenSet(false),
    m_issueManagementType(IssueManagementType::NOT_SET),
    m_issueManagementTypeHasBeenSet(false),
    m_jiraProjectKeyHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

WorkloadJiraConfigurationOutput::WorkloadJiraConfigurationOutput(JsonView jsonValue) : 
    m_issueManagementStatus(WorkloadIssueManagementStatus::NOT_SET),
    m_issueManagementStatusHasBeenSet(false),
    m_issueManagementType(IssueManagementType::NOT_SET),
    m_issueManagementTypeHasBeenSet(false),
    m_jiraProjectKeyHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadJiraConfigurationOutput& WorkloadJiraConfigurationOutput::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadJiraConfigurationOutput::Jsonize() const
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

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
