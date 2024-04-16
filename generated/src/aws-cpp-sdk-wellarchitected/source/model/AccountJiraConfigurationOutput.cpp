/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AccountJiraConfigurationOutput.h>
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

AccountJiraConfigurationOutput::AccountJiraConfigurationOutput() : 
    m_integrationStatus(IntegrationStatus::NOT_SET),
    m_integrationStatusHasBeenSet(false),
    m_issueManagementStatus(AccountJiraIssueManagementStatus::NOT_SET),
    m_issueManagementStatusHasBeenSet(false),
    m_issueManagementType(IssueManagementType::NOT_SET),
    m_issueManagementTypeHasBeenSet(false),
    m_subdomainHasBeenSet(false),
    m_jiraProjectKeyHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

AccountJiraConfigurationOutput::AccountJiraConfigurationOutput(JsonView jsonValue) : 
    m_integrationStatus(IntegrationStatus::NOT_SET),
    m_integrationStatusHasBeenSet(false),
    m_issueManagementStatus(AccountJiraIssueManagementStatus::NOT_SET),
    m_issueManagementStatusHasBeenSet(false),
    m_issueManagementType(IssueManagementType::NOT_SET),
    m_issueManagementTypeHasBeenSet(false),
    m_subdomainHasBeenSet(false),
    m_jiraProjectKeyHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AccountJiraConfigurationOutput& AccountJiraConfigurationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IntegrationStatus"))
  {
    m_integrationStatus = IntegrationStatusMapper::GetIntegrationStatusForName(jsonValue.GetString("IntegrationStatus"));

    m_integrationStatusHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("Subdomain"))
  {
    m_subdomain = jsonValue.GetString("Subdomain");

    m_subdomainHasBeenSet = true;
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

JsonValue AccountJiraConfigurationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_integrationStatusHasBeenSet)
  {
   payload.WithString("IntegrationStatus", IntegrationStatusMapper::GetNameForIntegrationStatus(m_integrationStatus));
  }

  if(m_issueManagementStatusHasBeenSet)
  {
   payload.WithString("IssueManagementStatus", AccountJiraIssueManagementStatusMapper::GetNameForAccountJiraIssueManagementStatus(m_issueManagementStatus));
  }

  if(m_issueManagementTypeHasBeenSet)
  {
   payload.WithString("IssueManagementType", IssueManagementTypeMapper::GetNameForIssueManagementType(m_issueManagementType));
  }

  if(m_subdomainHasBeenSet)
  {
   payload.WithString("Subdomain", m_subdomain);

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
