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
   * <p>The configuration options to sort aggregated values.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AggregationSortConfiguration">AWS
   * API Reference</a></p>
   */
  class AggregationSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AggregationSortConfiguration() = default;
    AWS_QUICKSIGHT_API AggregationSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AggregationSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column that determines the sort order of aggregated values.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    AggregationSortConfiguration& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction of values.</p> <ul> <li> <p> <code>ASC</code>: Sort in
     * ascending order.</p> </li> <li> <p> <code>DESC</code>: Sort in descending
     * order.</p> </li> </ul>
     */
    inline SortDirection GetSortDirection() const { return m_sortDirection; }
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }
    inline void SetSortDirection(SortDirection value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }
    inline AggregationSortConfiguration& WithSortDirection(SortDirection value) { SetSortDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function that aggregates the values in <code>Column</code>.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const { return m_aggregationFunction; }
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }
    template<typename AggregationFunctionT = AggregationFunction>
    void SetAggregationFunction(AggregationFunctionT&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::forward<AggregationFunctionT>(value); }
    template<typename AggregationFunctionT = AggregationFunction>
    AggregationSortConfiguration& WithAggregationFunction(AggregationFunctionT&& value) { SetAggregationFunction(std::forward<AggregationFunctionT>(value)); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    SortDirection m_sortDirection{SortDirection::NOT_SET};
    bool m_sortDirectionHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
