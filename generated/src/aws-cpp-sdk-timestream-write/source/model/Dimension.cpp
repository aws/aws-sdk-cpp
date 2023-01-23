/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/Dimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

Dimension::Dimension() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_dimensionValueType(DimensionValueType::NOT_SET),
    m_dimensionValueTypeHasBeenSet(false)
{
}

Dimension::Dimension(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_dimensionValueType(DimensionValueType::NOT_SET),
    m_dimensionValueTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Dimension& Dimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionValueType"))
  {
    m_dimensionValueType = DimensionValueTypeMapper::GetDimensionValueTypeForName(jsonValue.GetString("DimensionValueType"));

    m_dimensionValueTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Dimension::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_dimensionValueTypeHasBeenSet)
  {
   payload.WithString("DimensionValueType", DimensionValueTypeMapper::GetNameForDimensionValueType(m_dimensionValueType));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
