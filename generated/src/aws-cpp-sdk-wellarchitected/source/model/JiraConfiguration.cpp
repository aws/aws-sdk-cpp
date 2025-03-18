/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/JiraConfiguration.h>
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

JiraConfiguration::JiraConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

JiraConfiguration& JiraConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JiraIssueUrl"))
  {
    m_jiraIssueUrl = jsonValue.GetString("JiraIssueUrl");
    m_jiraIssueUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastSyncedTime"))
  {
    m_lastSyncedTime = jsonValue.GetDouble("LastSyncedTime");
    m_lastSyncedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue JiraConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jiraIssueUrlHasBeenSet)
  {
   payload.WithString("JiraIssueUrl", m_jiraIssueUrl);

  }

  if(m_lastSyncedTimeHasBeenSet)
  {
   payload.WithDouble("LastSyncedTime", m_lastSyncedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
