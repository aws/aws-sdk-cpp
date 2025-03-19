/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A calculated column for a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CalculatedColumn">AWS
   * API Reference</a></p>
   */
  class CalculatedColumn
  {
  public:
    AWS_QUICKSIGHT_API CalculatedColumn() = default;
    AWS_QUICKSIGHT_API CalculatedColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CalculatedColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Column name.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    CalculatedColumn& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline const Aws::String& GetColumnId() const { return m_columnId; }
    inline bool ColumnIdHasBeenSet() const { return m_columnIdHasBeenSet; }
    template<typename ColumnIdT = Aws::String>
    void SetColumnId(ColumnIdT&& value) { m_columnIdHasBeenSet = true; m_columnId = std::forward<ColumnIdT>(value); }
    template<typename ColumnIdT = Aws::String>
    CalculatedColumn& WithColumnId(ColumnIdT&& value) { SetColumnId(std::forward<ColumnIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    CalculatedColumn& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnId;
    bool m_columnIdHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
