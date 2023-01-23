/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverRuleConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

ResolverRuleConfig::ResolverRuleConfig() : 
    m_nameHasBeenSet(false),
    m_targetIpsHasBeenSet(false),
    m_resolverEndpointIdHasBeenSet(false)
{
}

ResolverRuleConfig::ResolverRuleConfig(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_targetIpsHasBeenSet(false),
    m_resolverEndpointIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResolverRuleConfig& ResolverRuleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetIps"))
  {
    Aws::Utils::Array<JsonView> targetIpsJsonList = jsonValue.GetArray("TargetIps");
    for(unsigned targetIpsIndex = 0; targetIpsIndex < targetIpsJsonList.GetLength(); ++targetIpsIndex)
    {
      m_targetIps.push_back(targetIpsJsonList[targetIpsIndex].AsObject());
    }
    m_targetIpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolverEndpointId"))
  {
    m_resolverEndpointId = jsonValue.GetString("ResolverEndpointId");

    m_resolverEndpointIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolverRuleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_targetIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetIpsJsonList(m_targetIps.size());
   for(unsigned targetIpsIndex = 0; targetIpsIndex < targetIpsJsonList.GetLength(); ++targetIpsIndex)
   {
     targetIpsJsonList[targetIpsIndex].AsObject(m_targetIps[targetIpsIndex].Jsonize());
   }
   payload.WithArray("TargetIps", std::move(targetIpsJsonList));

  }

  if(m_resolverEndpointIdHasBeenSet)
  {
   payload.WithString("ResolverEndpointId", m_resolverEndpointId);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
