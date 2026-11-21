/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnDataSubType.h>
#include <aws/quicksight/model/ColumnDataType.h>

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
 * <p>A calculated column that is not materialized in the prepared data. The column
 * is computed at analysis time and can use aggregate expressions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UnmaterializedCalculatedColumn">AWS
 * API Reference</a></p>
 */
class UnmaterializedCalculatedColumn {
 public:
  AWS_QUICKSIGHT_API UnmaterializedCalculatedColumn() = default;
  AWS_QUICKSIGHT_API UnmaterializedCalculatedColumn(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API UnmaterializedCalculatedColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique ID to identify the unmaterialized calculated column.</p>
   */
  inline const Aws::String& GetColumnId() const { return m_columnId; }
  inline bool ColumnIdHasBeenSet() const { return m_columnIdHasBeenSet; }
  template <typename ColumnIdT = Aws::String>
  void SetColumnId(ColumnIdT&& value) {
    m_columnIdHasBeenSet = true;
    m_columnId = std::forward<ColumnIdT>(value);
  }
  template <typename ColumnIdT = Aws::String>
  UnmaterializedCalculatedColumn& WithColumnId(ColumnIdT&& value) {
    SetColumnId(std::forward<ColumnIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the unmaterialized calculated column.</p>
   */
  inline const Aws::String& GetColumnName() const { return m_columnName; }
  inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
  template <typename ColumnNameT = Aws::String>
  void SetColumnName(ColumnNameT&& value) {
    m_columnNameHasBeenSet = true;
    m_columnName = std::forward<ColumnNameT>(value);
  }
  template <typename ColumnNameT = Aws::String>
  UnmaterializedCalculatedColumn& WithColumnName(ColumnNameT&& value) {
    SetColumnName(std::forward<ColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An expression that defines the unmaterialized calculated column.</p>
   */
  inline const Aws::String& GetExpression() const { return m_expression; }
  inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
  template <typename ExpressionT = Aws::String>
  void SetExpression(ExpressionT&& value) {
    m_expressionHasBeenSet = true;
    m_expression = std::forward<ExpressionT>(value);
  }
  template <typename ExpressionT = Aws::String>
  UnmaterializedCalculatedColumn& WithExpression(ExpressionT&& value) {
    SetExpression(std::forward<ExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the unmaterialized calculated column.</p>
   */
  inline ColumnDataType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ColumnDataType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UnmaterializedCalculatedColumn& WithType(ColumnDataType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sub data type of the unmaterialized calculated column.</p>
   */
  inline ColumnDataSubType GetSubType() const { return m_subType; }
  inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
  inline void SetSubType(ColumnDataSubType value) {
    m_subTypeHasBeenSet = true;
    m_subType = value;
  }
  inline UnmaterializedCalculatedColumn& WithSubType(ColumnDataSubType value) {
    SetSubType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_columnId;

  Aws::String m_columnName;

  Aws::String m_expression;

  ColumnDataType m_type{ColumnDataType::NOT_SET};

  ColumnDataSubType m_subType{ColumnDataSubType::NOT_SET};
  bool m_columnIdHasBeenSet = false;
  bool m_columnNameHasBeenSet = false;
  bool m_expressionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_subTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
