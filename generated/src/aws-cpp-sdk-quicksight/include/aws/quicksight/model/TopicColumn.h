/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnDataRole.h>
#include <aws/quicksight/model/DefaultAggregation.h>
#include <aws/quicksight/model/ComparativeOrder.h>
#include <aws/quicksight/model/SemanticType.h>
#include <aws/quicksight/model/TopicTimeGranularity.h>
#include <aws/quicksight/model/DefaultFormatting.h>
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
   * <p>Represents a column in a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicColumn">AWS
   * API Reference</a></p>
   */
  class TopicColumn
  {
  public:
    AWS_QUICKSIGHT_API TopicColumn();
    AWS_QUICKSIGHT_API TopicColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }
    inline TopicColumn& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline TopicColumn& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline TopicColumn& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the column.</p>
     */
    inline const Aws::String& GetColumnFriendlyName() const{ return m_columnFriendlyName; }
    inline bool ColumnFriendlyNameHasBeenSet() const { return m_columnFriendlyNameHasBeenSet; }
    inline void SetColumnFriendlyName(const Aws::String& value) { m_columnFriendlyNameHasBeenSet = true; m_columnFriendlyName = value; }
    inline void SetColumnFriendlyName(Aws::String&& value) { m_columnFriendlyNameHasBeenSet = true; m_columnFriendlyName = std::move(value); }
    inline void SetColumnFriendlyName(const char* value) { m_columnFriendlyNameHasBeenSet = true; m_columnFriendlyName.assign(value); }
    inline TopicColumn& WithColumnFriendlyName(const Aws::String& value) { SetColumnFriendlyName(value); return *this;}
    inline TopicColumn& WithColumnFriendlyName(Aws::String&& value) { SetColumnFriendlyName(std::move(value)); return *this;}
    inline TopicColumn& WithColumnFriendlyName(const char* value) { SetColumnFriendlyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the column and its contents.</p>
     */
    inline const Aws::String& GetColumnDescription() const{ return m_columnDescription; }
    inline bool ColumnDescriptionHasBeenSet() const { return m_columnDescriptionHasBeenSet; }
    inline void SetColumnDescription(const Aws::String& value) { m_columnDescriptionHasBeenSet = true; m_columnDescription = value; }
    inline void SetColumnDescription(Aws::String&& value) { m_columnDescriptionHasBeenSet = true; m_columnDescription = std::move(value); }
    inline void SetColumnDescription(const char* value) { m_columnDescriptionHasBeenSet = true; m_columnDescription.assign(value); }
    inline TopicColumn& WithColumnDescription(const Aws::String& value) { SetColumnDescription(value); return *this;}
    inline TopicColumn& WithColumnDescription(Aws::String&& value) { SetColumnDescription(std::move(value)); return *this;}
    inline TopicColumn& WithColumnDescription(const char* value) { SetColumnDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the column.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnSynonyms() const{ return m_columnSynonyms; }
    inline bool ColumnSynonymsHasBeenSet() const { return m_columnSynonymsHasBeenSet; }
    inline void SetColumnSynonyms(const Aws::Vector<Aws::String>& value) { m_columnSynonymsHasBeenSet = true; m_columnSynonyms = value; }
    inline void SetColumnSynonyms(Aws::Vector<Aws::String>&& value) { m_columnSynonymsHasBeenSet = true; m_columnSynonyms = std::move(value); }
    inline TopicColumn& WithColumnSynonyms(const Aws::Vector<Aws::String>& value) { SetColumnSynonyms(value); return *this;}
    inline TopicColumn& WithColumnSynonyms(Aws::Vector<Aws::String>&& value) { SetColumnSynonyms(std::move(value)); return *this;}
    inline TopicColumn& AddColumnSynonyms(const Aws::String& value) { m_columnSynonymsHasBeenSet = true; m_columnSynonyms.push_back(value); return *this; }
    inline TopicColumn& AddColumnSynonyms(Aws::String&& value) { m_columnSynonymsHasBeenSet = true; m_columnSynonyms.push_back(std::move(value)); return *this; }
    inline TopicColumn& AddColumnSynonyms(const char* value) { m_columnSynonymsHasBeenSet = true; m_columnSynonyms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The role of the column in the data. Valid values are <code>DIMENSION</code>
     * and <code>MEASURE</code>.</p>
     */
    inline const ColumnDataRole& GetColumnDataRole() const{ return m_columnDataRole; }
    inline bool ColumnDataRoleHasBeenSet() const { return m_columnDataRoleHasBeenSet; }
    inline void SetColumnDataRole(const ColumnDataRole& value) { m_columnDataRoleHasBeenSet = true; m_columnDataRole = value; }
    inline void SetColumnDataRole(ColumnDataRole&& value) { m_columnDataRoleHasBeenSet = true; m_columnDataRole = std::move(value); }
    inline TopicColumn& WithColumnDataRole(const ColumnDataRole& value) { SetColumnDataRole(value); return *this;}
    inline TopicColumn& WithColumnDataRole(ColumnDataRole&& value) { SetColumnDataRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of aggregation that is performed on the column data when it's
     * queried.</p>
     */
    inline const DefaultAggregation& GetAggregation() const{ return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(const DefaultAggregation& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline void SetAggregation(DefaultAggregation&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }
    inline TopicColumn& WithAggregation(const DefaultAggregation& value) { SetAggregation(value); return *this;}
    inline TopicColumn& WithAggregation(DefaultAggregation&& value) { SetAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the column is included in the query
     * results.</p>
     */
    inline bool GetIsIncludedInTopic() const{ return m_isIncludedInTopic; }
    inline bool IsIncludedInTopicHasBeenSet() const { return m_isIncludedInTopicHasBeenSet; }
    inline void SetIsIncludedInTopic(bool value) { m_isIncludedInTopicHasBeenSet = true; m_isIncludedInTopic = value; }
    inline TopicColumn& WithIsIncludedInTopic(bool value) { SetIsIncludedInTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the column shows in the autocomplete
     * functionality.</p>
     */
    inline bool GetDisableIndexing() const{ return m_disableIndexing; }
    inline bool DisableIndexingHasBeenSet() const { return m_disableIndexingHasBeenSet; }
    inline void SetDisableIndexing(bool value) { m_disableIndexingHasBeenSet = true; m_disableIndexing = value; }
    inline TopicColumn& WithDisableIndexing(bool value) { SetDisableIndexing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which data is displayed for the column when it's used in a
     * comparative context.</p>
     */
    inline const ComparativeOrder& GetComparativeOrder() const{ return m_comparativeOrder; }
    inline bool ComparativeOrderHasBeenSet() const { return m_comparativeOrderHasBeenSet; }
    inline void SetComparativeOrder(const ComparativeOrder& value) { m_comparativeOrderHasBeenSet = true; m_comparativeOrder = value; }
    inline void SetComparativeOrder(ComparativeOrder&& value) { m_comparativeOrderHasBeenSet = true; m_comparativeOrder = std::move(value); }
    inline TopicColumn& WithComparativeOrder(const ComparativeOrder& value) { SetComparativeOrder(value); return *this;}
    inline TopicColumn& WithComparativeOrder(ComparativeOrder&& value) { SetComparativeOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic type of data contained in the column.</p>
     */
    inline const SemanticType& GetSemanticType() const{ return m_semanticType; }
    inline bool SemanticTypeHasBeenSet() const { return m_semanticTypeHasBeenSet; }
    inline void SetSemanticType(const SemanticType& value) { m_semanticTypeHasBeenSet = true; m_semanticType = value; }
    inline void SetSemanticType(SemanticType&& value) { m_semanticTypeHasBeenSet = true; m_semanticType = std::move(value); }
    inline TopicColumn& WithSemanticType(const SemanticType& value) { SetSemanticType(value); return *this;}
    inline TopicColumn& WithSemanticType(SemanticType&& value) { SetSemanticType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TopicTimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(const TopicTimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline void SetTimeGranularity(TopicTimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }
    inline TopicColumn& WithTimeGranularity(const TopicTimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline TopicColumn& WithTimeGranularity(TopicTimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of aggregation types that are allowed for the column. Valid values
     * for this structure are <code>COUNT</code>, <code>DISTINCT_COUNT</code>,
     * <code>MIN</code>, <code>MAX</code>, <code>MEDIAN</code>, <code>SUM</code>,
     * <code>AVERAGE</code>, <code>STDEV</code>, <code>STDEVP</code>, <code>VAR</code>,
     * <code>VARP</code>, and <code>PERCENTILE</code>.</p>
     */
    inline const Aws::Vector<AuthorSpecifiedAggregation>& GetAllowedAggregations() const{ return m_allowedAggregations; }
    inline bool AllowedAggregationsHasBeenSet() const { return m_allowedAggregationsHasBeenSet; }
    inline void SetAllowedAggregations(const Aws::Vector<AuthorSpecifiedAggregation>& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations = value; }
    inline void SetAllowedAggregations(Aws::Vector<AuthorSpecifiedAggregation>&& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations = std::move(value); }
    inline TopicColumn& WithAllowedAggregations(const Aws::Vector<AuthorSpecifiedAggregation>& value) { SetAllowedAggregations(value); return *this;}
    inline TopicColumn& WithAllowedAggregations(Aws::Vector<AuthorSpecifiedAggregation>&& value) { SetAllowedAggregations(std::move(value)); return *this;}
    inline TopicColumn& AddAllowedAggregations(const AuthorSpecifiedAggregation& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations.push_back(value); return *this; }
    inline TopicColumn& AddAllowedAggregations(AuthorSpecifiedAggregation&& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of aggregation types that are not allowed for the column. Valid
     * values for this structure are <code>COUNT</code>, <code>DISTINCT_COUNT</code>,
     * <code>MIN</code>, <code>MAX</code>, <code>MEDIAN</code>, <code>SUM</code>,
     * <code>AVERAGE</code>, <code>STDEV</code>, <code>STDEVP</code>, <code>VAR</code>,
     * <code>VARP</code>, and <code>PERCENTILE</code>.</p>
     */
    inline const Aws::Vector<AuthorSpecifiedAggregation>& GetNotAllowedAggregations() const{ return m_notAllowedAggregations; }
    inline bool NotAllowedAggregationsHasBeenSet() const { return m_notAllowedAggregationsHasBeenSet; }
    inline void SetNotAllowedAggregations(const Aws::Vector<AuthorSpecifiedAggregation>& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations = value; }
    inline void SetNotAllowedAggregations(Aws::Vector<AuthorSpecifiedAggregation>&& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations = std::move(value); }
    inline TopicColumn& WithNotAllowedAggregations(const Aws::Vector<AuthorSpecifiedAggregation>& value) { SetNotAllowedAggregations(value); return *this;}
    inline TopicColumn& WithNotAllowedAggregations(Aws::Vector<AuthorSpecifiedAggregation>&& value) { SetNotAllowedAggregations(std::move(value)); return *this;}
    inline TopicColumn& AddNotAllowedAggregations(const AuthorSpecifiedAggregation& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations.push_back(value); return *this; }
    inline TopicColumn& AddNotAllowedAggregations(AuthorSpecifiedAggregation&& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default formatting used for values in the column.</p>
     */
    inline const DefaultFormatting& GetDefaultFormatting() const{ return m_defaultFormatting; }
    inline bool DefaultFormattingHasBeenSet() const { return m_defaultFormattingHasBeenSet; }
    inline void SetDefaultFormatting(const DefaultFormatting& value) { m_defaultFormattingHasBeenSet = true; m_defaultFormatting = value; }
    inline void SetDefaultFormatting(DefaultFormatting&& value) { m_defaultFormattingHasBeenSet = true; m_defaultFormatting = std::move(value); }
    inline TopicColumn& WithDefaultFormatting(const DefaultFormatting& value) { SetDefaultFormatting(value); return *this;}
    inline TopicColumn& WithDefaultFormatting(DefaultFormatting&& value) { SetDefaultFormatting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether to aggregate the column data when it's
     * used in a filter context.</p>
     */
    inline bool GetNeverAggregateInFilter() const{ return m_neverAggregateInFilter; }
    inline bool NeverAggregateInFilterHasBeenSet() const { return m_neverAggregateInFilterHasBeenSet; }
    inline void SetNeverAggregateInFilter(bool value) { m_neverAggregateInFilterHasBeenSet = true; m_neverAggregateInFilter = value; }
    inline TopicColumn& WithNeverAggregateInFilter(bool value) { SetNeverAggregateInFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the column cell value.</p>
     */
    inline const Aws::Vector<CellValueSynonym>& GetCellValueSynonyms() const{ return m_cellValueSynonyms; }
    inline bool CellValueSynonymsHasBeenSet() const { return m_cellValueSynonymsHasBeenSet; }
    inline void SetCellValueSynonyms(const Aws::Vector<CellValueSynonym>& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms = value; }
    inline void SetCellValueSynonyms(Aws::Vector<CellValueSynonym>&& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms = std::move(value); }
    inline TopicColumn& WithCellValueSynonyms(const Aws::Vector<CellValueSynonym>& value) { SetCellValueSynonyms(value); return *this;}
    inline TopicColumn& WithCellValueSynonyms(Aws::Vector<CellValueSynonym>&& value) { SetCellValueSynonyms(std::move(value)); return *this;}
    inline TopicColumn& AddCellValueSynonyms(const CellValueSynonym& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms.push_back(value); return *this; }
    inline TopicColumn& AddCellValueSynonyms(CellValueSynonym&& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The non additive value for the column.</p>
     */
    inline bool GetNonAdditive() const{ return m_nonAdditive; }
    inline bool NonAdditiveHasBeenSet() const { return m_nonAdditiveHasBeenSet; }
    inline void SetNonAdditive(bool value) { m_nonAdditiveHasBeenSet = true; m_nonAdditive = value; }
    inline TopicColumn& WithNonAdditive(bool value) { SetNonAdditive(value); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnFriendlyName;
    bool m_columnFriendlyNameHasBeenSet = false;

    Aws::String m_columnDescription;
    bool m_columnDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnSynonyms;
    bool m_columnSynonymsHasBeenSet = false;

    ColumnDataRole m_columnDataRole;
    bool m_columnDataRoleHasBeenSet = false;

    DefaultAggregation m_aggregation;
    bool m_aggregationHasBeenSet = false;

    bool m_isIncludedInTopic;
    bool m_isIncludedInTopicHasBeenSet = false;

    bool m_disableIndexing;
    bool m_disableIndexingHasBeenSet = false;

    ComparativeOrder m_comparativeOrder;
    bool m_comparativeOrderHasBeenSet = false;

    SemanticType m_semanticType;
    bool m_semanticTypeHasBeenSet = false;

    TopicTimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    Aws::Vector<AuthorSpecifiedAggregation> m_allowedAggregations;
    bool m_allowedAggregationsHasBeenSet = false;

    Aws::Vector<AuthorSpecifiedAggregation> m_notAllowedAggregations;
    bool m_notAllowedAggregationsHasBeenSet = false;

    DefaultFormatting m_defaultFormatting;
    bool m_defaultFormattingHasBeenSet = false;

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
