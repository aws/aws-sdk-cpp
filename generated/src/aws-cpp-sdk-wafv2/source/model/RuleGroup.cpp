/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RuleGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RuleGroup::RuleGroup() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false),
    m_labelNamespaceHasBeenSet(false),
    m_customResponseBodiesHasBeenSet(false),
    m_availableLabelsHasBeenSet(false),
    m_consumedLabelsHasBeenSet(false)
{
}

RuleGroup::RuleGroup(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false),
    m_labelNamespaceHasBeenSet(false),
    m_customResponseBodiesHasBeenSet(false),
    m_availableLabelsHasBeenSet(false),
    m_consumedLabelsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroup& RuleGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInt64("Capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibilityConfig"))
  {
    m_visibilityConfig = jsonValue.GetObject("VisibilityConfig");

    m_visibilityConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelNamespace"))
  {
    m_labelNamespace = jsonValue.GetString("LabelNamespace");

    m_labelNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomResponseBodies"))
  {
    Aws::Map<Aws::String, JsonView> customResponseBodiesJsonMap = jsonValue.GetObject("CustomResponseBodies").GetAllObjects();
    for(auto& customResponseBodiesItem : customResponseBodiesJsonMap)
    {
      m_customResponseBodies[customResponseBodiesItem.first] = customResponseBodiesItem.second.AsObject();
    }
    m_customResponseBodiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailableLabels"))
  {
    Aws::Utils::Array<JsonView> availableLabelsJsonList = jsonValue.GetArray("AvailableLabels");
    for(unsigned availableLabelsIndex = 0; availableLabelsIndex < availableLabelsJsonList.GetLength(); ++availableLabelsIndex)
    {
      m_availableLabels.push_back(availableLabelsJsonList[availableLabelsIndex].AsObject());
    }
    m_availableLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedLabels"))
  {
    Aws::Utils::Array<JsonView> consumedLabelsJsonList = jsonValue.GetArray("ConsumedLabels");
    for(unsigned consumedLabelsIndex = 0; consumedLabelsIndex < consumedLabelsJsonList.GetLength(); ++consumedLabelsIndex)
    {
      m_consumedLabels.push_back(consumedLabelsJsonList[consumedLabelsIndex].AsObject());
    }
    m_consumedLabelsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInt64("Capacity", m_capacity);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_visibilityConfigHasBeenSet)
  {
   payload.WithObject("VisibilityConfig", m_visibilityConfig.Jsonize());

  }

  if(m_labelNamespaceHasBeenSet)
  {
   payload.WithString("LabelNamespace", m_labelNamespace);

  }

  if(m_customResponseBodiesHasBeenSet)
  {
   JsonValue customResponseBodiesJsonMap;
   for(auto& customResponseBodiesItem : m_customResponseBodies)
   {
     customResponseBodiesJsonMap.WithObject(customResponseBodiesItem.first, customResponseBodiesItem.second.Jsonize());
   }
   payload.WithObject("CustomResponseBodies", std::move(customResponseBodiesJsonMap));

  }

  if(m_availableLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availableLabelsJsonList(m_availableLabels.size());
   for(unsigned availableLabelsIndex = 0; availableLabelsIndex < availableLabelsJsonList.GetLength(); ++availableLabelsIndex)
   {
     availableLabelsJsonList[availableLabelsIndex].AsObject(m_availableLabels[availableLabelsIndex].Jsonize());
   }
   payload.WithArray("AvailableLabels", std::move(availableLabelsJsonList));

  }

  if(m_consumedLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> consumedLabelsJsonList(m_consumedLabels.size());
   for(unsigned consumedLabelsIndex = 0; consumedLabelsIndex < consumedLabelsJsonList.GetLength(); ++consumedLabelsIndex)
   {
     consumedLabelsJsonList[consumedLabelsIndex].AsObject(m_consumedLabels[consumedLabelsIndex].Jsonize());
   }
   payload.WithArray("ConsumedLabels", std::move(consumedLabelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
