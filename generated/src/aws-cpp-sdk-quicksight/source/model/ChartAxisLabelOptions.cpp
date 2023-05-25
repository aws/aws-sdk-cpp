/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ChartAxisLabelOptions.h>
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

ChartAxisLabelOptions::ChartAxisLabelOptions() : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_sortIconVisibility(Visibility::NOT_SET),
    m_sortIconVisibilityHasBeenSet(false),
    m_axisLabelOptionsHasBeenSet(false)
{
}

ChartAxisLabelOptions::ChartAxisLabelOptions(JsonView jsonValue) : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_sortIconVisibility(Visibility::NOT_SET),
    m_sortIconVisibilityHasBeenSet(false),
    m_axisLabelOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ChartAxisLabelOptions& ChartAxisLabelOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortIconVisibility"))
  {
    m_sortIconVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("SortIconVisibility"));

    m_sortIconVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AxisLabelOptions"))
  {
    Aws::Utils::Array<JsonView> axisLabelOptionsJsonList = jsonValue.GetArray("AxisLabelOptions");
    for(unsigned axisLabelOptionsIndex = 0; axisLabelOptionsIndex < axisLabelOptionsJsonList.GetLength(); ++axisLabelOptionsIndex)
    {
      m_axisLabelOptions.push_back(axisLabelOptionsJsonList[axisLabelOptionsIndex].AsObject());
    }
    m_axisLabelOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ChartAxisLabelOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_sortIconVisibilityHasBeenSet)
  {
   payload.WithString("SortIconVisibility", VisibilityMapper::GetNameForVisibility(m_sortIconVisibility));
  }

  if(m_axisLabelOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> axisLabelOptionsJsonList(m_axisLabelOptions.size());
   for(unsigned axisLabelOptionsIndex = 0; axisLabelOptionsIndex < axisLabelOptionsJsonList.GetLength(); ++axisLabelOptionsIndex)
   {
     axisLabelOptionsJsonList[axisLabelOptionsIndex].AsObject(m_axisLabelOptions[axisLabelOptionsIndex].Jsonize());
   }
   payload.WithArray("AxisLabelOptions", std::move(axisLabelOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
