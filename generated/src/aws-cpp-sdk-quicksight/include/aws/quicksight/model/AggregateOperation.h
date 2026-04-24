/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Aggregation.h>
#include <aws/quicksight/model/TransformOperationSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A transform operation that groups rows by specified columns and applies
 * aggregation functions to calculate summary values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AggregateOperation">AWS
 * API Reference</a></p>
 */
class AggregateOperation {
 public:
  AWS_QUICKSIGHT_API AggregateOperation() = default;
  AWS_QUICKSIGHT_API AggregateOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AggregateOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Alias for this operation.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  AggregateOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source transform operation that provides input data for the
   * aggregation.</p>
   */
  inline const TransformOperationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TransformOperationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TransformOperationSource>
  AggregateOperation& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of column names to group by when performing the aggregation. Rows
   * with the same values in these columns will be grouped together.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroupByColumnNames() const { return m_groupByColumnNames; }
  inline bool GroupByColumnNamesHasBeenSet() const { return m_groupByColumnNamesHasBeenSet; }
  template <typename GroupByColumnNamesT = Aws::Vector<Aws::String>>
  void SetGroupByColumnNames(GroupByColumnNamesT&& value) {
    m_groupByColumnNamesHasBeenSet = true;
    m_groupByColumnNames = std::forward<GroupByColumnNamesT>(value);
  }
  template <typename GroupByColumnNamesT = Aws::Vector<Aws::String>>
  AggregateOperation& WithGroupByColumnNames(GroupByColumnNamesT&& value) {
    SetGroupByColumnNames(std::forward<GroupByColumnNamesT>(value));
    return *this;
  }
  template <typename GroupByColumnNamesT = Aws::String>
  AggregateOperation& AddGroupByColumnNames(GroupByColumnNamesT&& value) {
    m_groupByColumnNamesHasBeenSet = true;
    m_groupByColumnNames.emplace_back(std::forward<GroupByColumnNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of aggregation functions to apply to the grouped data, such as
   * <code>SUM</code>, <code>COUNT</code>, or <code>AVERAGE</code>.</p>
   */
  inline const Aws::Vector<Aggregation>& GetAggregations() const { return m_aggregations; }
  inline bool AggregationsHasBeenSet() const { return m_aggregationsHasBeenSet; }
  template <typename AggregationsT = Aws::Vector<Aggregation>>
  void SetAggregations(AggregationsT&& value) {
    m_aggregationsHasBeenSet = true;
    m_aggregations = std::forward<AggregationsT>(value);
  }
  template <typename AggregationsT = Aws::Vector<Aggregation>>
  AggregateOperation& WithAggregations(AggregationsT&& value) {
    SetAggregations(std::forward<AggregationsT>(value));
    return *this;
  }
  template <typename AggregationsT = Aggregation>
  AggregateOperation& AddAggregations(AggregationsT&& value) {
    m_aggregationsHasBeenSet = true;
    m_aggregations.emplace_back(std::forward<AggregationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;

  TransformOperationSource m_source;

  Aws::Vector<Aws::String> m_groupByColumnNames;

  Aws::Vector<Aggregation> m_aggregations;
  bool m_aliasHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_groupByColumnNamesHasBeenSet = false;
  bool m_aggregationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
