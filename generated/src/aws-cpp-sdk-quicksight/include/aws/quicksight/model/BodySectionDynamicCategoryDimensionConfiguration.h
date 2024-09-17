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
    AWS_QUICKSIGHT_API BodySectionDynamicCategoryDimensionConfiguration();
    AWS_QUICKSIGHT_API BodySectionDynamicCategoryDimensionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BodySectionDynamicCategoryDimensionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline BodySectionDynamicCategoryDimensionConfiguration& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline BodySectionDynamicCategoryDimensionConfiguration& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of values to use from the column for repetition.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline BodySectionDynamicCategoryDimensionConfiguration& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort criteria on the column values that you use for repetition. </p>
     */
    inline const Aws::Vector<ColumnSort>& GetSortByMetrics() const{ return m_sortByMetrics; }
    inline bool SortByMetricsHasBeenSet() const { return m_sortByMetricsHasBeenSet; }
    inline void SetSortByMetrics(const Aws::Vector<ColumnSort>& value) { m_sortByMetricsHasBeenSet = true; m_sortByMetrics = value; }
    inline void SetSortByMetrics(Aws::Vector<ColumnSort>&& value) { m_sortByMetricsHasBeenSet = true; m_sortByMetrics = std::move(value); }
    inline BodySectionDynamicCategoryDimensionConfiguration& WithSortByMetrics(const Aws::Vector<ColumnSort>& value) { SetSortByMetrics(value); return *this;}
    inline BodySectionDynamicCategoryDimensionConfiguration& WithSortByMetrics(Aws::Vector<ColumnSort>&& value) { SetSortByMetrics(std::move(value)); return *this;}
    inline BodySectionDynamicCategoryDimensionConfiguration& AddSortByMetrics(const ColumnSort& value) { m_sortByMetricsHasBeenSet = true; m_sortByMetrics.push_back(value); return *this; }
    inline BodySectionDynamicCategoryDimensionConfiguration& AddSortByMetrics(ColumnSort&& value) { m_sortByMetricsHasBeenSet = true; m_sortByMetrics.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::Vector<ColumnSort> m_sortByMetrics;
    bool m_sortByMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
