/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PieChartConfiguration.h>
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

PieChartConfiguration::PieChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_donutOptionsHasBeenSet(false),
    m_smallMultiplesOptionsHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_valueLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_visualPaletteHasBeenSet(false),
    m_contributionAnalysisDefaultsHasBeenSet(false)
{
}

PieChartConfiguration::PieChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_donutOptionsHasBeenSet(false),
    m_smallMultiplesOptionsHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_valueLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_visualPaletteHasBeenSet(false),
    m_contributionAnalysisDefaultsHasBeenSet(false)
{
  *this = jsonValue;
}

PieChartConfiguration& PieChartConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DonutOptions"))
  {
    m_donutOptions = jsonValue.GetObject("DonutOptions");

    m_donutOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmallMultiplesOptions"))
  {
    m_smallMultiplesOptions = jsonValue.GetObject("SmallMultiplesOptions");

    m_smallMultiplesOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryLabelOptions"))
  {
    m_categoryLabelOptions = jsonValue.GetObject("CategoryLabelOptions");

    m_categoryLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueLabelOptions"))
  {
    m_valueLabelOptions = jsonValue.GetObject("ValueLabelOptions");

    m_valueLabelOptionsHasBeenSet = true;
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

  if(jsonValue.ValueExists("VisualPalette"))
  {
    m_visualPalette = jsonValue.GetObject("VisualPalette");

    m_visualPaletteHasBeenSet = true;
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

JsonValue PieChartConfiguration::Jsonize() const
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

  if(m_donutOptionsHasBeenSet)
  {
   payload.WithObject("DonutOptions", m_donutOptions.Jsonize());

  }

  if(m_smallMultiplesOptionsHasBeenSet)
  {
   payload.WithObject("SmallMultiplesOptions", m_smallMultiplesOptions.Jsonize());

  }

  if(m_categoryLabelOptionsHasBeenSet)
  {
   payload.WithObject("CategoryLabelOptions", m_categoryLabelOptions.Jsonize());

  }

  if(m_valueLabelOptionsHasBeenSet)
  {
   payload.WithObject("ValueLabelOptions", m_valueLabelOptions.Jsonize());

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

  if(m_visualPaletteHasBeenSet)
  {
   payload.WithObject("VisualPalette", m_visualPalette.Jsonize());

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
