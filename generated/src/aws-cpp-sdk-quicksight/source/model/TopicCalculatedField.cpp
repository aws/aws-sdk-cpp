/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicCalculatedField.h>
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

TopicCalculatedField::TopicCalculatedField() : 
    m_calculatedFieldNameHasBeenSet(false),
    m_calculatedFieldDescriptionHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_calculatedFieldSynonymsHasBeenSet(false),
    m_isIncludedInTopic(false),
    m_isIncludedInTopicHasBeenSet(false),
    m_disableIndexing(false),
    m_disableIndexingHasBeenSet(false),
    m_columnDataRole(ColumnDataRole::NOT_SET),
    m_columnDataRoleHasBeenSet(false),
    m_timeGranularity(TopicTimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_defaultFormattingHasBeenSet(false),
    m_aggregation(DefaultAggregation::NOT_SET),
    m_aggregationHasBeenSet(false),
    m_comparativeOrderHasBeenSet(false),
    m_semanticTypeHasBeenSet(false),
    m_allowedAggregationsHasBeenSet(false),
    m_notAllowedAggregationsHasBeenSet(false),
    m_neverAggregateInFilter(false),
    m_neverAggregateInFilterHasBeenSet(false),
    m_cellValueSynonymsHasBeenSet(false),
    m_nonAdditive(false),
    m_nonAdditiveHasBeenSet(false)
{
}

TopicCalculatedField::TopicCalculatedField(JsonView jsonValue) : 
    m_calculatedFieldNameHasBeenSet(false),
    m_calculatedFieldDescriptionHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_calculatedFieldSynonymsHasBeenSet(false),
    m_isIncludedInTopic(false),
    m_isIncludedInTopicHasBeenSet(false),
    m_disableIndexing(false),
    m_disableIndexingHasBeenSet(false),
    m_columnDataRole(ColumnDataRole::NOT_SET),
    m_columnDataRoleHasBeenSet(false),
    m_timeGranularity(TopicTimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_defaultFormattingHasBeenSet(false),
    m_aggregation(DefaultAggregation::NOT_SET),
    m_aggregationHasBeenSet(false),
    m_comparativeOrderHasBeenSet(false),
    m_semanticTypeHasBeenSet(false),
    m_allowedAggregationsHasBeenSet(false),
    m_notAllowedAggregationsHasBeenSet(false),
    m_neverAggregateInFilter(false),
    m_neverAggregateInFilterHasBeenSet(false),
    m_cellValueSynonymsHasBeenSet(false),
    m_nonAdditive(false),
    m_nonAdditiveHasBeenSet(false)
{
  *this = jsonValue;
}

TopicCalculatedField& TopicCalculatedField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CalculatedFieldName"))
  {
    m_calculatedFieldName = jsonValue.GetString("CalculatedFieldName");

    m_calculatedFieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CalculatedFieldDescription"))
  {
    m_calculatedFieldDescription = jsonValue.GetString("CalculatedFieldDescription");

    m_calculatedFieldDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CalculatedFieldSynonyms"))
  {
    Aws::Utils::Array<JsonView> calculatedFieldSynonymsJsonList = jsonValue.GetArray("CalculatedFieldSynonyms");
    for(unsigned calculatedFieldSynonymsIndex = 0; calculatedFieldSynonymsIndex < calculatedFieldSynonymsJsonList.GetLength(); ++calculatedFieldSynonymsIndex)
    {
      m_calculatedFieldSynonyms.push_back(calculatedFieldSynonymsJsonList[calculatedFieldSynonymsIndex].AsString());
    }
    m_calculatedFieldSynonymsHasBeenSet = true;
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

  if(jsonValue.ValueExists("ColumnDataRole"))
  {
    m_columnDataRole = ColumnDataRoleMapper::GetColumnDataRoleForName(jsonValue.GetString("ColumnDataRole"));

    m_columnDataRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TopicTimeGranularityMapper::GetTopicTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultFormatting"))
  {
    m_defaultFormatting = jsonValue.GetObject("DefaultFormatting");

    m_defaultFormattingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregation"))
  {
    m_aggregation = DefaultAggregationMapper::GetDefaultAggregationForName(jsonValue.GetString("Aggregation"));

    m_aggregationHasBeenSet = true;
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

JsonValue TopicCalculatedField::Jsonize() const
{
  JsonValue payload;

  if(m_calculatedFieldNameHasBeenSet)
  {
   payload.WithString("CalculatedFieldName", m_calculatedFieldName);

  }

  if(m_calculatedFieldDescriptionHasBeenSet)
  {
   payload.WithString("CalculatedFieldDescription", m_calculatedFieldDescription);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_calculatedFieldSynonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> calculatedFieldSynonymsJsonList(m_calculatedFieldSynonyms.size());
   for(unsigned calculatedFieldSynonymsIndex = 0; calculatedFieldSynonymsIndex < calculatedFieldSynonymsJsonList.GetLength(); ++calculatedFieldSynonymsIndex)
   {
     calculatedFieldSynonymsJsonList[calculatedFieldSynonymsIndex].AsString(m_calculatedFieldSynonyms[calculatedFieldSynonymsIndex]);
   }
   payload.WithArray("CalculatedFieldSynonyms", std::move(calculatedFieldSynonymsJsonList));

  }

  if(m_isIncludedInTopicHasBeenSet)
  {
   payload.WithBool("IsIncludedInTopic", m_isIncludedInTopic);

  }

  if(m_disableIndexingHasBeenSet)
  {
   payload.WithBool("DisableIndexing", m_disableIndexing);

  }

  if(m_columnDataRoleHasBeenSet)
  {
   payload.WithString("ColumnDataRole", ColumnDataRoleMapper::GetNameForColumnDataRole(m_columnDataRole));
  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TopicTimeGranularityMapper::GetNameForTopicTimeGranularity(m_timeGranularity));
  }

  if(m_defaultFormattingHasBeenSet)
  {
   payload.WithObject("DefaultFormatting", m_defaultFormatting.Jsonize());

  }

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("Aggregation", DefaultAggregationMapper::GetNameForDefaultAggregation(m_aggregation));
  }

  if(m_comparativeOrderHasBeenSet)
  {
   payload.WithObject("ComparativeOrder", m_comparativeOrder.Jsonize());

  }

  if(m_semanticTypeHasBeenSet)
  {
   payload.WithObject("SemanticType", m_semanticType.Jsonize());

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
