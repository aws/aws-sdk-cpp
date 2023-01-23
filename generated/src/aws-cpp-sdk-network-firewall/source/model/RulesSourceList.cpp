/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RulesSourceList.h>
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

RulesSourceList::RulesSourceList() : 
    m_targetsHasBeenSet(false),
    m_targetTypesHasBeenSet(false),
    m_generatedRulesType(GeneratedRulesType::NOT_SET),
    m_generatedRulesTypeHasBeenSet(false)
{
}

RulesSourceList::RulesSourceList(JsonView jsonValue) : 
    m_targetsHasBeenSet(false),
    m_targetTypesHasBeenSet(false),
    m_generatedRulesType(GeneratedRulesType::NOT_SET),
    m_generatedRulesTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RulesSourceList& RulesSourceList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTypes"))
  {
    Aws::Utils::Array<JsonView> targetTypesJsonList = jsonValue.GetArray("TargetTypes");
    for(unsigned targetTypesIndex = 0; targetTypesIndex < targetTypesJsonList.GetLength(); ++targetTypesIndex)
    {
      m_targetTypes.push_back(TargetTypeMapper::GetTargetTypeForName(targetTypesJsonList[targetTypesIndex].AsString()));
    }
    m_targetTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratedRulesType"))
  {
    m_generatedRulesType = GeneratedRulesTypeMapper::GetGeneratedRulesTypeForName(jsonValue.GetString("GeneratedRulesType"));

    m_generatedRulesTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RulesSourceList::Jsonize() const
{
  JsonValue payload;

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_targetTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetTypesJsonList(m_targetTypes.size());
   for(unsigned targetTypesIndex = 0; targetTypesIndex < targetTypesJsonList.GetLength(); ++targetTypesIndex)
   {
     targetTypesJsonList[targetTypesIndex].AsString(TargetTypeMapper::GetNameForTargetType(m_targetTypes[targetTypesIndex]));
   }
   payload.WithArray("TargetTypes", std::move(targetTypesJsonList));

  }

  if(m_generatedRulesTypeHasBeenSet)
  {
   payload.WithString("GeneratedRulesType", GeneratedRulesTypeMapper::GetNameForGeneratedRulesType(m_generatedRulesType));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
