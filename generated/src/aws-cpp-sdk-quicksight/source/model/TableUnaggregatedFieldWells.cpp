/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableUnaggregatedFieldWells.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TableUnaggregatedFieldWells::TableUnaggregatedFieldWells() : 
    m_valuesHasBeenSet(false)
{
}

TableUnaggregatedFieldWells::TableUnaggregatedFieldWells(JsonView jsonValue) : 
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

TableUnaggregatedFieldWells& TableUnaggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue TableUnaggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
