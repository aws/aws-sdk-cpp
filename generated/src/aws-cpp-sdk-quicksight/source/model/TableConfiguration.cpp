/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableConfiguration.h>
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

TableConfiguration::TableConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_tableOptionsHasBeenSet(false),
    m_totalOptionsHasBeenSet(false),
    m_fieldOptionsHasBeenSet(false),
    m_paginatedReportOptionsHasBeenSet(false),
    m_tableInlineVisualizationsHasBeenSet(false),
    m_interactionsHasBeenSet(false)
{
}

TableConfiguration::TableConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_tableOptionsHasBeenSet(false),
    m_totalOptionsHasBeenSet(false),
    m_fieldOptionsHasBeenSet(false),
    m_paginatedReportOptionsHasBeenSet(false),
    m_tableInlineVisualizationsHasBeenSet(false),
    m_interactionsHasBeenSet(false)
{
  *this = jsonValue;
}

TableConfiguration& TableConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("TableInlineVisualizations"))
  {
    Aws::Utils::Array<JsonView> tableInlineVisualizationsJsonList = jsonValue.GetArray("TableInlineVisualizations");
    for(unsigned tableInlineVisualizationsIndex = 0; tableInlineVisualizationsIndex < tableInlineVisualizationsJsonList.GetLength(); ++tableInlineVisualizationsIndex)
    {
      m_tableInlineVisualizations.push_back(tableInlineVisualizationsJsonList[tableInlineVisualizationsIndex].AsObject());
    }
    m_tableInlineVisualizationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");

    m_interactionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TableConfiguration::Jsonize() const
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

  if(m_tableInlineVisualizationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tableInlineVisualizationsJsonList(m_tableInlineVisualizations.size());
   for(unsigned tableInlineVisualizationsIndex = 0; tableInlineVisualizationsIndex < tableInlineVisualizationsJsonList.GetLength(); ++tableInlineVisualizationsIndex)
   {
     tableInlineVisualizationsJsonList[tableInlineVisualizationsIndex].AsObject(m_tableInlineVisualizations[tableInlineVisualizationsIndex].Jsonize());
   }
   payload.WithArray("TableInlineVisualizations", std::move(tableInlineVisualizationsJsonList));

  }

  if(m_interactionsHasBeenSet)
  {
   payload.WithObject("Interactions", m_interactions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
