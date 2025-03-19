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
    AWS_QUICKSIGHT_API ComparativeOrder() = default;
    AWS_QUICKSIGHT_API ComparativeOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComparativeOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ordering type for a column. Valid values for this structure are
     * <code>GREATER_IS_BETTER</code>, <code>LESSER_IS_BETTER</code> and
     * <code>SPECIFIED</code>.</p>
     */
    inline ColumnOrderingType GetUseOrdering() const { return m_useOrdering; }
    inline bool UseOrderingHasBeenSet() const { return m_useOrderingHasBeenSet; }
    inline void SetUseOrdering(ColumnOrderingType value) { m_useOrderingHasBeenSet = true; m_useOrdering = value; }
    inline ComparativeOrder& WithUseOrdering(ColumnOrderingType value) { SetUseOrdering(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of columns to be used in the ordering.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpecifedOrder() const { return m_specifedOrder; }
    inline bool SpecifedOrderHasBeenSet() const { return m_specifedOrderHasBeenSet; }
    template<typename SpecifedOrderT = Aws::Vector<Aws::String>>
    void SetSpecifedOrder(SpecifedOrderT&& value) { m_specifedOrderHasBeenSet = true; m_specifedOrder = std::forward<SpecifedOrderT>(value); }
    template<typename SpecifedOrderT = Aws::Vector<Aws::String>>
    ComparativeOrder& WithSpecifedOrder(SpecifedOrderT&& value) { SetSpecifedOrder(std::forward<SpecifedOrderT>(value)); return *this;}
    template<typename SpecifedOrderT = Aws::String>
    ComparativeOrder& AddSpecifedOrder(SpecifedOrderT&& value) { m_specifedOrderHasBeenSet = true; m_specifedOrder.emplace_back(std::forward<SpecifedOrderT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The treat of undefined specified values. Valid values for this structure are
     * <code>LEAST</code> and <code>MOST</code>.</p>
     */
    inline UndefinedSpecifiedValueType GetTreatUndefinedSpecifiedValues() const { return m_treatUndefinedSpecifiedValues; }
    inline bool TreatUndefinedSpecifiedValuesHasBeenSet() const { return m_treatUndefinedSpecifiedValuesHasBeenSet; }
    inline void SetTreatUndefinedSpecifiedValues(UndefinedSpecifiedValueType value) { m_treatUndefinedSpecifiedValuesHasBeenSet = true; m_treatUndefinedSpecifiedValues = value; }
    inline ComparativeOrder& WithTreatUndefinedSpecifiedValues(UndefinedSpecifiedValueType value) { SetTreatUndefinedSpecifiedValues(value); return *this;}
    ///@}
  private:

    ColumnOrderingType m_useOrdering{ColumnOrderingType::NOT_SET};
    bool m_useOrderingHasBeenSet = false;

    Aws::Vector<Aws::String> m_specifedOrder;
    bool m_specifedOrderHasBeenSet = false;

    UndefinedSpecifiedValueType m_treatUndefinedSpecifiedValues{UndefinedSpecifiedValueType::NOT_SET};
    bool m_treatUndefinedSpecifiedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
