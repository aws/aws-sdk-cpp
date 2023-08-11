/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnDataRole.h>
#include <aws/quicksight/model/TopicTimeGranularity.h>
#include <aws/quicksight/model/DefaultFormatting.h>
#include <aws/quicksight/model/DefaultAggregation.h>
#include <aws/quicksight/model/ComparativeOrder.h>
#include <aws/quicksight/model/SemanticType.h>
#include <aws/quicksight/model/AuthorSpecifiedAggregation.h>
#include <aws/quicksight/model/CellValueSynonym.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that represents a calculated field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicCalculatedField">AWS
   * API Reference</a></p>
   */
  class TopicCalculatedField
  {
  public:
    AWS_QUICKSIGHT_API TopicCalculatedField();
    AWS_QUICKSIGHT_API TopicCalculatedField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicCalculatedField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The calculated field name.</p>
     */
    inline const Aws::String& GetCalculatedFieldName() const{ return m_calculatedFieldName; }

    /**
     * <p>The calculated field name.</p>
     */
    inline bool CalculatedFieldNameHasBeenSet() const { return m_calculatedFieldNameHasBeenSet; }

    /**
     * <p>The calculated field name.</p>
     */
    inline void SetCalculatedFieldName(const Aws::String& value) { m_calculatedFieldNameHasBeenSet = true; m_calculatedFieldName = value; }

    /**
     * <p>The calculated field name.</p>
     */
    inline void SetCalculatedFieldName(Aws::String&& value) { m_calculatedFieldNameHasBeenSet = true; m_calculatedFieldName = std::move(value); }

    /**
     * <p>The calculated field name.</p>
     */
    inline void SetCalculatedFieldName(const char* value) { m_calculatedFieldNameHasBeenSet = true; m_calculatedFieldName.assign(value); }

    /**
     * <p>The calculated field name.</p>
     */
    inline TopicCalculatedField& WithCalculatedFieldName(const Aws::String& value) { SetCalculatedFieldName(value); return *this;}

    /**
     * <p>The calculated field name.</p>
     */
    inline TopicCalculatedField& WithCalculatedFieldName(Aws::String&& value) { SetCalculatedFieldName(std::move(value)); return *this;}

    /**
     * <p>The calculated field name.</p>
     */
    inline TopicCalculatedField& WithCalculatedFieldName(const char* value) { SetCalculatedFieldName(value); return *this;}


    /**
     * <p>The calculated field description.</p>
     */
    inline const Aws::String& GetCalculatedFieldDescription() const{ return m_calculatedFieldDescription; }

    /**
     * <p>The calculated field description.</p>
     */
    inline bool CalculatedFieldDescriptionHasBeenSet() const { return m_calculatedFieldDescriptionHasBeenSet; }

    /**
     * <p>The calculated field description.</p>
     */
    inline void SetCalculatedFieldDescription(const Aws::String& value) { m_calculatedFieldDescriptionHasBeenSet = true; m_calculatedFieldDescription = value; }

    /**
     * <p>The calculated field description.</p>
     */
    inline void SetCalculatedFieldDescription(Aws::String&& value) { m_calculatedFieldDescriptionHasBeenSet = true; m_calculatedFieldDescription = std::move(value); }

    /**
     * <p>The calculated field description.</p>
     */
    inline void SetCalculatedFieldDescription(const char* value) { m_calculatedFieldDescriptionHasBeenSet = true; m_calculatedFieldDescription.assign(value); }

    /**
     * <p>The calculated field description.</p>
     */
    inline TopicCalculatedField& WithCalculatedFieldDescription(const Aws::String& value) { SetCalculatedFieldDescription(value); return *this;}

    /**
     * <p>The calculated field description.</p>
     */
    inline TopicCalculatedField& WithCalculatedFieldDescription(Aws::String&& value) { SetCalculatedFieldDescription(std::move(value)); return *this;}

    /**
     * <p>The calculated field description.</p>
     */
    inline TopicCalculatedField& WithCalculatedFieldDescription(const char* value) { SetCalculatedFieldDescription(value); return *this;}


    /**
     * <p>The calculated field expression.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The calculated field expression.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The calculated field expression.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The calculated field expression.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The calculated field expression.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The calculated field expression.</p>
     */
    inline TopicCalculatedField& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The calculated field expression.</p>
     */
    inline TopicCalculatedField& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The calculated field expression.</p>
     */
    inline TopicCalculatedField& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCalculatedFieldSynonyms() const{ return m_calculatedFieldSynonyms; }

    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline bool CalculatedFieldSynonymsHasBeenSet() const { return m_calculatedFieldSynonymsHasBeenSet; }

    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline void SetCalculatedFieldSynonyms(const Aws::Vector<Aws::String>& value) { m_calculatedFieldSynonymsHasBeenSet = true; m_calculatedFieldSynonyms = value; }

    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline void SetCalculatedFieldSynonyms(Aws::Vector<Aws::String>&& value) { m_calculatedFieldSynonymsHasBeenSet = true; m_calculatedFieldSynonyms = std::move(value); }

    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline TopicCalculatedField& WithCalculatedFieldSynonyms(const Aws::Vector<Aws::String>& value) { SetCalculatedFieldSynonyms(value); return *this;}

    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline TopicCalculatedField& WithCalculatedFieldSynonyms(Aws::Vector<Aws::String>&& value) { SetCalculatedFieldSynonyms(std::move(value)); return *this;}

    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline TopicCalculatedField& AddCalculatedFieldSynonyms(const Aws::String& value) { m_calculatedFieldSynonymsHasBeenSet = true; m_calculatedFieldSynonyms.push_back(value); return *this; }

    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline TopicCalculatedField& AddCalculatedFieldSynonyms(Aws::String&& value) { m_calculatedFieldSynonymsHasBeenSet = true; m_calculatedFieldSynonyms.push_back(std::move(value)); return *this; }

    /**
     * <p>The other names or aliases for the calculated field.</p>
     */
    inline TopicCalculatedField& AddCalculatedFieldSynonyms(const char* value) { m_calculatedFieldSynonymsHasBeenSet = true; m_calculatedFieldSynonyms.push_back(value); return *this; }


    /**
     * <p>A boolean value that indicates if a calculated field is included in the
     * topic.</p>
     */
    inline bool GetIsIncludedInTopic() const{ return m_isIncludedInTopic; }

    /**
     * <p>A boolean value that indicates if a calculated field is included in the
     * topic.</p>
     */
    inline bool IsIncludedInTopicHasBeenSet() const { return m_isIncludedInTopicHasBeenSet; }

    /**
     * <p>A boolean value that indicates if a calculated field is included in the
     * topic.</p>
     */
    inline void SetIsIncludedInTopic(bool value) { m_isIncludedInTopicHasBeenSet = true; m_isIncludedInTopic = value; }

    /**
     * <p>A boolean value that indicates if a calculated field is included in the
     * topic.</p>
     */
    inline TopicCalculatedField& WithIsIncludedInTopic(bool value) { SetIsIncludedInTopic(value); return *this;}


    /**
     * <p>A Boolean value that indicates if a calculated field is visible in the
     * autocomplete.</p>
     */
    inline bool GetDisableIndexing() const{ return m_disableIndexing; }

    /**
     * <p>A Boolean value that indicates if a calculated field is visible in the
     * autocomplete.</p>
     */
    inline bool DisableIndexingHasBeenSet() const { return m_disableIndexingHasBeenSet; }

    /**
     * <p>A Boolean value that indicates if a calculated field is visible in the
     * autocomplete.</p>
     */
    inline void SetDisableIndexing(bool value) { m_disableIndexingHasBeenSet = true; m_disableIndexing = value; }

    /**
     * <p>A Boolean value that indicates if a calculated field is visible in the
     * autocomplete.</p>
     */
    inline TopicCalculatedField& WithDisableIndexing(bool value) { SetDisableIndexing(value); return *this;}


    /**
     * <p>The column data role for a calculated field. Valid values for this structure
     * are <code>DIMENSION</code> and <code>MEASURE</code>.</p>
     */
    inline const ColumnDataRole& GetColumnDataRole() const{ return m_columnDataRole; }

    /**
     * <p>The column data role for a calculated field. Valid values for this structure
     * are <code>DIMENSION</code> and <code>MEASURE</code>.</p>
     */
    inline bool ColumnDataRoleHasBeenSet() const { return m_columnDataRoleHasBeenSet; }

    /**
     * <p>The column data role for a calculated field. Valid values for this structure
     * are <code>DIMENSION</code> and <code>MEASURE</code>.</p>
     */
    inline void SetColumnDataRole(const ColumnDataRole& value) { m_columnDataRoleHasBeenSet = true; m_columnDataRole = value; }

    /**
     * <p>The column data role for a calculated field. Valid values for this structure
     * are <code>DIMENSION</code> and <code>MEASURE</code>.</p>
     */
    inline void SetColumnDataRole(ColumnDataRole&& value) { m_columnDataRoleHasBeenSet = true; m_columnDataRole = std::move(value); }

    /**
     * <p>The column data role for a calculated field. Valid values for this structure
     * are <code>DIMENSION</code> and <code>MEASURE</code>.</p>
     */
    inline TopicCalculatedField& WithColumnDataRole(const ColumnDataRole& value) { SetColumnDataRole(value); return *this;}

    /**
     * <p>The column data role for a calculated field. Valid values for this structure
     * are <code>DIMENSION</code> and <code>MEASURE</code>.</p>
     */
    inline TopicCalculatedField& WithColumnDataRole(ColumnDataRole&& value) { SetColumnDataRole(std::move(value)); return *this;}


    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TopicTimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline void SetTimeGranularity(const TopicTimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline void SetTimeGranularity(TopicTimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TopicCalculatedField& WithTimeGranularity(const TopicTimeGranularity& value) { SetTimeGranularity(value); return *this;}

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TopicCalculatedField& WithTimeGranularity(TopicTimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}


    /**
     * <p>The default formatting definition.</p>
     */
    inline const DefaultFormatting& GetDefaultFormatting() const{ return m_defaultFormatting; }

    /**
     * <p>The default formatting definition.</p>
     */
    inline bool DefaultFormattingHasBeenSet() const { return m_defaultFormattingHasBeenSet; }

    /**
     * <p>The default formatting definition.</p>
     */
    inline void SetDefaultFormatting(const DefaultFormatting& value) { m_defaultFormattingHasBeenSet = true; m_defaultFormatting = value; }

    /**
     * <p>The default formatting definition.</p>
     */
    inline void SetDefaultFormatting(DefaultFormatting&& value) { m_defaultFormattingHasBeenSet = true; m_defaultFormatting = std::move(value); }

    /**
     * <p>The default formatting definition.</p>
     */
    inline TopicCalculatedField& WithDefaultFormatting(const DefaultFormatting& value) { SetDefaultFormatting(value); return *this;}

    /**
     * <p>The default formatting definition.</p>
     */
    inline TopicCalculatedField& WithDefaultFormatting(DefaultFormatting&& value) { SetDefaultFormatting(std::move(value)); return *this;}


    /**
     * <p>The default aggregation. Valid values for this structure are
     * <code>SUM</code>, <code>MAX</code>, <code>MIN</code>, <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, and <code>AVERAGE</code>.</p>
     */
    inline const DefaultAggregation& GetAggregation() const{ return m_aggregation; }

    /**
     * <p>The default aggregation. Valid values for this structure are
     * <code>SUM</code>, <code>MAX</code>, <code>MIN</code>, <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, and <code>AVERAGE</code>.</p>
     */
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }

    /**
     * <p>The default aggregation. Valid values for this structure are
     * <code>SUM</code>, <code>MAX</code>, <code>MIN</code>, <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, and <code>AVERAGE</code>.</p>
     */
    inline void SetAggregation(const DefaultAggregation& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }

    /**
     * <p>The default aggregation. Valid values for this structure are
     * <code>SUM</code>, <code>MAX</code>, <code>MIN</code>, <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, and <code>AVERAGE</code>.</p>
     */
    inline void SetAggregation(DefaultAggregation&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }

    /**
     * <p>The default aggregation. Valid values for this structure are
     * <code>SUM</code>, <code>MAX</code>, <code>MIN</code>, <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, and <code>AVERAGE</code>.</p>
     */
    inline TopicCalculatedField& WithAggregation(const DefaultAggregation& value) { SetAggregation(value); return *this;}

    /**
     * <p>The default aggregation. Valid values for this structure are
     * <code>SUM</code>, <code>MAX</code>, <code>MIN</code>, <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, and <code>AVERAGE</code>.</p>
     */
    inline TopicCalculatedField& WithAggregation(DefaultAggregation&& value) { SetAggregation(std::move(value)); return *this;}


    /**
     * <p>The order in which data is displayed for the calculated field when it's used
     * in a comparative context.</p>
     */
    inline const ComparativeOrder& GetComparativeOrder() const{ return m_comparativeOrder; }

    /**
     * <p>The order in which data is displayed for the calculated field when it's used
     * in a comparative context.</p>
     */
    inline bool ComparativeOrderHasBeenSet() const { return m_comparativeOrderHasBeenSet; }

    /**
     * <p>The order in which data is displayed for the calculated field when it's used
     * in a comparative context.</p>
     */
    inline void SetComparativeOrder(const ComparativeOrder& value) { m_comparativeOrderHasBeenSet = true; m_comparativeOrder = value; }

    /**
     * <p>The order in which data is displayed for the calculated field when it's used
     * in a comparative context.</p>
     */
    inline void SetComparativeOrder(ComparativeOrder&& value) { m_comparativeOrderHasBeenSet = true; m_comparativeOrder = std::move(value); }

    /**
     * <p>The order in which data is displayed for the calculated field when it's used
     * in a comparative context.</p>
     */
    inline TopicCalculatedField& WithComparativeOrder(const ComparativeOrder& value) { SetComparativeOrder(value); return *this;}

    /**
     * <p>The order in which data is displayed for the calculated field when it's used
     * in a comparative context.</p>
     */
    inline TopicCalculatedField& WithComparativeOrder(ComparativeOrder&& value) { SetComparativeOrder(std::move(value)); return *this;}


    /**
     * <p>The semantic type.</p>
     */
    inline const SemanticType& GetSemanticType() const{ return m_semanticType; }

    /**
     * <p>The semantic type.</p>
     */
    inline bool SemanticTypeHasBeenSet() const { return m_semanticTypeHasBeenSet; }

    /**
     * <p>The semantic type.</p>
     */
    inline void SetSemanticType(const SemanticType& value) { m_semanticTypeHasBeenSet = true; m_semanticType = value; }

    /**
     * <p>The semantic type.</p>
     */
    inline void SetSemanticType(SemanticType&& value) { m_semanticTypeHasBeenSet = true; m_semanticType = std::move(value); }

    /**
     * <p>The semantic type.</p>
     */
    inline TopicCalculatedField& WithSemanticType(const SemanticType& value) { SetSemanticType(value); return *this;}

    /**
     * <p>The semantic type.</p>
     */
    inline TopicCalculatedField& WithSemanticType(SemanticType&& value) { SetSemanticType(std::move(value)); return *this;}


    /**
     * <p>The list of aggregation types that are allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline const Aws::Vector<AuthorSpecifiedAggregation>& GetAllowedAggregations() const{ return m_allowedAggregations; }

    /**
     * <p>The list of aggregation types that are allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline bool AllowedAggregationsHasBeenSet() const { return m_allowedAggregationsHasBeenSet; }

    /**
     * <p>The list of aggregation types that are allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline void SetAllowedAggregations(const Aws::Vector<AuthorSpecifiedAggregation>& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations = value; }

    /**
     * <p>The list of aggregation types that are allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline void SetAllowedAggregations(Aws::Vector<AuthorSpecifiedAggregation>&& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations = std::move(value); }

    /**
     * <p>The list of aggregation types that are allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline TopicCalculatedField& WithAllowedAggregations(const Aws::Vector<AuthorSpecifiedAggregation>& value) { SetAllowedAggregations(value); return *this;}

    /**
     * <p>The list of aggregation types that are allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline TopicCalculatedField& WithAllowedAggregations(Aws::Vector<AuthorSpecifiedAggregation>&& value) { SetAllowedAggregations(std::move(value)); return *this;}

    /**
     * <p>The list of aggregation types that are allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline TopicCalculatedField& AddAllowedAggregations(const AuthorSpecifiedAggregation& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations.push_back(value); return *this; }

    /**
     * <p>The list of aggregation types that are allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline TopicCalculatedField& AddAllowedAggregations(AuthorSpecifiedAggregation&& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of aggregation types that are not allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline const Aws::Vector<AuthorSpecifiedAggregation>& GetNotAllowedAggregations() const{ return m_notAllowedAggregations; }

    /**
     * <p>The list of aggregation types that are not allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline bool NotAllowedAggregationsHasBeenSet() const { return m_notAllowedAggregationsHasBeenSet; }

    /**
     * <p>The list of aggregation types that are not allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline void SetNotAllowedAggregations(const Aws::Vector<AuthorSpecifiedAggregation>& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations = value; }

    /**
     * <p>The list of aggregation types that are not allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline void SetNotAllowedAggregations(Aws::Vector<AuthorSpecifiedAggregation>&& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations = std::move(value); }

    /**
     * <p>The list of aggregation types that are not allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline TopicCalculatedField& WithNotAllowedAggregations(const Aws::Vector<AuthorSpecifiedAggregation>& value) { SetNotAllowedAggregations(value); return *this;}

    /**
     * <p>The list of aggregation types that are not allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline TopicCalculatedField& WithNotAllowedAggregations(Aws::Vector<AuthorSpecifiedAggregation>&& value) { SetNotAllowedAggregations(std::move(value)); return *this;}

    /**
     * <p>The list of aggregation types that are not allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline TopicCalculatedField& AddNotAllowedAggregations(const AuthorSpecifiedAggregation& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations.push_back(value); return *this; }

    /**
     * <p>The list of aggregation types that are not allowed for the calculated field.
     * Valid values for this structure are <code>COUNT</code>,
     * <code>DISTINCT_COUNT</code>, <code>MIN</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>SUM</code>, <code>AVERAGE</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>, and
     * <code>PERCENTILE</code>.</p>
     */
    inline TopicCalculatedField& AddNotAllowedAggregations(AuthorSpecifiedAggregation&& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations.push_back(std::move(value)); return *this; }


    /**
     * <p>A Boolean value that indicates whether to never aggregate calculated field in
     * filters.</p>
     */
    inline bool GetNeverAggregateInFilter() const{ return m_neverAggregateInFilter; }

    /**
     * <p>A Boolean value that indicates whether to never aggregate calculated field in
     * filters.</p>
     */
    inline bool NeverAggregateInFilterHasBeenSet() const { return m_neverAggregateInFilterHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether to never aggregate calculated field in
     * filters.</p>
     */
    inline void SetNeverAggregateInFilter(bool value) { m_neverAggregateInFilterHasBeenSet = true; m_neverAggregateInFilter = value; }

    /**
     * <p>A Boolean value that indicates whether to never aggregate calculated field in
     * filters.</p>
     */
    inline TopicCalculatedField& WithNeverAggregateInFilter(bool value) { SetNeverAggregateInFilter(value); return *this;}


    /**
     * <p>The other names or aliases for the calculated field cell value.</p>
     */
    inline const Aws::Vector<CellValueSynonym>& GetCellValueSynonyms() const{ return m_cellValueSynonyms; }

    /**
     * <p>The other names or aliases for the calculated field cell value.</p>
     */
    inline bool CellValueSynonymsHasBeenSet() const { return m_cellValueSynonymsHasBeenSet; }

    /**
     * <p>The other names or aliases for the calculated field cell value.</p>
     */
    inline void SetCellValueSynonyms(const Aws::Vector<CellValueSynonym>& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms = value; }

    /**
     * <p>The other names or aliases for the calculated field cell value.</p>
     */
    inline void SetCellValueSynonyms(Aws::Vector<CellValueSynonym>&& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms = std::move(value); }

    /**
     * <p>The other names or aliases for the calculated field cell value.</p>
     */
    inline TopicCalculatedField& WithCellValueSynonyms(const Aws::Vector<CellValueSynonym>& value) { SetCellValueSynonyms(value); return *this;}

    /**
     * <p>The other names or aliases for the calculated field cell value.</p>
     */
    inline TopicCalculatedField& WithCellValueSynonyms(Aws::Vector<CellValueSynonym>&& value) { SetCellValueSynonyms(std::move(value)); return *this;}

    /**
     * <p>The other names or aliases for the calculated field cell value.</p>
     */
    inline TopicCalculatedField& AddCellValueSynonyms(const CellValueSynonym& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms.push_back(value); return *this; }

    /**
     * <p>The other names or aliases for the calculated field cell value.</p>
     */
    inline TopicCalculatedField& AddCellValueSynonyms(CellValueSynonym&& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms.push_back(std::move(value)); return *this; }


    /**
     * <p>The non additive for the table style target.</p>
     */
    inline bool GetNonAdditive() const{ return m_nonAdditive; }

    /**
     * <p>The non additive for the table style target.</p>
     */
    inline bool NonAdditiveHasBeenSet() const { return m_nonAdditiveHasBeenSet; }

    /**
     * <p>The non additive for the table style target.</p>
     */
    inline void SetNonAdditive(bool value) { m_nonAdditiveHasBeenSet = true; m_nonAdditive = value; }

    /**
     * <p>The non additive for the table style target.</p>
     */
    inline TopicCalculatedField& WithNonAdditive(bool value) { SetNonAdditive(value); return *this;}

  private:

    Aws::String m_calculatedFieldName;
    bool m_calculatedFieldNameHasBeenSet = false;

    Aws::String m_calculatedFieldDescription;
    bool m_calculatedFieldDescriptionHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Vector<Aws::String> m_calculatedFieldSynonyms;
    bool m_calculatedFieldSynonymsHasBeenSet = false;

    bool m_isIncludedInTopic;
    bool m_isIncludedInTopicHasBeenSet = false;

    bool m_disableIndexing;
    bool m_disableIndexingHasBeenSet = false;

    ColumnDataRole m_columnDataRole;
    bool m_columnDataRoleHasBeenSet = false;

    TopicTimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    DefaultFormatting m_defaultFormatting;
    bool m_defaultFormattingHasBeenSet = false;

    DefaultAggregation m_aggregation;
    bool m_aggregationHasBeenSet = false;

    ComparativeOrder m_comparativeOrder;
    bool m_comparativeOrderHasBeenSet = false;

    SemanticType m_semanticType;
    bool m_semanticTypeHasBeenSet = false;

    Aws::Vector<AuthorSpecifiedAggregation> m_allowedAggregations;
    bool m_allowedAggregationsHasBeenSet = false;

    Aws::Vector<AuthorSpecifiedAggregation> m_notAllowedAggregations;
    bool m_notAllowedAggregationsHasBeenSet = false;

    bool m_neverAggregateInFilter;
    bool m_neverAggregateInFilterHasBeenSet = false;

    Aws::Vector<CellValueSynonym> m_cellValueSynonyms;
    bool m_cellValueSynonymsHasBeenSet = false;

    bool m_nonAdditive;
    bool m_nonAdditiveHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
