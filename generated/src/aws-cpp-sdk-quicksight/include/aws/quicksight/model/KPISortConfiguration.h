/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/FieldSortOptions.h>
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
   * <p>The sort configuration of a KPI visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPISortConfiguration">AWS
   * API Reference</a></p>
   */
  class KPISortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API KPISortConfiguration();
    AWS_QUICKSIGHT_API KPISortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPISortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetTrendGroupSort() const{ return m_trendGroupSort; }

    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline bool TrendGroupSortHasBeenSet() const { return m_trendGroupSortHasBeenSet; }

    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline void SetTrendGroupSort(const Aws::Vector<FieldSortOptions>& value) { m_trendGroupSortHasBeenSet = true; m_trendGroupSort = value; }

    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline void SetTrendGroupSort(Aws::Vector<FieldSortOptions>&& value) { m_trendGroupSortHasBeenSet = true; m_trendGroupSort = std::move(value); }

    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline KPISortConfiguration& WithTrendGroupSort(const Aws::Vector<FieldSortOptions>& value) { SetTrendGroupSort(value); return *this;}

    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline KPISortConfiguration& WithTrendGroupSort(Aws::Vector<FieldSortOptions>&& value) { SetTrendGroupSort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline KPISortConfiguration& AddTrendGroupSort(const FieldSortOptions& value) { m_trendGroupSortHasBeenSet = true; m_trendGroupSort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline KPISortConfiguration& AddTrendGroupSort(FieldSortOptions&& value) { m_trendGroupSortHasBeenSet = true; m_trendGroupSort.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FieldSortOptions> m_trendGroupSort;
    bool m_trendGroupSortHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
