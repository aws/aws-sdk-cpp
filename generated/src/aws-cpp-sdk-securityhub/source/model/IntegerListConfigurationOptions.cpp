/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/IntegerListConfigurationOptions.h>
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

IntegerListConfigurationOptions::IntegerListConfigurationOptions() : 
    m_defaultValueHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

IntegerListConfigurationOptions::IntegerListConfigurationOptions(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
  *this = jsonValue;
}

IntegerListConfigurationOptions& IntegerListConfigurationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    Aws::Utils::Array<JsonView> defaultValueJsonList = jsonValue.GetArray("DefaultValue");
    for(unsigned defaultValueIndex = 0; defaultValueIndex < defaultValueJsonList.GetLength(); ++defaultValueIndex)
    {
      m_defaultValue.push_back(defaultValueJsonList[defaultValueIndex].AsInteger());
    }
    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetInteger("Min");

    m_minHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetInteger("Max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxItems"))
  {
    m_maxItems = jsonValue.GetInteger("MaxItems");

    m_maxItemsHasBeenSet = true;
  }

  return *this;
}

JsonValue IntegerListConfigurationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultValueJsonList(m_defaultValue.size());
   for(unsigned defaultValueIndex = 0; defaultValueIndex < defaultValueJsonList.GetLength(); ++defaultValueIndex)
   {
     defaultValueJsonList[defaultValueIndex].AsInteger(m_defaultValue[defaultValueIndex]);
   }
   payload.WithArray("DefaultValue", std::move(defaultValueJsonList));

  }

  if(m_minHasBeenSet)
  {
   payload.WithInteger("Min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithInteger("Max", m_max);

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
