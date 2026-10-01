/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>

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
 * <p>A node in the selection tree of a <code>HierarchyFilter</code>. Each node
 * records the values that are selected at one level of the hierarchy. Nodes nest
 * through <code>Children</code> to record selections at deeper levels.</p> <p>The
 * tree cannot be deeper than the number of levels declared in
 * <code>HierarchyLevels</code>. A tree can be a maximum of 5 levels deep, and a
 * node can have a maximum of 1,000 children.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HierarchyFilterNode">AWS
 * API Reference</a></p>
 */
class HierarchyFilterNode {
 public:
  AWS_QUICKSIGHT_API HierarchyFilterNode() = default;
  AWS_QUICKSIGHT_API HierarchyFilterNode(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API HierarchyFilterNode& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The column that this node selects values from. This column must match the
   * column of the corresponding level in
   * <code>HierarchyFilter$HierarchyLevels</code>. The node at depth 1 must match the
   * first level, the node at depth 2 must match the second level, and so on.</p>
   */
  inline const ColumnIdentifier& GetColumn() const { return m_column; }
  inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
  template <typename ColumnT = ColumnIdentifier>
  void SetColumn(ColumnT&& value) {
    m_columnHasBeenSet = true;
    m_column = std::forward<ColumnT>(value);
  }
  template <typename ColumnT = ColumnIdentifier>
  HierarchyFilterNode& WithColumn(ColumnT&& value) {
    SetColumn(std::forward<ColumnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value in the parent node's <code>HierarchyValues</code> that this node
   * belongs to. When a parent selects several values, each of its children repeats
   * one of them here to identify which branch of the hierarchy that child
   * describes.</p> <p>Omit this attribute on the root node of
   * <code>HierarchyTree</code>, which has no parent.</p>
   */
  inline const Aws::String& GetParentValue() const { return m_parentValue; }
  inline bool ParentValueHasBeenSet() const { return m_parentValueHasBeenSet; }
  template <typename ParentValueT = Aws::String>
  void SetParentValue(ParentValueT&& value) {
    m_parentValueHasBeenSet = true;
    m_parentValue = std::forward<ParentValueT>(value);
  }
  template <typename ParentValueT = Aws::String>
  HierarchyFilterNode& WithParentValue(ParentValueT&& value) {
    SetParentValue(std::forward<ParentValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values that are selected at this level of the hierarchy. You can specify
   * a maximum of 2,000 values per node.</p>
   */
  inline const Aws::Vector<Aws::String>& GetHierarchyValues() const { return m_hierarchyValues; }
  inline bool HierarchyValuesHasBeenSet() const { return m_hierarchyValuesHasBeenSet; }
  template <typename HierarchyValuesT = Aws::Vector<Aws::String>>
  void SetHierarchyValues(HierarchyValuesT&& value) {
    m_hierarchyValuesHasBeenSet = true;
    m_hierarchyValues = std::forward<HierarchyValuesT>(value);
  }
  template <typename HierarchyValuesT = Aws::Vector<Aws::String>>
  HierarchyFilterNode& WithHierarchyValues(HierarchyValuesT&& value) {
    SetHierarchyValues(std::forward<HierarchyValuesT>(value));
    return *this;
  }
  template <typename HierarchyValuesT = Aws::String>
  HierarchyFilterNode& AddHierarchyValues(HierarchyValuesT&& value) {
    m_hierarchyValuesHasBeenSet = true;
    m_hierarchyValues.emplace_back(std::forward<HierarchyValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The nodes that record the selections at the next level of the hierarchy. You
   * can specify a maximum of 1,000 children per node.</p>
   */
  inline const Aws::Vector<HierarchyFilterNode>& GetChildren() const { return m_children; }
  inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
  template <typename ChildrenT = Aws::Vector<HierarchyFilterNode>>
  void SetChildren(ChildrenT&& value) {
    m_childrenHasBeenSet = true;
    m_children = std::forward<ChildrenT>(value);
  }
  template <typename ChildrenT = Aws::Vector<HierarchyFilterNode>>
  HierarchyFilterNode& WithChildren(ChildrenT&& value) {
    SetChildren(std::forward<ChildrenT>(value));
    return *this;
  }
  template <typename ChildrenT = HierarchyFilterNode>
  HierarchyFilterNode& AddChildren(ChildrenT&& value) {
    m_childrenHasBeenSet = true;
    m_children.emplace_back(std::forward<ChildrenT>(value));
    return *this;
  }
  ///@}
 private:
  ColumnIdentifier m_column;

  Aws::String m_parentValue;

  Aws::Vector<Aws::String> m_hierarchyValues;

  Aws::Vector<HierarchyFilterNode> m_children;
  bool m_columnHasBeenSet = false;
  bool m_parentValueHasBeenSet = false;
  bool m_hierarchyValuesHasBeenSet = false;
  bool m_childrenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
