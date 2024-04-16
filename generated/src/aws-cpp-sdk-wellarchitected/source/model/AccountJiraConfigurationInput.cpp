/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AccountJiraConfigurationInput.h>
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

AccountJiraConfigurationInput::AccountJiraConfigurationInput() : 
    m_issueManagementStatus(AccountJiraIssueManagementStatus::NOT_SET),
    m_issueManagementStatusHasBeenSet(false),
    m_issueManagementType(IssueManagementType::NOT_SET),
    m_issueManagementTypeHasBeenSet(false),
    m_jiraProjectKeyHasBeenSet(false),
    m_integrationStatus(IntegrationStatusInput::NOT_SET),
    m_integrationStatusHasBeenSet(false)
{
}

AccountJiraConfigurationInput::AccountJiraConfigurationInput(JsonView jsonValue) : 
    m_issueManagementStatus(AccountJiraIssueManagementStatus::NOT_SET),
    m_issueManagementStatusHasBeenSet(false),
    m_issueManagementType(IssueManagementType::NOT_SET),
    m_issueManagementTypeHasBeenSet(false),
    m_jiraProjectKeyHasBeenSet(false),
    m_integrationStatus(IntegrationStatusInput::NOT_SET),
    m_integrationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AccountJiraConfigurationInput& AccountJiraConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IssueManagementStatus"))
  {
    m_issueManagementStatus = AccountJiraIssueManagementStatusMapper::GetAccountJiraIssueManagementStatusForName(jsonValue.GetString("IssueManagementStatus"));

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

  if(jsonValue.ValueExists("IntegrationStatus"))
  {
    m_integrationStatus = IntegrationStatusInputMapper::GetIntegrationStatusInputForName(jsonValue.GetString("IntegrationStatus"));

    m_integrationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountJiraConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_issueManagementStatusHasBeenSet)
  {
   payload.WithString("IssueManagementStatus", AccountJiraIssueManagementStatusMapper::GetNameForAccountJiraIssueManagementStatus(m_issueManagementStatus));
  }

  if(m_issueManagementTypeHasBeenSet)
  {
   payload.WithString("IssueManagementType", IssueManagementTypeMapper::GetNameForIssueManagementType(m_issueManagementType));
  }

  if(m_jiraProjectKeyHasBeenSet)
  {
   payload.WithString("JiraProjectKey", m_jiraProjectKey);

  }

  if(m_integrationStatusHasBeenSet)
  {
   payload.WithString("IntegrationStatus", IntegrationStatusInputMapper::GetNameForIntegrationStatusInput(m_integrationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
