/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardVisualResult.h>
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

DashboardVisualResult::DashboardVisualResult(JsonView jsonValue)
{
  *this = jsonValue;
}

DashboardVisualResult& DashboardVisualResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");
    m_dashboardIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DashboardName"))
  {
    m_dashboardName = jsonValue.GetString("DashboardName");
    m_dashboardNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SheetId"))
  {
    m_sheetId = jsonValue.GetString("SheetId");
    m_sheetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SheetName"))
  {
    m_sheetName = jsonValue.GetString("SheetName");
    m_sheetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisualId"))
  {
    m_visualId = jsonValue.GetString("VisualId");
    m_visualIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisualTitle"))
  {
    m_visualTitle = jsonValue.GetString("VisualTitle");
    m_visualTitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisualSubtitle"))
  {
    m_visualSubtitle = jsonValue.GetString("VisualSubtitle");
    m_visualSubtitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DashboardUrl"))
  {
    m_dashboardUrl = jsonValue.GetString("DashboardUrl");
    m_dashboardUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue DashboardVisualResult::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardIdHasBeenSet)
  {
   payload.WithString("DashboardId", m_dashboardId);

  }

  if(m_dashboardNameHasBeenSet)
  {
   payload.WithString("DashboardName", m_dashboardName);

  }

  if(m_sheetIdHasBeenSet)
  {
   payload.WithString("SheetId", m_sheetId);

  }

  if(m_sheetNameHasBeenSet)
  {
   payload.WithString("SheetName", m_sheetName);

  }

  if(m_visualIdHasBeenSet)
  {
   payload.WithString("VisualId", m_visualId);

  }

  if(m_visualTitleHasBeenSet)
  {
   payload.WithString("VisualTitle", m_visualTitle);

  }

  if(m_visualSubtitleHasBeenSet)
  {
   payload.WithString("VisualSubtitle", m_visualSubtitle);

  }

  if(m_dashboardUrlHasBeenSet)
  {
   payload.WithString("DashboardUrl", m_dashboardUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
