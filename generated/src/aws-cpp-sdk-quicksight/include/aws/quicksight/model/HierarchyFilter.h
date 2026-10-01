/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/DefaultFilterControlConfiguration.h>
#include <aws/quicksight/model/FilterNullOption.h>
#include <aws/quicksight/model/HierarchyFilterLevel.h>
#include <aws/quicksight/model/HierarchyFilterMatchOperator.h>
#include <aws/quicksight/model/HierarchyFilterNode.h>

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
 * <p>A <code>HierarchyFilter</code> filters data by drilling down through an
 * ordered list of columns. Each level in the list narrows the data by one column,
 * and the selected values at each level determine which values are available at
 * the next.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HierarchyFilter">AWS
 * API Reference</a></p>
 */
class HierarchyFilter {
 public:
  AWS_QUICKSIGHT_API HierarchyFilter() = default;
  AWS_QUICKSIGHT_API HierarchyFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API HierarchyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
   * or template.</p>
   */
  inline const Aws::String& GetFilterId() const { return m_filterId; }
  inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }
  template <typename FilterIdT = Aws::String>
  void SetFilterId(FilterIdT&& value) {
    m_filterIdHasBeenSet = true;
    m_filterId = std::forward<FilterIdT>(value);
  }
  template <typename FilterIdT = Aws::String>
  HierarchyFilter& WithFilterId(FilterIdT&& value) {
    SetFilterId(std::forward<FilterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The column that anchors the filter. This column determines the dataset that
   * the whole filter applies to, so every column in <code>HierarchyLevels</code> and
   * in <code>HierarchyTree</code> must belong to the same dataset.</p>
   */
  inline const ColumnIdentifier& GetColumn() const { return m_column; }
  inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
  template <typename ColumnT = ColumnIdentifier>
  void SetColumn(ColumnT&& value) {
    m_columnHasBeenSet = true;
    m_column = std::forward<ColumnT>(value);
  }
  template <typename ColumnT = ColumnIdentifier>
  HierarchyFilter& WithColumn(ColumnT&& value) {
    SetColumn(std::forward<ColumnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordered list of columns that defines the drill-down path of the filter.
   * The first level is the top of the hierarchy. You can specify a maximum of 5
   * levels.</p>
   */
  inline const Aws::Vector<HierarchyFilterLevel>& GetHierarchyLevels() const { return m_hierarchyLevels; }
  inline bool HierarchyLevelsHasBeenSet() const { return m_hierarchyLevelsHasBeenSet; }
  template <typename HierarchyLevelsT = Aws::Vector<HierarchyFilterLevel>>
  void SetHierarchyLevels(HierarchyLevelsT&& value) {
    m_hierarchyLevelsHasBeenSet = true;
    m_hierarchyLevels = std::forward<HierarchyLevelsT>(value);
  }
  template <typename HierarchyLevelsT = Aws::Vector<HierarchyFilterLevel>>
  HierarchyFilter& WithHierarchyLevels(HierarchyLevelsT&& value) {
    SetHierarchyLevels(std::forward<HierarchyLevelsT>(value));
    return *this;
  }
  template <typename HierarchyLevelsT = HierarchyFilterLevel>
  HierarchyFilter& AddHierarchyLevels(HierarchyLevelsT&& value) {
    m_hierarchyLevelsHasBeenSet = true;
    m_hierarchyLevels.emplace_back(std::forward<HierarchyLevelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tree of selected values for the filter. Each node records the values that
   * are selected at one level of the hierarchy, and its children record the
   * selections beneath those values. Omit this attribute to define the drill-down
   * path without restricting any values.</p>
   */
  inline const HierarchyFilterNode& GetHierarchyTree() const { return m_hierarchyTree; }
  inline bool HierarchyTreeHasBeenSet() const { return m_hierarchyTreeHasBeenSet; }
  template <typename HierarchyTreeT = HierarchyFilterNode>
  void SetHierarchyTree(HierarchyTreeT&& value) {
    m_hierarchyTreeHasBeenSet = true;
    m_hierarchyTree = std::forward<HierarchyTreeT>(value);
  }
  template <typename HierarchyTreeT = HierarchyFilterNode>
  HierarchyFilter& WithHierarchyTree(HierarchyTreeT&& value) {
    SetHierarchyTree(std::forward<HierarchyTreeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This option determines how null values should be treated when filtering
   * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
   * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
   * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
   * values from filtered results.</p> </li> </ul>
   */
  inline FilterNullOption GetNullOption() const { return m_nullOption; }
  inline bool NullOptionHasBeenSet() const { return m_nullOptionHasBeenSet; }
  inline void SetNullOption(FilterNullOption value) {
    m_nullOptionHasBeenSet = true;
    m_nullOption = value;
  }
  inline HierarchyFilter& WithNullOption(FilterNullOption value) {
    SetNullOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether the values selected in <code>HierarchyTree</code> are kept
   * or removed. Choose one of the following options:</p> <ul> <li> <p>
   * <code>INCLUDE</code>: Keep only the selected values.</p> </li> <li> <p>
   * <code>EXCLUDE</code>: Remove the selected values.</p> </li> </ul>
   */
  inline HierarchyFilterMatchOperator GetMatchOperator() const { return m_matchOperator; }
  inline bool MatchOperatorHasBeenSet() const { return m_matchOperatorHasBeenSet; }
  inline void SetMatchOperator(HierarchyFilterMatchOperator value) {
    m_matchOperatorHasBeenSet = true;
    m_matchOperator = value;
  }
  inline HierarchyFilter& WithMatchOperator(HierarchyFilterMatchOperator value) {
    SetMatchOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default configurations for the associated controls. This applies only for
   * filters that are scoped to multiple sheets.</p>
   */
  inline const DefaultFilterControlConfiguration& GetDefaultFilterControlConfiguration() const {
    return m_defaultFilterControlConfiguration;
  }
  inline bool DefaultFilterControlConfigurationHasBeenSet() const { return m_defaultFilterControlConfigurationHasBeenSet; }
  template <typename DefaultFilterControlConfigurationT = DefaultFilterControlConfiguration>
  void SetDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) {
    m_defaultFilterControlConfigurationHasBeenSet = true;
    m_defaultFilterControlConfiguration = std::forward<DefaultFilterControlConfigurationT>(value);
  }
  template <typename DefaultFilterControlConfigurationT = DefaultFilterControlConfiguration>
  HierarchyFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfigurationT&& value) {
    SetDefaultFilterControlConfiguration(std::forward<DefaultFilterControlConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_filterId;

  ColumnIdentifier m_column;

  Aws::Vector<HierarchyFilterLevel> m_hierarchyLevels;

  HierarchyFilterNode m_hierarchyTree;

  FilterNullOption m_nullOption{FilterNullOption::NOT_SET};

  HierarchyFilterMatchOperator m_matchOperator{HierarchyFilterMatchOperator::NOT_SET};

  DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
  bool m_filterIdHasBeenSet = false;
  bool m_columnHasBeenSet = false;
  bool m_hierarchyLevelsHasBeenSet = false;
  bool m_hierarchyTreeHasBeenSet = false;
  bool m_nullOptionHasBeenSet = false;
  bool m_matchOperatorHasBeenSet = false;
  bool m_defaultFilterControlConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
