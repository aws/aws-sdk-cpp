/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/IpRuleItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

IpRuleItem::IpRuleItem() : 
    m_ipRuleHasBeenSet(false),
    m_ruleDescHasBeenSet(false)
{
}

IpRuleItem::IpRuleItem(JsonView jsonValue) : 
    m_ipRuleHasBeenSet(false),
    m_ruleDescHasBeenSet(false)
{
  *this = jsonValue;
}

IpRuleItem& IpRuleItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipRule"))
  {
    m_ipRule = jsonValue.GetString("ipRule");

    m_ipRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleDesc"))
  {
    m_ruleDesc = jsonValue.GetString("ruleDesc");

    m_ruleDescHasBeenSet = true;
  }

  return *this;
}

JsonValue IpRuleItem::Jsonize() const
{
  JsonValue payload;

  if(m_ipRuleHasBeenSet)
  {
   payload.WithString("ipRule", m_ipRule);

  }

  if(m_ruleDescHasBeenSet)
  {
   payload.WithString("ruleDesc", m_ruleDesc);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
