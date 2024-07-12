/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Identifier.h>
#include <aws/quicksight/model/TopicSortDirection.h>
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
   * <p>The definition for a <code>TopicSortClause</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicSortClause">AWS
   * API Reference</a></p>
   */
  class TopicSortClause
  {
  public:
    AWS_QUICKSIGHT_API TopicSortClause();
    AWS_QUICKSIGHT_API TopicSortClause(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicSortClause& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operand for a <code>TopicSortClause</code>.</p>
     */
    inline const Identifier& GetOperand() const{ return m_operand; }
    inline bool OperandHasBeenSet() const { return m_operandHasBeenSet; }
    inline void SetOperand(const Identifier& value) { m_operandHasBeenSet = true; m_operand = value; }
    inline void SetOperand(Identifier&& value) { m_operandHasBeenSet = true; m_operand = std::move(value); }
    inline TopicSortClause& WithOperand(const Identifier& value) { SetOperand(value); return *this;}
    inline TopicSortClause& WithOperand(Identifier&& value) { SetOperand(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction for the <code>TopicSortClause</code>.</p>
     */
    inline const TopicSortDirection& GetSortDirection() const{ return m_sortDirection; }
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }
    inline void SetSortDirection(const TopicSortDirection& value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }
    inline void SetSortDirection(TopicSortDirection&& value) { m_sortDirectionHasBeenSet = true; m_sortDirection = std::move(value); }
    inline TopicSortClause& WithSortDirection(const TopicSortDirection& value) { SetSortDirection(value); return *this;}
    inline TopicSortClause& WithSortDirection(TopicSortDirection&& value) { SetSortDirection(std::move(value)); return *this;}
    ///@}
  private:

    Identifier m_operand;
    bool m_operandHasBeenSet = false;

    TopicSortDirection m_sortDirection;
    bool m_sortDirectionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
