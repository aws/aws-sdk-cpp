/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/SortDirection.h>
#include <aws/quicksight/model/AggregationFunction.h>
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
   * <p>The sort configuration for a column that is not used in a field
   * well.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnSort">AWS
   * API Reference</a></p>
   */
  class ColumnSort
  {
  public:
    AWS_QUICKSIGHT_API ColumnSort() = default;
    AWS_QUICKSIGHT_API ColumnSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ColumnIdentifier& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = ColumnIdentifier>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = ColumnIdentifier>
    ColumnSort& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction.</p>
     */
    inline SortDirection GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(SortDirection value) { m_directionHasBeenSet = true; m_direction = value; }
    inline ColumnSort& WithDirection(SortDirection value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function that is defined in the column sort.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const { return m_aggregationFunction; }
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }
    template<typename AggregationFunctionT = AggregationFunction>
    void SetAggregationFunction(AggregationFunctionT&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::forward<AggregationFunctionT>(value); }
    template<typename AggregationFunctionT = AggregationFunction>
    ColumnSort& WithAggregationFunction(AggregationFunctionT&& value) { SetAggregationFunction(std::forward<AggregationFunctionT>(value)); return *this;}
    ///@}
  private:

    ColumnIdentifier m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortDirection m_direction{SortDirection::NOT_SET};
    bool m_directionHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
