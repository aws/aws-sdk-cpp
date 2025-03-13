/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ItemsLimitConfiguration.h>
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
   * <p>The sort configuration of a heat map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HeatMapSortConfiguration">AWS
   * API Reference</a></p>
   */
  class HeatMapSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API HeatMapSortConfiguration() = default;
    AWS_QUICKSIGHT_API HeatMapSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeatMapSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field sort configuration of the rows fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetHeatMapRowSort() const { return m_heatMapRowSort; }
    inline bool HeatMapRowSortHasBeenSet() const { return m_heatMapRowSortHasBeenSet; }
    template<typename HeatMapRowSortT = Aws::Vector<FieldSortOptions>>
    void SetHeatMapRowSort(HeatMapRowSortT&& value) { m_heatMapRowSortHasBeenSet = true; m_heatMapRowSort = std::forward<HeatMapRowSortT>(value); }
    template<typename HeatMapRowSortT = Aws::Vector<FieldSortOptions>>
    HeatMapSortConfiguration& WithHeatMapRowSort(HeatMapRowSortT&& value) { SetHeatMapRowSort(std::forward<HeatMapRowSortT>(value)); return *this;}
    template<typename HeatMapRowSortT = FieldSortOptions>
    HeatMapSortConfiguration& AddHeatMapRowSort(HeatMapRowSortT&& value) { m_heatMapRowSortHasBeenSet = true; m_heatMapRowSort.emplace_back(std::forward<HeatMapRowSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The column sort configuration for heat map for columns that aren't a part of
     * a field well.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetHeatMapColumnSort() const { return m_heatMapColumnSort; }
    inline bool HeatMapColumnSortHasBeenSet() const { return m_heatMapColumnSortHasBeenSet; }
    template<typename HeatMapColumnSortT = Aws::Vector<FieldSortOptions>>
    void SetHeatMapColumnSort(HeatMapColumnSortT&& value) { m_heatMapColumnSortHasBeenSet = true; m_heatMapColumnSort = std::forward<HeatMapColumnSortT>(value); }
    template<typename HeatMapColumnSortT = Aws::Vector<FieldSortOptions>>
    HeatMapSortConfiguration& WithHeatMapColumnSort(HeatMapColumnSortT&& value) { SetHeatMapColumnSort(std::forward<HeatMapColumnSortT>(value)); return *this;}
    template<typename HeatMapColumnSortT = FieldSortOptions>
    HeatMapSortConfiguration& AddHeatMapColumnSort(HeatMapColumnSortT&& value) { m_heatMapColumnSortHasBeenSet = true; m_heatMapColumnSort.emplace_back(std::forward<HeatMapColumnSortT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The limit on the number of rows that are displayed in a heat map.</p>
     */
    inline const ItemsLimitConfiguration& GetHeatMapRowItemsLimitConfiguration() const { return m_heatMapRowItemsLimitConfiguration; }
    inline bool HeatMapRowItemsLimitConfigurationHasBeenSet() const { return m_heatMapRowItemsLimitConfigurationHasBeenSet; }
    template<typename HeatMapRowItemsLimitConfigurationT = ItemsLimitConfiguration>
    void SetHeatMapRowItemsLimitConfiguration(HeatMapRowItemsLimitConfigurationT&& value) { m_heatMapRowItemsLimitConfigurationHasBeenSet = true; m_heatMapRowItemsLimitConfiguration = std::forward<HeatMapRowItemsLimitConfigurationT>(value); }
    template<typename HeatMapRowItemsLimitConfigurationT = ItemsLimitConfiguration>
    HeatMapSortConfiguration& WithHeatMapRowItemsLimitConfiguration(HeatMapRowItemsLimitConfigurationT&& value) { SetHeatMapRowItemsLimitConfiguration(std::forward<HeatMapRowItemsLimitConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit on the number of columns that are displayed in a heat map.</p>
     */
    inline const ItemsLimitConfiguration& GetHeatMapColumnItemsLimitConfiguration() const { return m_heatMapColumnItemsLimitConfiguration; }
    inline bool HeatMapColumnItemsLimitConfigurationHasBeenSet() const { return m_heatMapColumnItemsLimitConfigurationHasBeenSet; }
    template<typename HeatMapColumnItemsLimitConfigurationT = ItemsLimitConfiguration>
    void SetHeatMapColumnItemsLimitConfiguration(HeatMapColumnItemsLimitConfigurationT&& value) { m_heatMapColumnItemsLimitConfigurationHasBeenSet = true; m_heatMapColumnItemsLimitConfiguration = std::forward<HeatMapColumnItemsLimitConfigurationT>(value); }
    template<typename HeatMapColumnItemsLimitConfigurationT = ItemsLimitConfiguration>
    HeatMapSortConfiguration& WithHeatMapColumnItemsLimitConfiguration(HeatMapColumnItemsLimitConfigurationT&& value) { SetHeatMapColumnItemsLimitConfiguration(std::forward<HeatMapColumnItemsLimitConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldSortOptions> m_heatMapRowSort;
    bool m_heatMapRowSortHasBeenSet = false;

    Aws::Vector<FieldSortOptions> m_heatMapColumnSort;
    bool m_heatMapColumnSortHasBeenSet = false;

    ItemsLimitConfiguration m_heatMapRowItemsLimitConfiguration;
    bool m_heatMapRowItemsLimitConfigurationHasBeenSet = false;

    ItemsLimitConfiguration m_heatMapColumnItemsLimitConfiguration;
    bool m_heatMapColumnItemsLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
