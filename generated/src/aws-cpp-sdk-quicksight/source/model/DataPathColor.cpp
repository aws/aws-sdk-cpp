/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataPathColor.h>
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

DataPathColor::DataPathColor() : 
    m_elementHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false)
{
}

DataPathColor::DataPathColor(JsonView jsonValue) : 
    m_elementHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false)
{
  *this = jsonValue;
}

DataPathColor& DataPathColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Element"))
  {
    m_element = jsonValue.GetObject("Element");

    m_elementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");

    m_colorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  return *this;
}

JsonValue DataPathColor::Jsonize() const
{
  JsonValue payload;

  if(m_elementHasBeenSet)
  {
   payload.WithObject("Element", m_element.Jsonize());

  }

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_timeGranularity));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
