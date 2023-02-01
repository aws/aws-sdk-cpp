/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SetDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SetDimension::SetDimension() : 
    m_dimensionType(DimensionType::NOT_SET),
    m_dimensionTypeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

SetDimension::SetDimension(JsonView jsonValue) : 
    m_dimensionType(DimensionType::NOT_SET),
    m_dimensionTypeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

SetDimension& SetDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionType"))
  {
    m_dimensionType = DimensionTypeMapper::GetDimensionTypeForName(jsonValue.GetString("DimensionType"));

    m_dimensionTypeHasBeenSet = true;
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

  return *this;
}

JsonValue SetDimension::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionTypeHasBeenSet)
  {
   payload.WithString("DimensionType", DimensionTypeMapper::GetNameForDimensionType(m_dimensionType));
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

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
