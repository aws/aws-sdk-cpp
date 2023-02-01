/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FieldSeriesItem.h>
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

FieldSeriesItem::FieldSeriesItem() : 
    m_fieldIdHasBeenSet(false),
    m_axisBinding(AxisBinding::NOT_SET),
    m_axisBindingHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

FieldSeriesItem::FieldSeriesItem(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_axisBinding(AxisBinding::NOT_SET),
    m_axisBindingHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

FieldSeriesItem& FieldSeriesItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AxisBinding"))
  {
    m_axisBinding = AxisBindingMapper::GetAxisBindingForName(jsonValue.GetString("AxisBinding"));

    m_axisBindingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldSeriesItem::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_axisBindingHasBeenSet)
  {
   payload.WithString("AxisBinding", AxisBindingMapper::GetNameForAxisBinding(m_axisBinding));
  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
