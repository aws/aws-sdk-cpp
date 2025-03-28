﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

Rule::Rule(JsonView jsonValue)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("includedUsersAndGroups"))
  {
    m_includedUsersAndGroups = jsonValue.GetObject("includedUsersAndGroups");
    m_includedUsersAndGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("excludedUsersAndGroups"))
  {
    m_excludedUsersAndGroups = jsonValue.GetObject("excludedUsersAndGroups");
    m_excludedUsersAndGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleType"))
  {
    m_ruleType = RuleTypeMapper::GetRuleTypeForName(jsonValue.GetString("ruleType"));
    m_ruleTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleConfiguration"))
  {
    m_ruleConfiguration = jsonValue.GetObject("ruleConfiguration");
    m_ruleConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_includedUsersAndGroupsHasBeenSet)
  {
   payload.WithObject("includedUsersAndGroups", m_includedUsersAndGroups.Jsonize());

  }

  if(m_excludedUsersAndGroupsHasBeenSet)
  {
   payload.WithObject("excludedUsersAndGroups", m_excludedUsersAndGroups.Jsonize());

  }

  if(m_ruleTypeHasBeenSet)
  {
   payload.WithString("ruleType", RuleTypeMapper::GetNameForRuleType(m_ruleType));
  }

  if(m_ruleConfigurationHasBeenSet)
  {
   payload.WithObject("ruleConfiguration", m_ruleConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
