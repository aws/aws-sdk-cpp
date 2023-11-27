/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/EnumListConfigurationOptions.h>
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

EnumListConfigurationOptions::EnumListConfigurationOptions() : 
    m_defaultValueHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_allowedValuesHasBeenSet(false)
{
}

EnumListConfigurationOptions::EnumListConfigurationOptions(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_allowedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

EnumListConfigurationOptions& EnumListConfigurationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    Aws::Utils::Array<JsonView> defaultValueJsonList = jsonValue.GetArray("DefaultValue");
    for(unsigned defaultValueIndex = 0; defaultValueIndex < defaultValueJsonList.GetLength(); ++defaultValueIndex)
    {
      m_defaultValue.push_back(defaultValueJsonList[defaultValueIndex].AsString());
    }
    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxItems"))
  {
    m_maxItems = jsonValue.GetInteger("MaxItems");

    m_maxItemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedValues"))
  {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("AllowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue EnumListConfigurationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultValueJsonList(m_defaultValue.size());
   for(unsigned defaultValueIndex = 0; defaultValueIndex < defaultValueJsonList.GetLength(); ++defaultValueIndex)
   {
     defaultValueJsonList[defaultValueIndex].AsString(m_defaultValue[defaultValueIndex]);
   }
   payload.WithArray("DefaultValue", std::move(defaultValueJsonList));

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  if(m_allowedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
   }
   payload.WithArray("AllowedValues", std::move(allowedValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
