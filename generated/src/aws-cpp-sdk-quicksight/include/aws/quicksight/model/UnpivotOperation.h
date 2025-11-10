/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnToUnpivot.h>
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
 * <p>A transform operation that converts columns into rows, normalizing the data
 * structure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UnpivotOperation">AWS
 * API Reference</a></p>
 */
class UnpivotOperation {
 public:
  AWS_QUICKSIGHT_API UnpivotOperation() = default;
  AWS_QUICKSIGHT_API UnpivotOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API UnpivotOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  UnpivotOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source transform operation that provides input data for unpivoting.</p>
   */
  inline const TransformOperationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TransformOperationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TransformOperationSource>
  UnpivotOperation& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of columns to unpivot from the source data.</p>
   */
  inline const Aws::Vector<ColumnToUnpivot>& GetColumnsToUnpivot() const { return m_columnsToUnpivot; }
  inline bool ColumnsToUnpivotHasBeenSet() const { return m_columnsToUnpivotHasBeenSet; }
  template <typename ColumnsToUnpivotT = Aws::Vector<ColumnToUnpivot>>
  void SetColumnsToUnpivot(ColumnsToUnpivotT&& value) {
    m_columnsToUnpivotHasBeenSet = true;
    m_columnsToUnpivot = std::forward<ColumnsToUnpivotT>(value);
  }
  template <typename ColumnsToUnpivotT = Aws::Vector<ColumnToUnpivot>>
  UnpivotOperation& WithColumnsToUnpivot(ColumnsToUnpivotT&& value) {
    SetColumnsToUnpivot(std::forward<ColumnsToUnpivotT>(value));
    return *this;
  }
  template <typename ColumnsToUnpivotT = ColumnToUnpivot>
  UnpivotOperation& AddColumnsToUnpivot(ColumnsToUnpivotT&& value) {
    m_columnsToUnpivotHasBeenSet = true;
    m_columnsToUnpivot.emplace_back(std::forward<ColumnsToUnpivotT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the new column that will contain the unpivoted column names.</p>
   */
  inline const Aws::String& GetUnpivotedLabelColumnName() const { return m_unpivotedLabelColumnName; }
  inline bool UnpivotedLabelColumnNameHasBeenSet() const { return m_unpivotedLabelColumnNameHasBeenSet; }
  template <typename UnpivotedLabelColumnNameT = Aws::String>
  void SetUnpivotedLabelColumnName(UnpivotedLabelColumnNameT&& value) {
    m_unpivotedLabelColumnNameHasBeenSet = true;
    m_unpivotedLabelColumnName = std::forward<UnpivotedLabelColumnNameT>(value);
  }
  template <typename UnpivotedLabelColumnNameT = Aws::String>
  UnpivotOperation& WithUnpivotedLabelColumnName(UnpivotedLabelColumnNameT&& value) {
    SetUnpivotedLabelColumnName(std::forward<UnpivotedLabelColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the new column that will contain the unpivoted column
   * names.</p>
   */
  inline const Aws::String& GetUnpivotedLabelColumnId() const { return m_unpivotedLabelColumnId; }
  inline bool UnpivotedLabelColumnIdHasBeenSet() const { return m_unpivotedLabelColumnIdHasBeenSet; }
  template <typename UnpivotedLabelColumnIdT = Aws::String>
  void SetUnpivotedLabelColumnId(UnpivotedLabelColumnIdT&& value) {
    m_unpivotedLabelColumnIdHasBeenSet = true;
    m_unpivotedLabelColumnId = std::forward<UnpivotedLabelColumnIdT>(value);
  }
  template <typename UnpivotedLabelColumnIdT = Aws::String>
  UnpivotOperation& WithUnpivotedLabelColumnId(UnpivotedLabelColumnIdT&& value) {
    SetUnpivotedLabelColumnId(std::forward<UnpivotedLabelColumnIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the new column that will contain the unpivoted values.</p>
   */
  inline const Aws::String& GetUnpivotedValueColumnName() const { return m_unpivotedValueColumnName; }
  inline bool UnpivotedValueColumnNameHasBeenSet() const { return m_unpivotedValueColumnNameHasBeenSet; }
  template <typename UnpivotedValueColumnNameT = Aws::String>
  void SetUnpivotedValueColumnName(UnpivotedValueColumnNameT&& value) {
    m_unpivotedValueColumnNameHasBeenSet = true;
    m_unpivotedValueColumnName = std::forward<UnpivotedValueColumnNameT>(value);
  }
  template <typename UnpivotedValueColumnNameT = Aws::String>
  UnpivotOperation& WithUnpivotedValueColumnName(UnpivotedValueColumnNameT&& value) {
    SetUnpivotedValueColumnName(std::forward<UnpivotedValueColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the new column that will contain the unpivoted
   * values.</p>
   */
  inline const Aws::String& GetUnpivotedValueColumnId() const { return m_unpivotedValueColumnId; }
  inline bool UnpivotedValueColumnIdHasBeenSet() const { return m_unpivotedValueColumnIdHasBeenSet; }
  template <typename UnpivotedValueColumnIdT = Aws::String>
  void SetUnpivotedValueColumnId(UnpivotedValueColumnIdT&& value) {
    m_unpivotedValueColumnIdHasBeenSet = true;
    m_unpivotedValueColumnId = std::forward<UnpivotedValueColumnIdT>(value);
  }
  template <typename UnpivotedValueColumnIdT = Aws::String>
  UnpivotOperation& WithUnpivotedValueColumnId(UnpivotedValueColumnIdT&& value) {
    SetUnpivotedValueColumnId(std::forward<UnpivotedValueColumnIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;
  bool m_aliasHasBeenSet = false;

  TransformOperationSource m_source;
  bool m_sourceHasBeenSet = false;

  Aws::Vector<ColumnToUnpivot> m_columnsToUnpivot;
  bool m_columnsToUnpivotHasBeenSet = false;

  Aws::String m_unpivotedLabelColumnName;
  bool m_unpivotedLabelColumnNameHasBeenSet = false;

  Aws::String m_unpivotedLabelColumnId;
  bool m_unpivotedLabelColumnIdHasBeenSet = false;

  Aws::String m_unpivotedValueColumnName;
  bool m_unpivotedValueColumnNameHasBeenSet = false;

  Aws::String m_unpivotedValueColumnId;
  bool m_unpivotedValueColumnIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
