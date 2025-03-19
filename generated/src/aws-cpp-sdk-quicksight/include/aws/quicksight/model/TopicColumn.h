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
    AWS_QUICKSIGHT_API TopicColumn() = default;
    AWS_QUICKSIGHT_API TopicColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    TopicColumn& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the column.</p>
     */
    inline const Aws::String& GetColumnFriendlyName() const { return m_columnFriendlyName; }
    inline bool ColumnFriendlyNameHasBeenSet() const { return m_columnFriendlyNameHasBeenSet; }
    template<typename ColumnFriendlyNameT = Aws::String>
    void SetColumnFriendlyName(ColumnFriendlyNameT&& value) { m_columnFriendlyNameHasBeenSet = true; m_columnFriendlyName = std::forward<ColumnFriendlyNameT>(value); }
    template<typename ColumnFriendlyNameT = Aws::String>
    TopicColumn& WithColumnFriendlyName(ColumnFriendlyNameT&& value) { SetColumnFriendlyName(std::forward<ColumnFriendlyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the column and its contents.</p>
     */
    inline const Aws::String& GetColumnDescription() const { return m_columnDescription; }
    inline bool ColumnDescriptionHasBeenSet() const { return m_columnDescriptionHasBeenSet; }
    template<typename ColumnDescriptionT = Aws::String>
    void SetColumnDescription(ColumnDescriptionT&& value) { m_columnDescriptionHasBeenSet = true; m_columnDescription = std::forward<ColumnDescriptionT>(value); }
    template<typename ColumnDescriptionT = Aws::String>
    TopicColumn& WithColumnDescription(ColumnDescriptionT&& value) { SetColumnDescription(std::forward<ColumnDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the column.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnSynonyms() const { return m_columnSynonyms; }
    inline bool ColumnSynonymsHasBeenSet() const { return m_columnSynonymsHasBeenSet; }
    template<typename ColumnSynonymsT = Aws::Vector<Aws::String>>
    void SetColumnSynonyms(ColumnSynonymsT&& value) { m_columnSynonymsHasBeenSet = true; m_columnSynonyms = std::forward<ColumnSynonymsT>(value); }
    template<typename ColumnSynonymsT = Aws::Vector<Aws::String>>
    TopicColumn& WithColumnSynonyms(ColumnSynonymsT&& value) { SetColumnSynonyms(std::forward<ColumnSynonymsT>(value)); return *this;}
    template<typename ColumnSynonymsT = Aws::String>
    TopicColumn& AddColumnSynonyms(ColumnSynonymsT&& value) { m_columnSynonymsHasBeenSet = true; m_columnSynonyms.emplace_back(std::forward<ColumnSynonymsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The role of the column in the data. Valid values are <code>DIMENSION</code>
     * and <code>MEASURE</code>.</p>
     */
    inline ColumnDataRole GetColumnDataRole() const { return m_columnDataRole; }
    inline bool ColumnDataRoleHasBeenSet() const { return m_columnDataRoleHasBeenSet; }
    inline void SetColumnDataRole(ColumnDataRole value) { m_columnDataRoleHasBeenSet = true; m_columnDataRole = value; }
    inline TopicColumn& WithColumnDataRole(ColumnDataRole value) { SetColumnDataRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of aggregation that is performed on the column data when it's
     * queried.</p>
     */
    inline DefaultAggregation GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(DefaultAggregation value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline TopicColumn& WithAggregation(DefaultAggregation value) { SetAggregation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the column is included in the query
     * results.</p>
     */
    inline bool GetIsIncludedInTopic() const { return m_isIncludedInTopic; }
    inline bool IsIncludedInTopicHasBeenSet() const { return m_isIncludedInTopicHasBeenSet; }
    inline void SetIsIncludedInTopic(bool value) { m_isIncludedInTopicHasBeenSet = true; m_isIncludedInTopic = value; }
    inline TopicColumn& WithIsIncludedInTopic(bool value) { SetIsIncludedInTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the column shows in the autocomplete
     * functionality.</p>
     */
    inline bool GetDisableIndexing() const { return m_disableIndexing; }
    inline bool DisableIndexingHasBeenSet() const { return m_disableIndexingHasBeenSet; }
    inline void SetDisableIndexing(bool value) { m_disableIndexingHasBeenSet = true; m_disableIndexing = value; }
    inline TopicColumn& WithDisableIndexing(bool value) { SetDisableIndexing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which data is displayed for the column when it's used in a
     * comparative context.</p>
     */
    inline const ComparativeOrder& GetComparativeOrder() const { return m_comparativeOrder; }
    inline bool ComparativeOrderHasBeenSet() const { return m_comparativeOrderHasBeenSet; }
    template<typename ComparativeOrderT = ComparativeOrder>
    void SetComparativeOrder(ComparativeOrderT&& value) { m_comparativeOrderHasBeenSet = true; m_comparativeOrder = std::forward<ComparativeOrderT>(value); }
    template<typename ComparativeOrderT = ComparativeOrder>
    TopicColumn& WithComparativeOrder(ComparativeOrderT&& value) { SetComparativeOrder(std::forward<ComparativeOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic type of data contained in the column.</p>
     */
    inline const SemanticType& GetSemanticType() const { return m_semanticType; }
    inline bool SemanticTypeHasBeenSet() const { return m_semanticTypeHasBeenSet; }
    template<typename SemanticTypeT = SemanticType>
    void SetSemanticType(SemanticTypeT&& value) { m_semanticTypeHasBeenSet = true; m_semanticType = std::forward<SemanticTypeT>(value); }
    template<typename SemanticTypeT = SemanticType>
    TopicColumn& WithSemanticType(SemanticTypeT&& value) { SetSemanticType(std::forward<SemanticTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TopicTimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TopicTimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline TopicColumn& WithTimeGranularity(TopicTimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of aggregation types that are allowed for the column. Valid values
     * for this structure are <code>COUNT</code>, <code>DISTINCT_COUNT</code>,
     * <code>MIN</code>, <code>MAX</code>, <code>MEDIAN</code>, <code>SUM</code>,
     * <code>AVERAGE</code>, <code>STDEV</code>, <code>STDEVP</code>, <code>VAR</code>,
     * <code>VARP</code>, and <code>PERCENTILE</code>.</p>
     */
    inline const Aws::Vector<AuthorSpecifiedAggregation>& GetAllowedAggregations() const { return m_allowedAggregations; }
    inline bool AllowedAggregationsHasBeenSet() const { return m_allowedAggregationsHasBeenSet; }
    template<typename AllowedAggregationsT = Aws::Vector<AuthorSpecifiedAggregation>>
    void SetAllowedAggregations(AllowedAggregationsT&& value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations = std::forward<AllowedAggregationsT>(value); }
    template<typename AllowedAggregationsT = Aws::Vector<AuthorSpecifiedAggregation>>
    TopicColumn& WithAllowedAggregations(AllowedAggregationsT&& value) { SetAllowedAggregations(std::forward<AllowedAggregationsT>(value)); return *this;}
    inline TopicColumn& AddAllowedAggregations(AuthorSpecifiedAggregation value) { m_allowedAggregationsHasBeenSet = true; m_allowedAggregations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of aggregation types that are not allowed for the column. Valid
     * values for this structure are <code>COUNT</code>, <code>DISTINCT_COUNT</code>,
     * <code>MIN</code>, <code>MAX</code>, <code>MEDIAN</code>, <code>SUM</code>,
     * <code>AVERAGE</code>, <code>STDEV</code>, <code>STDEVP</code>, <code>VAR</code>,
     * <code>VARP</code>, and <code>PERCENTILE</code>.</p>
     */
    inline const Aws::Vector<AuthorSpecifiedAggregation>& GetNotAllowedAggregations() const { return m_notAllowedAggregations; }
    inline bool NotAllowedAggregationsHasBeenSet() const { return m_notAllowedAggregationsHasBeenSet; }
    template<typename NotAllowedAggregationsT = Aws::Vector<AuthorSpecifiedAggregation>>
    void SetNotAllowedAggregations(NotAllowedAggregationsT&& value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations = std::forward<NotAllowedAggregationsT>(value); }
    template<typename NotAllowedAggregationsT = Aws::Vector<AuthorSpecifiedAggregation>>
    TopicColumn& WithNotAllowedAggregations(NotAllowedAggregationsT&& value) { SetNotAllowedAggregations(std::forward<NotAllowedAggregationsT>(value)); return *this;}
    inline TopicColumn& AddNotAllowedAggregations(AuthorSpecifiedAggregation value) { m_notAllowedAggregationsHasBeenSet = true; m_notAllowedAggregations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default formatting used for values in the column.</p>
     */
    inline const DefaultFormatting& GetDefaultFormatting() const { return m_defaultFormatting; }
    inline bool DefaultFormattingHasBeenSet() const { return m_defaultFormattingHasBeenSet; }
    template<typename DefaultFormattingT = DefaultFormatting>
    void SetDefaultFormatting(DefaultFormattingT&& value) { m_defaultFormattingHasBeenSet = true; m_defaultFormatting = std::forward<DefaultFormattingT>(value); }
    template<typename DefaultFormattingT = DefaultFormatting>
    TopicColumn& WithDefaultFormatting(DefaultFormattingT&& value) { SetDefaultFormatting(std::forward<DefaultFormattingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether to aggregate the column data when it's
     * used in a filter context.</p>
     */
    inline bool GetNeverAggregateInFilter() const { return m_neverAggregateInFilter; }
    inline bool NeverAggregateInFilterHasBeenSet() const { return m_neverAggregateInFilterHasBeenSet; }
    inline void SetNeverAggregateInFilter(bool value) { m_neverAggregateInFilterHasBeenSet = true; m_neverAggregateInFilter = value; }
    inline TopicColumn& WithNeverAggregateInFilter(bool value) { SetNeverAggregateInFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the column cell value.</p>
     */
    inline const Aws::Vector<CellValueSynonym>& GetCellValueSynonyms() const { return m_cellValueSynonyms; }
    inline bool CellValueSynonymsHasBeenSet() const { return m_cellValueSynonymsHasBeenSet; }
    template<typename CellValueSynonymsT = Aws::Vector<CellValueSynonym>>
    void SetCellValueSynonyms(CellValueSynonymsT&& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms = std::forward<CellValueSynonymsT>(value); }
    template<typename CellValueSynonymsT = Aws::Vector<CellValueSynonym>>
    TopicColumn& WithCellValueSynonyms(CellValueSynonymsT&& value) { SetCellValueSynonyms(std::forward<CellValueSynonymsT>(value)); return *this;}
    template<typename CellValueSynonymsT = CellValueSynonym>
    TopicColumn& AddCellValueSynonyms(CellValueSynonymsT&& value) { m_cellValueSynonymsHasBeenSet = true; m_cellValueSynonyms.emplace_back(std::forward<CellValueSynonymsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The non additive value for the column.</p>
     */
    inline bool GetNonAdditive() const { return m_nonAdditive; }
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

    ColumnDataRole m_columnDataRole{ColumnDataRole::NOT_SET};
    bool m_columnDataRoleHasBeenSet = false;

    DefaultAggregation m_aggregation{DefaultAggregation::NOT_SET};
    bool m_aggregationHasBeenSet = false;

    bool m_isIncludedInTopic{false};
    bool m_isIncludedInTopicHasBeenSet = false;

    bool m_disableIndexing{false};
    bool m_disableIndexingHasBeenSet = false;

    ComparativeOrder m_comparativeOrder;
    bool m_comparativeOrderHasBeenSet = false;

    SemanticType m_semanticType;
    bool m_semanticTypeHasBeenSet = false;

    TopicTimeGranularity m_timeGranularity{TopicTimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    Aws::Vector<AuthorSpecifiedAggregation> m_allowedAggregations;
    bool m_allowedAggregationsHasBeenSet = false;

    Aws::Vector<AuthorSpecifiedAggregation> m_notAllowedAggregations;
    bool m_notAllowedAggregationsHasBeenSet = false;

    DefaultFormatting m_defaultFormatting;
    bool m_defaultFormattingHasBeenSet = false;

    bool m_neverAggregateInFilter{false};
    bool m_neverAggregateInFilterHasBeenSet = false;

    Aws::Vector<CellValueSynonym> m_cellValueSynonyms;
    bool m_cellValueSynonymsHasBeenSet = false;

    bool m_nonAdditive{false};
    bool m_nonAdditiveHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
