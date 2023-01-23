/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineChartConfiguration.h>
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

LineChartConfiguration::LineChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_forecastConfigurationsHasBeenSet(false),
    m_type(LineChartType::NOT_SET),
    m_typeHasBeenSet(false),
    m_smallMultiplesOptionsHasBeenSet(false),
    m_xAxisDisplayOptionsHasBeenSet(false),
    m_xAxisLabelOptionsHasBeenSet(false),
    m_primaryYAxisDisplayOptionsHasBeenSet(false),
    m_primaryYAxisLabelOptionsHasBeenSet(false),
    m_secondaryYAxisDisplayOptionsHasBeenSet(false),
    m_secondaryYAxisLabelOptionsHasBeenSet(false),
    m_defaultSeriesSettingsHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_referenceLinesHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_contributionAnalysisDefaultsHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
}

LineChartConfiguration::LineChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_forecastConfigurationsHasBeenSet(false),
    m_type(LineChartType::NOT_SET),
    m_typeHasBeenSet(false),
    m_smallMultiplesOptionsHasBeenSet(false),
    m_xAxisDisplayOptionsHasBeenSet(false),
    m_xAxisLabelOptionsHasBeenSet(false),
    m_primaryYAxisDisplayOptionsHasBeenSet(false),
    m_primaryYAxisLabelOptionsHasBeenSet(false),
    m_secondaryYAxisDisplayOptionsHasBeenSet(false),
    m_secondaryYAxisLabelOptionsHasBeenSet(false),
    m_defaultSeriesSettingsHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_referenceLinesHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_contributionAnalysisDefaultsHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
  *this = jsonValue;
}

LineChartConfiguration& LineChartConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ForecastConfigurations"))
  {
    Aws::Utils::Array<JsonView> forecastConfigurationsJsonList = jsonValue.GetArray("ForecastConfigurations");
    for(unsigned forecastConfigurationsIndex = 0; forecastConfigurationsIndex < forecastConfigurationsJsonList.GetLength(); ++forecastConfigurationsIndex)
    {
      m_forecastConfigurations.push_back(forecastConfigurationsJsonList[forecastConfigurationsIndex].AsObject());
    }
    m_forecastConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = LineChartTypeMapper::GetLineChartTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmallMultiplesOptions"))
  {
    m_smallMultiplesOptions = jsonValue.GetObject("SmallMultiplesOptions");

    m_smallMultiplesOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XAxisDisplayOptions"))
  {
    m_xAxisDisplayOptions = jsonValue.GetObject("XAxisDisplayOptions");

    m_xAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XAxisLabelOptions"))
  {
    m_xAxisLabelOptions = jsonValue.GetObject("XAxisLabelOptions");

    m_xAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryYAxisDisplayOptions"))
  {
    m_primaryYAxisDisplayOptions = jsonValue.GetObject("PrimaryYAxisDisplayOptions");

    m_primaryYAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryYAxisLabelOptions"))
  {
    m_primaryYAxisLabelOptions = jsonValue.GetObject("PrimaryYAxisLabelOptions");

    m_primaryYAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryYAxisDisplayOptions"))
  {
    m_secondaryYAxisDisplayOptions = jsonValue.GetObject("SecondaryYAxisDisplayOptions");

    m_secondaryYAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryYAxisLabelOptions"))
  {
    m_secondaryYAxisLabelOptions = jsonValue.GetObject("SecondaryYAxisLabelOptions");

    m_secondaryYAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSeriesSettings"))
  {
    m_defaultSeriesSettings = jsonValue.GetObject("DefaultSeriesSettings");

    m_defaultSeriesSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Series"))
  {
    Aws::Utils::Array<JsonView> seriesJsonList = jsonValue.GetArray("Series");
    for(unsigned seriesIndex = 0; seriesIndex < seriesJsonList.GetLength(); ++seriesIndex)
    {
      m_series.push_back(seriesJsonList[seriesIndex].AsObject());
    }
    m_seriesHasBeenSet = true;
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

  if(jsonValue.ValueExists("ReferenceLines"))
  {
    Aws::Utils::Array<JsonView> referenceLinesJsonList = jsonValue.GetArray("ReferenceLines");
    for(unsigned referenceLinesIndex = 0; referenceLinesIndex < referenceLinesJsonList.GetLength(); ++referenceLinesIndex)
    {
      m_referenceLines.push_back(referenceLinesJsonList[referenceLinesIndex].AsObject());
    }
    m_referenceLinesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tooltip"))
  {
    m_tooltip = jsonValue.GetObject("Tooltip");

    m_tooltipHasBeenSet = true;
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

  if(jsonValue.ValueExists("VisualPalette"))
  {
    m_visualPalette = jsonValue.GetObject("VisualPalette");

    m_visualPaletteHasBeenSet = true;
  }

  return *this;
}

JsonValue LineChartConfiguration::Jsonize() const
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

  if(m_forecastConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> forecastConfigurationsJsonList(m_forecastConfigurations.size());
   for(unsigned forecastConfigurationsIndex = 0; forecastConfigurationsIndex < forecastConfigurationsJsonList.GetLength(); ++forecastConfigurationsIndex)
   {
     forecastConfigurationsJsonList[forecastConfigurationsIndex].AsObject(m_forecastConfigurations[forecastConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ForecastConfigurations", std::move(forecastConfigurationsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", LineChartTypeMapper::GetNameForLineChartType(m_type));
  }

  if(m_smallMultiplesOptionsHasBeenSet)
  {
   payload.WithObject("SmallMultiplesOptions", m_smallMultiplesOptions.Jsonize());

  }

  if(m_xAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("XAxisDisplayOptions", m_xAxisDisplayOptions.Jsonize());

  }

  if(m_xAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("XAxisLabelOptions", m_xAxisLabelOptions.Jsonize());

  }

  if(m_primaryYAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("PrimaryYAxisDisplayOptions", m_primaryYAxisDisplayOptions.Jsonize());

  }

  if(m_primaryYAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("PrimaryYAxisLabelOptions", m_primaryYAxisLabelOptions.Jsonize());

  }

  if(m_secondaryYAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("SecondaryYAxisDisplayOptions", m_secondaryYAxisDisplayOptions.Jsonize());

  }

  if(m_secondaryYAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("SecondaryYAxisLabelOptions", m_secondaryYAxisLabelOptions.Jsonize());

  }

  if(m_defaultSeriesSettingsHasBeenSet)
  {
   payload.WithObject("DefaultSeriesSettings", m_defaultSeriesSettings.Jsonize());

  }

  if(m_seriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> seriesJsonList(m_series.size());
   for(unsigned seriesIndex = 0; seriesIndex < seriesJsonList.GetLength(); ++seriesIndex)
   {
     seriesJsonList[seriesIndex].AsObject(m_series[seriesIndex].Jsonize());
   }
   payload.WithArray("Series", std::move(seriesJsonList));

  }

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_dataLabelsHasBeenSet)
  {
   payload.WithObject("DataLabels", m_dataLabels.Jsonize());

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

  if(m_tooltipHasBeenSet)
  {
   payload.WithObject("Tooltip", m_tooltip.Jsonize());

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

  if(m_visualPaletteHasBeenSet)
  {
   payload.WithObject("VisualPalette", m_visualPalette.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
