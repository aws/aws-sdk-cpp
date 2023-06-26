/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataColor.h>
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

DataColor::DataColor() : 
    m_colorHasBeenSet(false),
    m_dataValue(0.0),
    m_dataValueHasBeenSet(false)
{
}

DataColor::DataColor(JsonView jsonValue) : 
    m_colorHasBeenSet(false),
    m_dataValue(0.0),
    m_dataValueHasBeenSet(false)
{
  *this = jsonValue;
}

DataColor& DataColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");

    m_colorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataValue"))
  {
    m_dataValue = jsonValue.GetDouble("DataValue");

    m_dataValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DataColor::Jsonize() const
{
  JsonValue payload;

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  if(m_dataValueHasBeenSet)
  {
   payload.WithDouble("DataValue", m_dataValue);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
