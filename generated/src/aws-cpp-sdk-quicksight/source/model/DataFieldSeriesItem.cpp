/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataFieldSeriesItem.h>
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

DataFieldSeriesItem::DataFieldSeriesItem() : 
    m_fieldIdHasBeenSet(false),
    m_fieldValueHasBeenSet(false),
    m_axisBinding(AxisBinding::NOT_SET),
    m_axisBindingHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

DataFieldSeriesItem::DataFieldSeriesItem(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_fieldValueHasBeenSet(false),
    m_axisBinding(AxisBinding::NOT_SET),
    m_axisBindingHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

DataFieldSeriesItem& DataFieldSeriesItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldValue"))
  {
    m_fieldValue = jsonValue.GetString("FieldValue");

    m_fieldValueHasBeenSet = true;
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

JsonValue DataFieldSeriesItem::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_fieldValueHasBeenSet)
  {
   payload.WithString("FieldValue", m_fieldValue);

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
