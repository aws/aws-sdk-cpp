﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicColumn.h>
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

TopicColumn::TopicColumn(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicColumn& TopicColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");
    m_columnNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnFriendlyName"))
  {
    m_columnFriendlyName = jsonValue.GetString("ColumnFriendlyName");
    m_columnFriendlyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnDescription"))
  {
    m_columnDescription = jsonValue.GetString("ColumnDescription");
    m_columnDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnSynonyms"))
  {
    Aws::Utils::Array<JsonView> columnSynonymsJsonList = jsonValue.GetArray("ColumnSynonyms");
    for(unsigned columnSynonymsIndex = 0; columnSynonymsIndex < columnSynonymsJsonList.GetLength(); ++columnSynonymsIndex)
    {
      m_columnSynonyms.push_back(columnSynonymsJsonList[columnSynonymsIndex].AsString());
    }
    m_columnSynonymsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnDataRole"))
  {
    m_columnDataRole = ColumnDataRoleMapper::GetColumnDataRoleForName(jsonValue.GetString("ColumnDataRole"));
    m_columnDataRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Aggregation"))
  {
    m_aggregation = DefaultAggregationMapper::GetDefaultAggregationForName(jsonValue.GetString("Aggregation"));
    m_aggregationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsIncludedInTopic"))
  {
    m_isIncludedInTopic = jsonValue.GetBool("IsIncludedInTopic");
    m_isIncludedInTopicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisableIndexing"))
  {
    m_disableIndexing = jsonValue.GetBool("DisableIndexing");
    m_disableIndexingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComparativeOrder"))
  {
    m_comparativeOrder = jsonValue.GetObject("ComparativeOrder");
    m_comparativeOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SemanticType"))
  {
    m_semanticType = jsonValue.GetObject("SemanticType");
    m_semanticTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TopicTimeGranularityMapper::GetTopicTimeGranularityForName(jsonValue.GetString("TimeGranularity"));
    m_timeGranularityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowedAggregations"))
  {
    Aws::Utils::Array<JsonView> allowedAggregationsJsonList = jsonValue.GetArray("AllowedAggregations");
    for(unsigned allowedAggregationsIndex = 0; allowedAggregationsIndex < allowedAggregationsJsonList.GetLength(); ++allowedAggregationsIndex)
    {
      m_allowedAggregations.push_back(AuthorSpecifiedAggregationMapper::GetAuthorSpecifiedAggregationForName(allowedAggregationsJsonList[allowedAggregationsIndex].AsString()));
    }
    m_allowedAggregationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotAllowedAggregations"))
  {
    Aws::Utils::Array<JsonView> notAllowedAggregationsJsonList = jsonValue.GetArray("NotAllowedAggregations");
    for(unsigned notAllowedAggregationsIndex = 0; notAllowedAggregationsIndex < notAllowedAggregationsJsonList.GetLength(); ++notAllowedAggregationsIndex)
    {
      m_notAllowedAggregations.push_back(AuthorSpecifiedAggregationMapper::GetAuthorSpecifiedAggregationForName(notAllowedAggregationsJsonList[notAllowedAggregationsIndex].AsString()));
    }
    m_notAllowedAggregationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultFormatting"))
  {
    m_defaultFormatting = jsonValue.GetObject("DefaultFormatting");
    m_defaultFormattingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NeverAggregateInFilter"))
  {
    m_neverAggregateInFilter = jsonValue.GetBool("NeverAggregateInFilter");
    m_neverAggregateInFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CellValueSynonyms"))
  {
    Aws::Utils::Array<JsonView> cellValueSynonymsJsonList = jsonValue.GetArray("CellValueSynonyms");
    for(unsigned cellValueSynonymsIndex = 0; cellValueSynonymsIndex < cellValueSynonymsJsonList.GetLength(); ++cellValueSynonymsIndex)
    {
      m_cellValueSynonyms.push_back(cellValueSynonymsJsonList[cellValueSynonymsIndex].AsObject());
    }
    m_cellValueSynonymsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NonAdditive"))
  {
    m_nonAdditive = jsonValue.GetBool("NonAdditive");
    m_nonAdditiveHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicColumn::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_columnFriendlyNameHasBeenSet)
  {
   payload.WithString("ColumnFriendlyName", m_columnFriendlyName);

  }

  if(m_columnDescriptionHasBeenSet)
  {
   payload.WithString("ColumnDescription", m_columnDescription);

  }

  if(m_columnSynonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnSynonymsJsonList(m_columnSynonyms.size());
   for(unsigned columnSynonymsIndex = 0; columnSynonymsIndex < columnSynonymsJsonList.GetLength(); ++columnSynonymsIndex)
   {
     columnSynonymsJsonList[columnSynonymsIndex].AsString(m_columnSynonyms[columnSynonymsIndex]);
   }
   payload.WithArray("ColumnSynonyms", std::move(columnSynonymsJsonList));

  }

  if(m_columnDataRoleHasBeenSet)
  {
   payload.WithString("ColumnDataRole", ColumnDataRoleMapper::GetNameForColumnDataRole(m_columnDataRole));
  }

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("Aggregation", DefaultAggregationMapper::GetNameForDefaultAggregation(m_aggregation));
  }

  if(m_isIncludedInTopicHasBeenSet)
  {
   payload.WithBool("IsIncludedInTopic", m_isIncludedInTopic);

  }

  if(m_disableIndexingHasBeenSet)
  {
   payload.WithBool("DisableIndexing", m_disableIndexing);

  }

  if(m_comparativeOrderHasBeenSet)
  {
   payload.WithObject("ComparativeOrder", m_comparativeOrder.Jsonize());

  }

  if(m_semanticTypeHasBeenSet)
  {
   payload.WithObject("SemanticType", m_semanticType.Jsonize());

  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TopicTimeGranularityMapper::GetNameForTopicTimeGranularity(m_timeGranularity));
  }

  if(m_allowedAggregationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedAggregationsJsonList(m_allowedAggregations.size());
   for(unsigned allowedAggregationsIndex = 0; allowedAggregationsIndex < allowedAggregationsJsonList.GetLength(); ++allowedAggregationsIndex)
   {
     allowedAggregationsJsonList[allowedAggregationsIndex].AsString(AuthorSpecifiedAggregationMapper::GetNameForAuthorSpecifiedAggregation(m_allowedAggregations[allowedAggregationsIndex]));
   }
   payload.WithArray("AllowedAggregations", std::move(allowedAggregationsJsonList));

  }

  if(m_notAllowedAggregationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notAllowedAggregationsJsonList(m_notAllowedAggregations.size());
   for(unsigned notAllowedAggregationsIndex = 0; notAllowedAggregationsIndex < notAllowedAggregationsJsonList.GetLength(); ++notAllowedAggregationsIndex)
   {
     notAllowedAggregationsJsonList[notAllowedAggregationsIndex].AsString(AuthorSpecifiedAggregationMapper::GetNameForAuthorSpecifiedAggregation(m_notAllowedAggregations[notAllowedAggregationsIndex]));
   }
   payload.WithArray("NotAllowedAggregations", std::move(notAllowedAggregationsJsonList));

  }

  if(m_defaultFormattingHasBeenSet)
  {
   payload.WithObject("DefaultFormatting", m_defaultFormatting.Jsonize());

  }

  if(m_neverAggregateInFilterHasBeenSet)
  {
   payload.WithBool("NeverAggregateInFilter", m_neverAggregateInFilter);

  }

  if(m_cellValueSynonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cellValueSynonymsJsonList(m_cellValueSynonyms.size());
   for(unsigned cellValueSynonymsIndex = 0; cellValueSynonymsIndex < cellValueSynonymsJsonList.GetLength(); ++cellValueSynonymsIndex)
   {
     cellValueSynonymsJsonList[cellValueSynonymsIndex].AsObject(m_cellValueSynonyms[cellValueSynonymsIndex].Jsonize());
   }
   payload.WithArray("CellValueSynonyms", std::move(cellValueSynonymsJsonList));

  }

  if(m_nonAdditiveHasBeenSet)
  {
   payload.WithBool("NonAdditive", m_nonAdditive);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
