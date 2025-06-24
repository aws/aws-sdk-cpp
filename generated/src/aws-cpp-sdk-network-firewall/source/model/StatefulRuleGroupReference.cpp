/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatefulRuleGroupReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

StatefulRuleGroupReference::StatefulRuleGroupReference(JsonView jsonValue)
{
  *this = jsonValue;
}

StatefulRuleGroupReference& StatefulRuleGroupReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Override"))
  {
    m_override = jsonValue.GetObject("Override");
    m_overrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeepThreatInspection"))
  {
    m_deepThreatInspection = jsonValue.GetBool("DeepThreatInspection");
    m_deepThreatInspectionHasBeenSet = true;
  }
  return *this;
}

JsonValue StatefulRuleGroupReference::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_overrideHasBeenSet)
  {
   payload.WithObject("Override", m_override.Jsonize());

  }

  if(m_deepThreatInspectionHasBeenSet)
  {
   payload.WithBool("DeepThreatInspection", m_deepThreatInspection);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
