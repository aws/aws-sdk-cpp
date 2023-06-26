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
    AWS_QUICKSIGHT_API AggregationSortConfiguration();
    AWS_QUICKSIGHT_API AggregationSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AggregationSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column that determines the sort order of aggregated values.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that determines the sort order of aggregated values.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that determines the sort order of aggregated values.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that determines the sort order of aggregated values.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that determines the sort order of aggregated values.</p>
     */
    inline AggregationSortConfiguration& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that determines the sort order of aggregated values.</p>
     */
    inline AggregationSortConfiguration& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The sort direction of values.</p> <ul> <li> <p> <code>ASC</code>: Sort in
     * ascending order.</p> </li> <li> <p> <code>DESC</code>: Sort in descending
     * order.</p> </li> </ul>
     */
    inline const SortDirection& GetSortDirection() const{ return m_sortDirection; }

    /**
     * <p>The sort direction of values.</p> <ul> <li> <p> <code>ASC</code>: Sort in
     * ascending order.</p> </li> <li> <p> <code>DESC</code>: Sort in descending
     * order.</p> </li> </ul>
     */
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }

    /**
     * <p>The sort direction of values.</p> <ul> <li> <p> <code>ASC</code>: Sort in
     * ascending order.</p> </li> <li> <p> <code>DESC</code>: Sort in descending
     * order.</p> </li> </ul>
     */
    inline void SetSortDirection(const SortDirection& value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }

    /**
     * <p>The sort direction of values.</p> <ul> <li> <p> <code>ASC</code>: Sort in
     * ascending order.</p> </li> <li> <p> <code>DESC</code>: Sort in descending
     * order.</p> </li> </ul>
     */
    inline void SetSortDirection(SortDirection&& value) { m_sortDirectionHasBeenSet = true; m_sortDirection = std::move(value); }

    /**
     * <p>The sort direction of values.</p> <ul> <li> <p> <code>ASC</code>: Sort in
     * ascending order.</p> </li> <li> <p> <code>DESC</code>: Sort in descending
     * order.</p> </li> </ul>
     */
    inline AggregationSortConfiguration& WithSortDirection(const SortDirection& value) { SetSortDirection(value); return *this;}

    /**
     * <p>The sort direction of values.</p> <ul> <li> <p> <code>ASC</code>: Sort in
     * ascending order.</p> </li> <li> <p> <code>DESC</code>: Sort in descending
     * order.</p> </li> </ul>
     */
    inline AggregationSortConfiguration& WithSortDirection(SortDirection&& value) { SetSortDirection(std::move(value)); return *this;}


    /**
     * <p>The function that aggregates the values in <code>Column</code>.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const{ return m_aggregationFunction; }

    /**
     * <p>The function that aggregates the values in <code>Column</code>.</p>
     */
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }

    /**
     * <p>The function that aggregates the values in <code>Column</code>.</p>
     */
    inline void SetAggregationFunction(const AggregationFunction& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = value; }

    /**
     * <p>The function that aggregates the values in <code>Column</code>.</p>
     */
    inline void SetAggregationFunction(AggregationFunction&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::move(value); }

    /**
     * <p>The function that aggregates the values in <code>Column</code>.</p>
     */
    inline AggregationSortConfiguration& WithAggregationFunction(const AggregationFunction& value) { SetAggregationFunction(value); return *this;}

    /**
     * <p>The function that aggregates the values in <code>Column</code>.</p>
     */
    inline AggregationSortConfiguration& WithAggregationFunction(AggregationFunction&& value) { SetAggregationFunction(std::move(value)); return *this;}

  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    SortDirection m_sortDirection;
    bool m_sortDirectionHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
