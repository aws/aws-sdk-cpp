/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ImpersonationMatchedRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

ImpersonationMatchedRule::ImpersonationMatchedRule() : 
    m_impersonationRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ImpersonationMatchedRule::ImpersonationMatchedRule(JsonView jsonValue) : 
    m_impersonationRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ImpersonationMatchedRule& ImpersonationMatchedRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImpersonationRuleId"))
  {
    m_impersonationRuleId = jsonValue.GetString("ImpersonationRuleId");

    m_impersonationRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ImpersonationMatchedRule::Jsonize() const
{
  JsonValue payload;

  if(m_impersonationRuleIdHasBeenSet)
  {
   payload.WithString("ImpersonationRuleId", m_impersonationRuleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
