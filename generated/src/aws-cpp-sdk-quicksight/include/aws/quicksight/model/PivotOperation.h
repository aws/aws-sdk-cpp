/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotConfiguration.h>
#include <aws/quicksight/model/TransformOperationSource.h>
#include <aws/quicksight/model/ValueColumnConfiguration.h>

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
 * <p>A transform operation that pivots data by converting row values into
 * columns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotOperation">AWS
 * API Reference</a></p>
 */
class PivotOperation {
 public:
  AWS_QUICKSIGHT_API PivotOperation() = default;
  AWS_QUICKSIGHT_API PivotOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API PivotOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  PivotOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source transform operation that provides input data for pivoting.</p>
   */
  inline const TransformOperationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TransformOperationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TransformOperationSource>
  PivotOperation& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of column names to group by when performing the pivot operation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroupByColumnNames() const { return m_groupByColumnNames; }
  inline bool GroupByColumnNamesHasBeenSet() const { return m_groupByColumnNamesHasBeenSet; }
  template <typename GroupByColumnNamesT = Aws::Vector<Aws::String>>
  void SetGroupByColumnNames(GroupByColumnNamesT&& value) {
    m_groupByColumnNamesHasBeenSet = true;
    m_groupByColumnNames = std::forward<GroupByColumnNamesT>(value);
  }
  template <typename GroupByColumnNamesT = Aws::Vector<Aws::String>>
  PivotOperation& WithGroupByColumnNames(GroupByColumnNamesT&& value) {
    SetGroupByColumnNames(std::forward<GroupByColumnNamesT>(value));
    return *this;
  }
  template <typename GroupByColumnNamesT = Aws::String>
  PivotOperation& AddGroupByColumnNames(GroupByColumnNamesT&& value) {
    m_groupByColumnNamesHasBeenSet = true;
    m_groupByColumnNames.emplace_back(std::forward<GroupByColumnNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for how to aggregate values when multiple rows map to the same
   * pivoted column.</p>
   */
  inline const ValueColumnConfiguration& GetValueColumnConfiguration() const { return m_valueColumnConfiguration; }
  inline bool ValueColumnConfigurationHasBeenSet() const { return m_valueColumnConfigurationHasBeenSet; }
  template <typename ValueColumnConfigurationT = ValueColumnConfiguration>
  void SetValueColumnConfiguration(ValueColumnConfigurationT&& value) {
    m_valueColumnConfigurationHasBeenSet = true;
    m_valueColumnConfiguration = std::forward<ValueColumnConfigurationT>(value);
  }
  template <typename ValueColumnConfigurationT = ValueColumnConfiguration>
  PivotOperation& WithValueColumnConfiguration(ValueColumnConfigurationT&& value) {
    SetValueColumnConfiguration(std::forward<ValueColumnConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration that specifies which labels to pivot and how to structure the
   * resulting columns.</p>
   */
  inline const PivotConfiguration& GetPivotConfiguration() const { return m_pivotConfiguration; }
  inline bool PivotConfigurationHasBeenSet() const { return m_pivotConfigurationHasBeenSet; }
  template <typename PivotConfigurationT = PivotConfiguration>
  void SetPivotConfiguration(PivotConfigurationT&& value) {
    m_pivotConfigurationHasBeenSet = true;
    m_pivotConfiguration = std::forward<PivotConfigurationT>(value);
  }
  template <typename PivotConfigurationT = PivotConfiguration>
  PivotOperation& WithPivotConfiguration(PivotConfigurationT&& value) {
    SetPivotConfiguration(std::forward<PivotConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;

  TransformOperationSource m_source;

  Aws::Vector<Aws::String> m_groupByColumnNames;

  ValueColumnConfiguration m_valueColumnConfiguration;

  PivotConfiguration m_pivotConfiguration;
  bool m_aliasHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_groupByColumnNamesHasBeenSet = false;
  bool m_valueColumnConfigurationHasBeenSet = false;
  bool m_pivotConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
