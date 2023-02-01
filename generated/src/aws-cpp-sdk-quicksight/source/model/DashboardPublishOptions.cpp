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
    m_visualPublishOptionsHasBeenSet(false)
{
}

DashboardPublishOptions::DashboardPublishOptions(JsonView jsonValue) : 
    m_adHocFilteringOptionHasBeenSet(false),
    m_exportToCSVOptionHasBeenSet(false),
    m_sheetControlsOptionHasBeenSet(false),
    m_visualPublishOptionsHasBeenSet(false)
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

  if(jsonValue.ValueExists("VisualPublishOptions"))
  {
    m_visualPublishOptions = jsonValue.GetObject("VisualPublishOptions");

    m_visualPublishOptionsHasBeenSet = true;
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

  if(m_visualPublishOptionsHasBeenSet)
  {
   payload.WithObject("VisualPublishOptions", m_visualPublishOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
