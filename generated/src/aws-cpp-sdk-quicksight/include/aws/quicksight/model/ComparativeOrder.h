/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnOrderingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/UndefinedSpecifiedValueType.h>
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
   * <p>A structure that represents a comparative order.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComparativeOrder">AWS
   * API Reference</a></p>
   */
  class ComparativeOrder
  {
  public:
    AWS_QUICKSIGHT_API ComparativeOrder();
    AWS_QUICKSIGHT_API ComparativeOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComparativeOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ordering type for a column. Valid values for this structure are
     * <code>GREATER_IS_BETTER</code>, <code>LESSER_IS_BETTER</code> and
     * <code>SPECIFIED</code>.</p>
     */
    inline const ColumnOrderingType& GetUseOrdering() const{ return m_useOrdering; }

    /**
     * <p>The ordering type for a column. Valid values for this structure are
     * <code>GREATER_IS_BETTER</code>, <code>LESSER_IS_BETTER</code> and
     * <code>SPECIFIED</code>.</p>
     */
    inline bool UseOrderingHasBeenSet() const { return m_useOrderingHasBeenSet; }

    /**
     * <p>The ordering type for a column. Valid values for this structure are
     * <code>GREATER_IS_BETTER</code>, <code>LESSER_IS_BETTER</code> and
     * <code>SPECIFIED</code>.</p>
     */
    inline void SetUseOrdering(const ColumnOrderingType& value) { m_useOrderingHasBeenSet = true; m_useOrdering = value; }

    /**
     * <p>The ordering type for a column. Valid values for this structure are
     * <code>GREATER_IS_BETTER</code>, <code>LESSER_IS_BETTER</code> and
     * <code>SPECIFIED</code>.</p>
     */
    inline void SetUseOrdering(ColumnOrderingType&& value) { m_useOrderingHasBeenSet = true; m_useOrdering = std::move(value); }

    /**
     * <p>The ordering type for a column. Valid values for this structure are
     * <code>GREATER_IS_BETTER</code>, <code>LESSER_IS_BETTER</code> and
     * <code>SPECIFIED</code>.</p>
     */
    inline ComparativeOrder& WithUseOrdering(const ColumnOrderingType& value) { SetUseOrdering(value); return *this;}

    /**
     * <p>The ordering type for a column. Valid values for this structure are
     * <code>GREATER_IS_BETTER</code>, <code>LESSER_IS_BETTER</code> and
     * <code>SPECIFIED</code>.</p>
     */
    inline ComparativeOrder& WithUseOrdering(ColumnOrderingType&& value) { SetUseOrdering(std::move(value)); return *this;}


    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpecifedOrder() const{ return m_specifedOrder; }

    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline bool SpecifedOrderHasBeenSet() const { return m_specifedOrderHasBeenSet; }

    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline void SetSpecifedOrder(const Aws::Vector<Aws::String>& value) { m_specifedOrderHasBeenSet = true; m_specifedOrder = value; }

    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline void SetSpecifedOrder(Aws::Vector<Aws::String>&& value) { m_specifedOrderHasBeenSet = true; m_specifedOrder = std::move(value); }

    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline ComparativeOrder& WithSpecifedOrder(const Aws::Vector<Aws::String>& value) { SetSpecifedOrder(value); return *this;}

    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline ComparativeOrder& WithSpecifedOrder(Aws::Vector<Aws::String>&& value) { SetSpecifedOrder(std::move(value)); return *this;}

    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline ComparativeOrder& AddSpecifedOrder(const Aws::String& value) { m_specifedOrderHasBeenSet = true; m_specifedOrder.push_back(value); return *this; }

    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline ComparativeOrder& AddSpecifedOrder(Aws::String&& value) { m_specifedOrderHasBeenSet = true; m_specifedOrder.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline ComparativeOrder& AddSpecifedOrder(const char* value) { m_specifedOrderHasBeenSet = true; m_specifedOrder.push_back(value); return *this; }


    /**
     * <p>The treat of undefined specified values. Valid values for this structure are
     * <code>LEAST</code> and <code>MOST</code>.</p>
     */
    inline const UndefinedSpecifiedValueType& GetTreatUndefinedSpecifiedValues() const{ return m_treatUndefinedSpecifiedValues; }

    /**
     * <p>The treat of undefined specified values. Valid values for this structure are
     * <code>LEAST</code> and <code>MOST</code>.</p>
     */
    inline bool TreatUndefinedSpecifiedValuesHasBeenSet() const { return m_treatUndefinedSpecifiedValuesHasBeenSet; }

    /**
     * <p>The treat of undefined specified values. Valid values for this structure are
     * <code>LEAST</code> and <code>MOST</code>.</p>
     */
    inline void SetTreatUndefinedSpecifiedValues(const UndefinedSpecifiedValueType& value) { m_treatUndefinedSpecifiedValuesHasBeenSet = true; m_treatUndefinedSpecifiedValues = value; }

    /**
     * <p>The treat of undefined specified values. Valid values for this structure are
     * <code>LEAST</code> and <code>MOST</code>.</p>
     */
    inline void SetTreatUndefinedSpecifiedValues(UndefinedSpecifiedValueType&& value) { m_treatUndefinedSpecifiedValuesHasBeenSet = true; m_treatUndefinedSpecifiedValues = std::move(value); }

    /**
     * <p>The treat of undefined specified values. Valid values for this structure are
     * <code>LEAST</code> and <code>MOST</code>.</p>
     */
    inline ComparativeOrder& WithTreatUndefinedSpecifiedValues(const UndefinedSpecifiedValueType& value) { SetTreatUndefinedSpecifiedValues(value); return *this;}

    /**
     * <p>The treat of undefined specified values. Valid values for this structure are
     * <code>LEAST</code> and <code>MOST</code>.</p>
     */
    inline ComparativeOrder& WithTreatUndefinedSpecifiedValues(UndefinedSpecifiedValueType&& value) { SetTreatUndefinedSpecifiedValues(std::move(value)); return *this;}

  private:

    ColumnOrderingType m_useOrdering;
    bool m_useOrderingHasBeenSet = false;

    Aws::Vector<Aws::String> m_specifedOrder;
    bool m_specifedOrderHasBeenSet = false;

    UndefinedSpecifiedValueType m_treatUndefinedSpecifiedValues;
    bool m_treatUndefinedSpecifiedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
