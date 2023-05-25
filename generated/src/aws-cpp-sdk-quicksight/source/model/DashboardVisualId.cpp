/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardVisualId.h>
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

DashboardVisualId::DashboardVisualId() : 
    m_dashboardIdHasBeenSet(false),
    m_sheetIdHasBeenSet(false),
    m_visualIdHasBeenSet(false)
{
}

DashboardVisualId::DashboardVisualId(JsonView jsonValue) : 
    m_dashboardIdHasBeenSet(false),
    m_sheetIdHasBeenSet(false),
    m_visualIdHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardVisualId& DashboardVisualId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");

    m_dashboardIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SheetId"))
  {
    m_sheetId = jsonValue.GetString("SheetId");

    m_sheetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualId"))
  {
    m_visualId = jsonValue.GetString("VisualId");

    m_visualIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardVisualId::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardIdHasBeenSet)
  {
   payload.WithString("DashboardId", m_dashboardId);

  }

  if(m_sheetIdHasBeenSet)
  {
   payload.WithString("SheetId", m_sheetId);

  }

  if(m_visualIdHasBeenSet)
  {
   payload.WithString("VisualId", m_visualId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
