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
    AWS_QUICKSIGHT_API CalculatedColumn();
    AWS_QUICKSIGHT_API CalculatedColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CalculatedColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Column name.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>Column name.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>Column name.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>Column name.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>Column name.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>Column name.</p>
     */
    inline CalculatedColumn& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>Column name.</p>
     */
    inline CalculatedColumn& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>Column name.</p>
     */
    inline CalculatedColumn& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline const Aws::String& GetColumnId() const{ return m_columnId; }

    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline bool ColumnIdHasBeenSet() const { return m_columnIdHasBeenSet; }

    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline void SetColumnId(const Aws::String& value) { m_columnIdHasBeenSet = true; m_columnId = value; }

    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline void SetColumnId(Aws::String&& value) { m_columnIdHasBeenSet = true; m_columnId = std::move(value); }

    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline void SetColumnId(const char* value) { m_columnIdHasBeenSet = true; m_columnId.assign(value); }

    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline CalculatedColumn& WithColumnId(const Aws::String& value) { SetColumnId(value); return *this;}

    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline CalculatedColumn& WithColumnId(Aws::String&& value) { SetColumnId(std::move(value)); return *this;}

    /**
     * <p>A unique ID to identify a calculated column. During a dataset update, if the
     * column ID of a calculated column matches that of an existing calculated column,
     * Amazon QuickSight preserves the existing calculated column.</p>
     */
    inline CalculatedColumn& WithColumnId(const char* value) { SetColumnId(value); return *this;}


    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline CalculatedColumn& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline CalculatedColumn& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>An expression that defines the calculated column.</p>
     */
    inline CalculatedColumn& WithExpression(const char* value) { SetExpression(value); return *this;}

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
