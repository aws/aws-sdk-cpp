/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnSort.h>
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
   * <p>Describes the <b>Category</b> dataset column and constraints for the dynamic
   * values used to repeat the contents of a section.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BodySectionDynamicCategoryDimensionConfiguration">AWS
   * API Reference</a></p>
   */
  class BodySectionDynamicCategoryDimensionConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BodySectionDynamicCategoryDimensionConfiguration() = default;
    AWS_QUICKSIGHT_API BodySectionDynamicCategoryDimensionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BodySectionDynamicCategoryDimensionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    BodySectionDynamicCategoryDimensionConfiguration& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of values to use from the column for repetition.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline BodySectionDynamicCategoryDimensionConfiguration& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort criteria on the column values that you use for repetition. </p>
     */
    inline const Aws::Vector<ColumnSort>& GetSortByMetrics() const { return m_sortByMetrics; }
    inline bool SortByMetricsHasBeenSet() const { return m_sortByMetricsHasBeenSet; }
    template<typename SortByMetricsT = Aws::Vector<ColumnSort>>
    void SetSortByMetrics(SortByMetricsT&& value) { m_sortByMetricsHasBeenSet = true; m_sortByMetrics = std::forward<SortByMetricsT>(value); }
    template<typename SortByMetricsT = Aws::Vector<ColumnSort>>
    BodySectionDynamicCategoryDimensionConfiguration& WithSortByMetrics(SortByMetricsT&& value) { SetSortByMetrics(std::forward<SortByMetricsT>(value)); return *this;}
    template<typename SortByMetricsT = ColumnSort>
    BodySectionDynamicCategoryDimensionConfiguration& AddSortByMetrics(SortByMetricsT&& value) { m_sortByMetricsHasBeenSet = true; m_sortByMetrics.emplace_back(std::forward<SortByMetricsT>(value)); return *this; }
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::Vector<ColumnSort> m_sortByMetrics;
    bool m_sortByMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
