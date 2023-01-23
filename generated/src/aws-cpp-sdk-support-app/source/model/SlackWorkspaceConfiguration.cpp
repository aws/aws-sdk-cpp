/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/SlackWorkspaceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupportApp
{
namespace Model
{

SlackWorkspaceConfiguration::SlackWorkspaceConfiguration() : 
    m_allowOrganizationMemberAccount(false),
    m_allowOrganizationMemberAccountHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false)
{
}

SlackWorkspaceConfiguration::SlackWorkspaceConfiguration(JsonView jsonValue) : 
    m_allowOrganizationMemberAccount(false),
    m_allowOrganizationMemberAccountHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false)
{
  *this = jsonValue;
}

SlackWorkspaceConfiguration& SlackWorkspaceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowOrganizationMemberAccount"))
  {
    m_allowOrganizationMemberAccount = jsonValue.GetBool("allowOrganizationMemberAccount");

    m_allowOrganizationMemberAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("teamId"))
  {
    m_teamId = jsonValue.GetString("teamId");

    m_teamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("teamName"))
  {
    m_teamName = jsonValue.GetString("teamName");

    m_teamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SlackWorkspaceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowOrganizationMemberAccountHasBeenSet)
  {
   payload.WithBool("allowOrganizationMemberAccount", m_allowOrganizationMemberAccount);

  }

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("teamId", m_teamId);

  }

  if(m_teamNameHasBeenSet)
  {
   payload.WithString("teamName", m_teamName);

  }

  return payload;
}

} // namespace Model
} // namespace SupportApp
} // namespace Aws
