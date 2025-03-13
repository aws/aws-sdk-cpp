/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ItemsLimitConfiguration.h>
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
   * <p>The sort configuration of a scatter plot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScatterPlotSortConfiguration">AWS
   * API Reference</a></p>
   */
  class ScatterPlotSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ScatterPlotSortConfiguration() = default;
    AWS_QUICKSIGHT_API ScatterPlotSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ItemsLimitConfiguration& GetScatterPlotLimitConfiguration() const { return m_scatterPlotLimitConfiguration; }
    inline bool ScatterPlotLimitConfigurationHasBeenSet() const { return m_scatterPlotLimitConfigurationHasBeenSet; }
    template<typename ScatterPlotLimitConfigurationT = ItemsLimitConfiguration>
    void SetScatterPlotLimitConfiguration(ScatterPlotLimitConfigurationT&& value) { m_scatterPlotLimitConfigurationHasBeenSet = true; m_scatterPlotLimitConfiguration = std::forward<ScatterPlotLimitConfigurationT>(value); }
    template<typename ScatterPlotLimitConfigurationT = ItemsLimitConfiguration>
    ScatterPlotSortConfiguration& WithScatterPlotLimitConfiguration(ScatterPlotLimitConfigurationT&& value) { SetScatterPlotLimitConfiguration(std::forward<ScatterPlotLimitConfigurationT>(value)); return *this;}
    ///@}
  private:

    ItemsLimitConfiguration m_scatterPlotLimitConfiguration;
    bool m_scatterPlotLimitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
