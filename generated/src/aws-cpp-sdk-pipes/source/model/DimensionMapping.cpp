/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/DimensionMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

DimensionMapping::DimensionMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

DimensionMapping& DimensionMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionValue"))
  {
    m_dimensionValue = jsonValue.GetString("DimensionValue");
    m_dimensionValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DimensionValueType"))
  {
    m_dimensionValueType = DimensionValueTypeMapper::GetDimensionValueTypeForName(jsonValue.GetString("DimensionValueType"));
    m_dimensionValueTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DimensionName"))
  {
    m_dimensionName = jsonValue.GetString("DimensionName");
    m_dimensionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DimensionMapping::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionValueHasBeenSet)
  {
   payload.WithString("DimensionValue", m_dimensionValue);

  }

  if(m_dimensionValueTypeHasBeenSet)
  {
   payload.WithString("DimensionValueType", DimensionValueTypeMapper::GetNameForDimensionValueType(m_dimensionValueType));
  }

  if(m_dimensionNameHasBeenSet)
  {
   payload.WithString("DimensionName", m_dimensionName);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
