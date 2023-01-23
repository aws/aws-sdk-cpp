/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FirewallPolicyStatelessRuleGroupReferencesDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

FirewallPolicyStatelessRuleGroupReferencesDetails::FirewallPolicyStatelessRuleGroupReferencesDetails() : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

FirewallPolicyStatelessRuleGroupReferencesDetails::FirewallPolicyStatelessRuleGroupReferencesDetails(JsonView jsonValue) : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallPolicyStatelessRuleGroupReferencesDetails& FirewallPolicyStatelessRuleGroupReferencesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallPolicyStatelessRuleGroupReferencesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
