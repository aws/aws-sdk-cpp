/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomColor.h>
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

CustomColor::CustomColor() : 
    m_fieldValueHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_specialValue(SpecialValue::NOT_SET),
    m_specialValueHasBeenSet(false)
{
}

CustomColor::CustomColor(JsonView jsonValue) : 
    m_fieldValueHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_specialValue(SpecialValue::NOT_SET),
    m_specialValueHasBeenSet(false)
{
  *this = jsonValue;
}

CustomColor& CustomColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldValue"))
  {
    m_fieldValue = jsonValue.GetString("FieldValue");

    m_fieldValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");

    m_colorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpecialValue"))
  {
    m_specialValue = SpecialValueMapper::GetSpecialValueForName(jsonValue.GetString("SpecialValue"));

    m_specialValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomColor::Jsonize() const
{
  JsonValue payload;

  if(m_fieldValueHasBeenSet)
  {
   payload.WithString("FieldValue", m_fieldValue);

  }

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  if(m_specialValueHasBeenSet)
  {
   payload.WithString("SpecialValue", SpecialValueMapper::GetNameForSpecialValue(m_specialValue));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
