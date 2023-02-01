/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerAttributes.h>
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

AwsElbLoadBalancerAttributes::AwsElbLoadBalancerAttributes() : 
    m_accessLogHasBeenSet(false),
    m_connectionDrainingHasBeenSet(false),
    m_connectionSettingsHasBeenSet(false),
    m_crossZoneLoadBalancingHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false)
{
}

AwsElbLoadBalancerAttributes::AwsElbLoadBalancerAttributes(JsonView jsonValue) : 
    m_accessLogHasBeenSet(false),
    m_connectionDrainingHasBeenSet(false),
    m_connectionSettingsHasBeenSet(false),
    m_crossZoneLoadBalancingHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerAttributes& AwsElbLoadBalancerAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessLog"))
  {
    m_accessLog = jsonValue.GetObject("AccessLog");

    m_accessLogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionDraining"))
  {
    m_connectionDraining = jsonValue.GetObject("ConnectionDraining");

    m_connectionDrainingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionSettings"))
  {
    m_connectionSettings = jsonValue.GetObject("ConnectionSettings");

    m_connectionSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossZoneLoadBalancing"))
  {
    m_crossZoneLoadBalancing = jsonValue.GetObject("CrossZoneLoadBalancing");

    m_crossZoneLoadBalancingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalAttributes"))
  {
    Aws::Utils::Array<JsonView> additionalAttributesJsonList = jsonValue.GetArray("AdditionalAttributes");
    for(unsigned additionalAttributesIndex = 0; additionalAttributesIndex < additionalAttributesJsonList.GetLength(); ++additionalAttributesIndex)
    {
      m_additionalAttributes.push_back(additionalAttributesJsonList[additionalAttributesIndex].AsObject());
    }
    m_additionalAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_accessLogHasBeenSet)
  {
   payload.WithObject("AccessLog", m_accessLog.Jsonize());

  }

  if(m_connectionDrainingHasBeenSet)
  {
   payload.WithObject("ConnectionDraining", m_connectionDraining.Jsonize());

  }

  if(m_connectionSettingsHasBeenSet)
  {
   payload.WithObject("ConnectionSettings", m_connectionSettings.Jsonize());

  }

  if(m_crossZoneLoadBalancingHasBeenSet)
  {
   payload.WithObject("CrossZoneLoadBalancing", m_crossZoneLoadBalancing.Jsonize());

  }

  if(m_additionalAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalAttributesJsonList(m_additionalAttributes.size());
   for(unsigned additionalAttributesIndex = 0; additionalAttributesIndex < additionalAttributesJsonList.GetLength(); ++additionalAttributesIndex)
   {
     additionalAttributesJsonList[additionalAttributesIndex].AsObject(m_additionalAttributes[additionalAttributesIndex].Jsonize());
   }
   payload.WithArray("AdditionalAttributes", std::move(additionalAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
