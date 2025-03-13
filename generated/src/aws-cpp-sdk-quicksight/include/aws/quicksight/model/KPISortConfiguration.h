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
    AWS_QUICKSIGHT_API KPISortConfiguration() = default;
    AWS_QUICKSIGHT_API KPISortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPISortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration of the trend group fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetTrendGroupSort() const { return m_trendGroupSort; }
    inline bool TrendGroupSortHasBeenSet() const { return m_trendGroupSortHasBeenSet; }
    template<typename TrendGroupSortT = Aws::Vector<FieldSortOptions>>
    void SetTrendGroupSort(TrendGroupSortT&& value) { m_trendGroupSortHasBeenSet = true; m_trendGroupSort = std::forward<TrendGroupSortT>(value); }
    template<typename TrendGroupSortT = Aws::Vector<FieldSortOptions>>
    KPISortConfiguration& WithTrendGroupSort(TrendGroupSortT&& value) { SetTrendGroupSort(std::forward<TrendGroupSortT>(value)); return *this;}
    template<typename TrendGroupSortT = FieldSortOptions>
    KPISortConfiguration& AddTrendGroupSort(TrendGroupSortT&& value) { m_trendGroupSortHasBeenSet = true; m_trendGroupSort.emplace_back(std::forward<TrendGroupSortT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_trendGroupSort;
    bool m_trendGroupSortHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
