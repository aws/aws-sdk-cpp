/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BoxPlotOptions.h>
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

BoxPlotOptions::BoxPlotOptions() : 
    m_styleOptionsHasBeenSet(false),
    m_outlierVisibility(Visibility::NOT_SET),
    m_outlierVisibilityHasBeenSet(false),
    m_allDataPointsVisibility(Visibility::NOT_SET),
    m_allDataPointsVisibilityHasBeenSet(false)
{
}

BoxPlotOptions::BoxPlotOptions(JsonView jsonValue) : 
    m_styleOptionsHasBeenSet(false),
    m_outlierVisibility(Visibility::NOT_SET),
    m_outlierVisibilityHasBeenSet(false),
    m_allDataPointsVisibility(Visibility::NOT_SET),
    m_allDataPointsVisibilityHasBeenSet(false)
{
  *this = jsonValue;
}

BoxPlotOptions& BoxPlotOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StyleOptions"))
  {
    m_styleOptions = jsonValue.GetObject("StyleOptions");

    m_styleOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutlierVisibility"))
  {
    m_outlierVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("OutlierVisibility"));

    m_outlierVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllDataPointsVisibility"))
  {
    m_allDataPointsVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("AllDataPointsVisibility"));

    m_allDataPointsVisibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue BoxPlotOptions::Jsonize() const
{
  JsonValue payload;

  if(m_styleOptionsHasBeenSet)
  {
   payload.WithObject("StyleOptions", m_styleOptions.Jsonize());

  }

  if(m_outlierVisibilityHasBeenSet)
  {
   payload.WithString("OutlierVisibility", VisibilityMapper::GetNameForVisibility(m_outlierVisibility));
  }

  if(m_allDataPointsVisibilityHasBeenSet)
  {
   payload.WithString("AllDataPointsVisibility", VisibilityMapper::GetNameForVisibility(m_allDataPointsVisibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
