/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableConfiguration.h>
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

PivotTableConfiguration::PivotTableConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_tableOptionsHasBeenSet(false),
    m_totalOptionsHasBeenSet(false),
    m_fieldOptionsHasBeenSet(false),
    m_paginatedReportOptionsHasBeenSet(false)
{
}

PivotTableConfiguration::PivotTableConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_tableOptionsHasBeenSet(false),
    m_totalOptionsHasBeenSet(false),
    m_fieldOptionsHasBeenSet(false),
    m_paginatedReportOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableConfiguration& PivotTableConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("TableOptions"))
  {
    m_tableOptions = jsonValue.GetObject("TableOptions");

    m_tableOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalOptions"))
  {
    m_totalOptions = jsonValue.GetObject("TotalOptions");

    m_totalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldOptions"))
  {
    m_fieldOptions = jsonValue.GetObject("FieldOptions");

    m_fieldOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaginatedReportOptions"))
  {
    m_paginatedReportOptions = jsonValue.GetObject("PaginatedReportOptions");

    m_paginatedReportOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableConfiguration::Jsonize() const
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

  if(m_tableOptionsHasBeenSet)
  {
   payload.WithObject("TableOptions", m_tableOptions.Jsonize());

  }

  if(m_totalOptionsHasBeenSet)
  {
   payload.WithObject("TotalOptions", m_totalOptions.Jsonize());

  }

  if(m_fieldOptionsHasBeenSet)
  {
   payload.WithObject("FieldOptions", m_fieldOptions.Jsonize());

  }

  if(m_paginatedReportOptionsHasBeenSet)
  {
   payload.WithObject("PaginatedReportOptions", m_paginatedReportOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
