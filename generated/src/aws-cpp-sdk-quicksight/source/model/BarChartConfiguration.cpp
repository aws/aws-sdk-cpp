/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BarChartConfiguration.h>
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

BarChartConfiguration::BarChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_orientation(BarChartOrientation::NOT_SET),
    m_orientationHasBeenSet(false),
    m_barsArrangement(BarsArrangement::NOT_SET),
    m_barsArrangementHasBeenSet(false),
    m_visualPaletteHasBeenSet(false),
    m_smallMultiplesOptionsHasBeenSet(false),
    m_categoryAxisHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_valueAxisHasBeenSet(false),
    m_valueLabelOptionsHasBeenSet(false),
    m_colorLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_referenceLinesHasBeenSet(false),
    m_contributionAnalysisDefaultsHasBeenSet(false)
{
}

BarChartConfiguration::BarChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_orientation(BarChartOrientation::NOT_SET),
    m_orientationHasBeenSet(false),
    m_barsArrangement(BarsArrangement::NOT_SET),
    m_barsArrangementHasBeenSet(false),
    m_visualPaletteHasBeenSet(false),
    m_smallMultiplesOptionsHasBeenSet(false),
    m_categoryAxisHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_valueAxisHasBeenSet(false),
    m_valueLabelOptionsHasBeenSet(false),
    m_colorLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_referenceLinesHasBeenSet(false),
    m_contributionAnalysisDefaultsHasBeenSet(false)
{
  *this = jsonValue;
}

BarChartConfiguration& BarChartConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldWells"))
  {
    m_fieldWells = jsonValue.GetObject("FieldWells");

    m_fieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortConfiguration"))
  {
    m_sortConfiguration = jsonValue.GetObject("SortConfiguration");

    m_sortConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Orientation"))
  {
    m_orientation = BarChartOrientationMapper::GetBarChartOrientationForName(jsonValue.GetString("Orientation"));

    m_orientationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BarsArrangement"))
  {
    m_barsArrangement = BarsArrangementMapper::GetBarsArrangementForName(jsonValue.GetString("BarsArrangement"));

    m_barsArrangementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualPalette"))
  {
    m_visualPalette = jsonValue.GetObject("VisualPalette");

    m_visualPaletteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmallMultiplesOptions"))
  {
    m_smallMultiplesOptions = jsonValue.GetObject("SmallMultiplesOptions");

    m_smallMultiplesOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryAxis"))
  {
    m_categoryAxis = jsonValue.GetObject("CategoryAxis");

    m_categoryAxisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryLabelOptions"))
  {
    m_categoryLabelOptions = jsonValue.GetObject("CategoryLabelOptions");

    m_categoryLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueAxis"))
  {
    m_valueAxis = jsonValue.GetObject("ValueAxis");

    m_valueAxisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueLabelOptions"))
  {
    m_valueLabelOptions = jsonValue.GetObject("ValueLabelOptions");

    m_valueLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColorLabelOptions"))
  {
    m_colorLabelOptions = jsonValue.GetObject("ColorLabelOptions");

    m_colorLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Legend"))
  {
    m_legend = jsonValue.GetObject("Legend");

    m_legendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataLabels"))
  {
    m_dataLabels = jsonValue.GetObject("DataLabels");

    m_dataLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tooltip"))
  {
    m_tooltip = jsonValue.GetObject("Tooltip");

    m_tooltipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceLines"))
  {
    Aws::Utils::Array<JsonView> referenceLinesJsonList = jsonValue.GetArray("ReferenceLines");
    for(unsigned referenceLinesIndex = 0; referenceLinesIndex < referenceLinesJsonList.GetLength(); ++referenceLinesIndex)
    {
      m_referenceLines.push_back(referenceLinesJsonList[referenceLinesIndex].AsObject());
    }
    m_referenceLinesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContributionAnalysisDefaults"))
  {
    Aws::Utils::Array<JsonView> contributionAnalysisDefaultsJsonList = jsonValue.GetArray("ContributionAnalysisDefaults");
    for(unsigned contributionAnalysisDefaultsIndex = 0; contributionAnalysisDefaultsIndex < contributionAnalysisDefaultsJsonList.GetLength(); ++contributionAnalysisDefaultsIndex)
    {
      m_contributionAnalysisDefaults.push_back(contributionAnalysisDefaultsJsonList[contributionAnalysisDefaultsIndex].AsObject());
    }
    m_contributionAnalysisDefaultsHasBeenSet = true;
  }

  return *this;
}

JsonValue BarChartConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldWellsHasBeenSet)
  {
   payload.WithObject("FieldWells", m_fieldWells.Jsonize());

  }

  if(m_sortConfigurationHasBeenSet)
  {
   payload.WithObject("SortConfiguration", m_sortConfiguration.Jsonize());

  }

  if(m_orientationHasBeenSet)
  {
   payload.WithString("Orientation", BarChartOrientationMapper::GetNameForBarChartOrientation(m_orientation));
  }

  if(m_barsArrangementHasBeenSet)
  {
   payload.WithString("BarsArrangement", BarsArrangementMapper::GetNameForBarsArrangement(m_barsArrangement));
  }

  if(m_visualPaletteHasBeenSet)
  {
   payload.WithObject("VisualPalette", m_visualPalette.Jsonize());

  }

  if(m_smallMultiplesOptionsHasBeenSet)
  {
   payload.WithObject("SmallMultiplesOptions", m_smallMultiplesOptions.Jsonize());

  }

  if(m_categoryAxisHasBeenSet)
  {
   payload.WithObject("CategoryAxis", m_categoryAxis.Jsonize());

  }

  if(m_categoryLabelOptionsHasBeenSet)
  {
   payload.WithObject("CategoryLabelOptions", m_categoryLabelOptions.Jsonize());

  }

  if(m_valueAxisHasBeenSet)
  {
   payload.WithObject("ValueAxis", m_valueAxis.Jsonize());

  }

  if(m_valueLabelOptionsHasBeenSet)
  {
   payload.WithObject("ValueLabelOptions", m_valueLabelOptions.Jsonize());

  }

  if(m_colorLabelOptionsHasBeenSet)
  {
   payload.WithObject("ColorLabelOptions", m_colorLabelOptions.Jsonize());

  }

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_dataLabelsHasBeenSet)
  {
   payload.WithObject("DataLabels", m_dataLabels.Jsonize());

  }

  if(m_tooltipHasBeenSet)
  {
   payload.WithObject("Tooltip", m_tooltip.Jsonize());

  }

  if(m_referenceLinesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referenceLinesJsonList(m_referenceLines.size());
   for(unsigned referenceLinesIndex = 0; referenceLinesIndex < referenceLinesJsonList.GetLength(); ++referenceLinesIndex)
   {
     referenceLinesJsonList[referenceLinesIndex].AsObject(m_referenceLines[referenceLinesIndex].Jsonize());
   }
   payload.WithArray("ReferenceLines", std::move(referenceLinesJsonList));

  }

  if(m_contributionAnalysisDefaultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contributionAnalysisDefaultsJsonList(m_contributionAnalysisDefaults.size());
   for(unsigned contributionAnalysisDefaultsIndex = 0; contributionAnalysisDefaultsIndex < contributionAnalysisDefaultsJsonList.GetLength(); ++contributionAnalysisDefaultsIndex)
   {
     contributionAnalysisDefaultsJsonList[contributionAnalysisDefaultsIndex].AsObject(m_contributionAnalysisDefaults[contributionAnalysisDefaultsIndex].Jsonize());
   }
   payload.WithArray("ContributionAnalysisDefaults", std::move(contributionAnalysisDefaultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
