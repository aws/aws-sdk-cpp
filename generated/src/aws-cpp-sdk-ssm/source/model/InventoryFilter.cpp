/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventoryFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InventoryFilter::InventoryFilter() : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_type(InventoryQueryOperatorType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

InventoryFilter::InventoryFilter(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_type(InventoryQueryOperatorType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryFilter& InventoryFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = InventoryQueryOperatorTypeMapper::GetInventoryQueryOperatorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InventoryQueryOperatorTypeMapper::GetNameForInventoryQueryOperatorType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
