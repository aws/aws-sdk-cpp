/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardPublishOptions.h>
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

DashboardPublishOptions::DashboardPublishOptions() : 
    m_adHocFilteringOptionHasBeenSet(false),
    m_exportToCSVOptionHasBeenSet(false),
    m_sheetControlsOptionHasBeenSet(false),
    m_sheetLayoutElementMaximizationOptionHasBeenSet(false),
    m_visualMenuOptionHasBeenSet(false),
    m_visualAxisSortOptionHasBeenSet(false),
    m_exportWithHiddenFieldsOptionHasBeenSet(false),
    m_dataPointDrillUpDownOptionHasBeenSet(false),
    m_dataPointMenuLabelOptionHasBeenSet(false),
    m_dataPointTooltipOptionHasBeenSet(false)
{
}

DashboardPublishOptions::DashboardPublishOptions(JsonView jsonValue) : 
    m_adHocFilteringOptionHasBeenSet(false),
    m_exportToCSVOptionHasBeenSet(false),
    m_sheetControlsOptionHasBeenSet(false),
    m_sheetLayoutElementMaximizationOptionHasBeenSet(false),
    m_visualMenuOptionHasBeenSet(false),
    m_visualAxisSortOptionHasBeenSet(false),
    m_exportWithHiddenFieldsOptionHasBeenSet(false),
    m_dataPointDrillUpDownOptionHasBeenSet(false),
    m_dataPointMenuLabelOptionHasBeenSet(false),
    m_dataPointTooltipOptionHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardPublishOptions& DashboardPublishOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdHocFilteringOption"))
  {
    m_adHocFilteringOption = jsonValue.GetObject("AdHocFilteringOption");

    m_adHocFilteringOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportToCSVOption"))
  {
    m_exportToCSVOption = jsonValue.GetObject("ExportToCSVOption");

    m_exportToCSVOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SheetControlsOption"))
  {
    m_sheetControlsOption = jsonValue.GetObject("SheetControlsOption");

    m_sheetControlsOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SheetLayoutElementMaximizationOption"))
  {
    m_sheetLayoutElementMaximizationOption = jsonValue.GetObject("SheetLayoutElementMaximizationOption");

    m_sheetLayoutElementMaximizationOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualMenuOption"))
  {
    m_visualMenuOption = jsonValue.GetObject("VisualMenuOption");

    m_visualMenuOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualAxisSortOption"))
  {
    m_visualAxisSortOption = jsonValue.GetObject("VisualAxisSortOption");

    m_visualAxisSortOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportWithHiddenFieldsOption"))
  {
    m_exportWithHiddenFieldsOption = jsonValue.GetObject("ExportWithHiddenFieldsOption");

    m_exportWithHiddenFieldsOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPointDrillUpDownOption"))
  {
    m_dataPointDrillUpDownOption = jsonValue.GetObject("DataPointDrillUpDownOption");

    m_dataPointDrillUpDownOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPointMenuLabelOption"))
  {
    m_dataPointMenuLabelOption = jsonValue.GetObject("DataPointMenuLabelOption");

    m_dataPointMenuLabelOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPointTooltipOption"))
  {
    m_dataPointTooltipOption = jsonValue.GetObject("DataPointTooltipOption");

    m_dataPointTooltipOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardPublishOptions::Jsonize() const
{
  JsonValue payload;

  if(m_adHocFilteringOptionHasBeenSet)
  {
   payload.WithObject("AdHocFilteringOption", m_adHocFilteringOption.Jsonize());

  }

  if(m_exportToCSVOptionHasBeenSet)
  {
   payload.WithObject("ExportToCSVOption", m_exportToCSVOption.Jsonize());

  }

  if(m_sheetControlsOptionHasBeenSet)
  {
   payload.WithObject("SheetControlsOption", m_sheetControlsOption.Jsonize());

  }

  if(m_sheetLayoutElementMaximizationOptionHasBeenSet)
  {
   payload.WithObject("SheetLayoutElementMaximizationOption", m_sheetLayoutElementMaximizationOption.Jsonize());

  }

  if(m_visualMenuOptionHasBeenSet)
  {
   payload.WithObject("VisualMenuOption", m_visualMenuOption.Jsonize());

  }

  if(m_visualAxisSortOptionHasBeenSet)
  {
   payload.WithObject("VisualAxisSortOption", m_visualAxisSortOption.Jsonize());

  }

  if(m_exportWithHiddenFieldsOptionHasBeenSet)
  {
   payload.WithObject("ExportWithHiddenFieldsOption", m_exportWithHiddenFieldsOption.Jsonize());

  }

  if(m_dataPointDrillUpDownOptionHasBeenSet)
  {
   payload.WithObject("DataPointDrillUpDownOption", m_dataPointDrillUpDownOption.Jsonize());

  }

  if(m_dataPointMenuLabelOptionHasBeenSet)
  {
   payload.WithObject("DataPointMenuLabelOption", m_dataPointMenuLabelOption.Jsonize());

  }

  if(m_dataPointTooltipOptionHasBeenSet)
  {
   payload.WithObject("DataPointTooltipOption", m_dataPointTooltipOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
