/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataLabelOptions.h>
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

DataLabelOptions::DataLabelOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLabelOptions& DataLabelOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CategoryLabelVisibility"))
  {
    m_categoryLabelVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("CategoryLabelVisibility"));
    m_categoryLabelVisibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MeasureLabelVisibility"))
  {
    m_measureLabelVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("MeasureLabelVisibility"));
    m_measureLabelVisibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataLabelTypes"))
  {
    Aws::Utils::Array<JsonView> dataLabelTypesJsonList = jsonValue.GetArray("DataLabelTypes");
    for(unsigned dataLabelTypesIndex = 0; dataLabelTypesIndex < dataLabelTypesJsonList.GetLength(); ++dataLabelTypesIndex)
    {
      m_dataLabelTypes.push_back(dataLabelTypesJsonList[dataLabelTypesIndex].AsObject());
    }
    m_dataLabelTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    m_position = DataLabelPositionMapper::GetDataLabelPositionForName(jsonValue.GetString("Position"));
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelContent"))
  {
    m_labelContent = DataLabelContentMapper::GetDataLabelContentForName(jsonValue.GetString("LabelContent"));
    m_labelContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelFontConfiguration"))
  {
    m_labelFontConfiguration = jsonValue.GetObject("LabelFontConfiguration");
    m_labelFontConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelColor"))
  {
    m_labelColor = jsonValue.GetString("LabelColor");
    m_labelColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Overlap"))
  {
    m_overlap = DataLabelOverlapMapper::GetDataLabelOverlapForName(jsonValue.GetString("Overlap"));
    m_overlapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalsVisibility"))
  {
    m_totalsVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("TotalsVisibility"));
    m_totalsVisibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLabelOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_categoryLabelVisibilityHasBeenSet)
  {
   payload.WithString("CategoryLabelVisibility", VisibilityMapper::GetNameForVisibility(m_categoryLabelVisibility));
  }

  if(m_measureLabelVisibilityHasBeenSet)
  {
   payload.WithString("MeasureLabelVisibility", VisibilityMapper::GetNameForVisibility(m_measureLabelVisibility));
  }

  if(m_dataLabelTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataLabelTypesJsonList(m_dataLabelTypes.size());
   for(unsigned dataLabelTypesIndex = 0; dataLabelTypesIndex < dataLabelTypesJsonList.GetLength(); ++dataLabelTypesIndex)
   {
     dataLabelTypesJsonList[dataLabelTypesIndex].AsObject(m_dataLabelTypes[dataLabelTypesIndex].Jsonize());
   }
   payload.WithArray("DataLabelTypes", std::move(dataLabelTypesJsonList));

  }

  if(m_positionHasBeenSet)
  {
   payload.WithString("Position", DataLabelPositionMapper::GetNameForDataLabelPosition(m_position));
  }

  if(m_labelContentHasBeenSet)
  {
   payload.WithString("LabelContent", DataLabelContentMapper::GetNameForDataLabelContent(m_labelContent));
  }

  if(m_labelFontConfigurationHasBeenSet)
  {
   payload.WithObject("LabelFontConfiguration", m_labelFontConfiguration.Jsonize());

  }

  if(m_labelColorHasBeenSet)
  {
   payload.WithString("LabelColor", m_labelColor);

  }

  if(m_overlapHasBeenSet)
  {
   payload.WithString("Overlap", DataLabelOverlapMapper::GetNameForDataLabelOverlap(m_overlap));
  }

  if(m_totalsVisibilityHasBeenSet)
  {
   payload.WithString("TotalsVisibility", VisibilityMapper::GetNameForVisibility(m_totalsVisibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
