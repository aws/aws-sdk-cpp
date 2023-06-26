/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AutomatedAbrRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

AutomatedAbrRule::AutomatedAbrRule() : 
    m_allowedRenditionsHasBeenSet(false),
    m_forceIncludeRenditionsHasBeenSet(false),
    m_minBottomRenditionSizeHasBeenSet(false),
    m_minTopRenditionSizeHasBeenSet(false),
    m_type(RuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

AutomatedAbrRule::AutomatedAbrRule(JsonView jsonValue) : 
    m_allowedRenditionsHasBeenSet(false),
    m_forceIncludeRenditionsHasBeenSet(false),
    m_minBottomRenditionSizeHasBeenSet(false),
    m_minTopRenditionSizeHasBeenSet(false),
    m_type(RuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AutomatedAbrRule& AutomatedAbrRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedRenditions"))
  {
    Aws::Utils::Array<JsonView> allowedRenditionsJsonList = jsonValue.GetArray("allowedRenditions");
    for(unsigned allowedRenditionsIndex = 0; allowedRenditionsIndex < allowedRenditionsJsonList.GetLength(); ++allowedRenditionsIndex)
    {
      m_allowedRenditions.push_back(allowedRenditionsJsonList[allowedRenditionsIndex].AsObject());
    }
    m_allowedRenditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forceIncludeRenditions"))
  {
    Aws::Utils::Array<JsonView> forceIncludeRenditionsJsonList = jsonValue.GetArray("forceIncludeRenditions");
    for(unsigned forceIncludeRenditionsIndex = 0; forceIncludeRenditionsIndex < forceIncludeRenditionsJsonList.GetLength(); ++forceIncludeRenditionsIndex)
    {
      m_forceIncludeRenditions.push_back(forceIncludeRenditionsJsonList[forceIncludeRenditionsIndex].AsObject());
    }
    m_forceIncludeRenditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minBottomRenditionSize"))
  {
    m_minBottomRenditionSize = jsonValue.GetObject("minBottomRenditionSize");

    m_minBottomRenditionSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minTopRenditionSize"))
  {
    m_minTopRenditionSize = jsonValue.GetObject("minTopRenditionSize");

    m_minTopRenditionSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RuleTypeMapper::GetRuleTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomatedAbrRule::Jsonize() const
{
  JsonValue payload;

  if(m_allowedRenditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedRenditionsJsonList(m_allowedRenditions.size());
   for(unsigned allowedRenditionsIndex = 0; allowedRenditionsIndex < allowedRenditionsJsonList.GetLength(); ++allowedRenditionsIndex)
   {
     allowedRenditionsJsonList[allowedRenditionsIndex].AsObject(m_allowedRenditions[allowedRenditionsIndex].Jsonize());
   }
   payload.WithArray("allowedRenditions", std::move(allowedRenditionsJsonList));

  }

  if(m_forceIncludeRenditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> forceIncludeRenditionsJsonList(m_forceIncludeRenditions.size());
   for(unsigned forceIncludeRenditionsIndex = 0; forceIncludeRenditionsIndex < forceIncludeRenditionsJsonList.GetLength(); ++forceIncludeRenditionsIndex)
   {
     forceIncludeRenditionsJsonList[forceIncludeRenditionsIndex].AsObject(m_forceIncludeRenditions[forceIncludeRenditionsIndex].Jsonize());
   }
   payload.WithArray("forceIncludeRenditions", std::move(forceIncludeRenditionsJsonList));

  }

  if(m_minBottomRenditionSizeHasBeenSet)
  {
   payload.WithObject("minBottomRenditionSize", m_minBottomRenditionSize.Jsonize());

  }

  if(m_minTopRenditionSizeHasBeenSet)
  {
   payload.WithObject("minTopRenditionSize", m_minTopRenditionSize.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RuleTypeMapper::GetNameForRuleType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
