/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTablePaginatedReportOptions.h>
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

PivotTablePaginatedReportOptions::PivotTablePaginatedReportOptions() : 
    m_verticalOverflowVisibility(Visibility::NOT_SET),
    m_verticalOverflowVisibilityHasBeenSet(false),
    m_overflowColumnHeaderVisibility(Visibility::NOT_SET),
    m_overflowColumnHeaderVisibilityHasBeenSet(false)
{
}

PivotTablePaginatedReportOptions::PivotTablePaginatedReportOptions(JsonView jsonValue) : 
    m_verticalOverflowVisibility(Visibility::NOT_SET),
    m_verticalOverflowVisibilityHasBeenSet(false),
    m_overflowColumnHeaderVisibility(Visibility::NOT_SET),
    m_overflowColumnHeaderVisibilityHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTablePaginatedReportOptions& PivotTablePaginatedReportOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VerticalOverflowVisibility"))
  {
    m_verticalOverflowVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("VerticalOverflowVisibility"));

    m_verticalOverflowVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverflowColumnHeaderVisibility"))
  {
    m_overflowColumnHeaderVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("OverflowColumnHeaderVisibility"));

    m_overflowColumnHeaderVisibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTablePaginatedReportOptions::Jsonize() const
{
  JsonValue payload;

  if(m_verticalOverflowVisibilityHasBeenSet)
  {
   payload.WithString("VerticalOverflowVisibility", VisibilityMapper::GetNameForVisibility(m_verticalOverflowVisibility));
  }

  if(m_overflowColumnHeaderVisibilityHasBeenSet)
  {
   payload.WithString("OverflowColumnHeaderVisibility", VisibilityMapper::GetNameForVisibility(m_overflowColumnHeaderVisibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
