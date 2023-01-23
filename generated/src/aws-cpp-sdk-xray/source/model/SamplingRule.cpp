/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/SamplingRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

SamplingRule::SamplingRule() : 
    m_ruleNameHasBeenSet(false),
    m_ruleARNHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_fixedRate(0.0),
    m_fixedRateHasBeenSet(false),
    m_reservoirSize(0),
    m_reservoirSizeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_hTTPMethodHasBeenSet(false),
    m_uRLPathHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

SamplingRule::SamplingRule(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_ruleARNHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_fixedRate(0.0),
    m_fixedRateHasBeenSet(false),
    m_reservoirSize(0),
    m_reservoirSizeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_hTTPMethodHasBeenSet(false),
    m_uRLPathHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

SamplingRule& SamplingRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleARN"))
  {
    m_ruleARN = jsonValue.GetString("RuleARN");

    m_ruleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FixedRate"))
  {
    m_fixedRate = jsonValue.GetDouble("FixedRate");

    m_fixedRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservoirSize"))
  {
    m_reservoirSize = jsonValue.GetInteger("ReservoirSize");

    m_reservoirSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceType"))
  {
    m_serviceType = jsonValue.GetString("ServiceType");

    m_serviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HTTPMethod"))
  {
    m_hTTPMethod = jsonValue.GetString("HTTPMethod");

    m_hTTPMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("URLPath"))
  {
    m_uRLPath = jsonValue.GetString("URLPath");

    m_uRLPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue SamplingRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_ruleARNHasBeenSet)
  {
   payload.WithString("RuleARN", m_ruleARN);

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_fixedRateHasBeenSet)
  {
   payload.WithDouble("FixedRate", m_fixedRate);

  }

  if(m_reservoirSizeHasBeenSet)
  {
   payload.WithInteger("ReservoirSize", m_reservoirSize);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("ServiceType", m_serviceType);

  }

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_hTTPMethodHasBeenSet)
  {
   payload.WithString("HTTPMethod", m_hTTPMethod);

  }

  if(m_uRLPathHasBeenSet)
  {
   payload.WithString("URLPath", m_uRLPath);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
