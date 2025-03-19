/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WaterfallChartGroupColorConfiguration.h>
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
   * <p>The color configuration of a waterfall visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WaterfallChartColorConfiguration">AWS
   * API Reference</a></p>
   */
  class WaterfallChartColorConfiguration
  {
  public:
    AWS_QUICKSIGHT_API WaterfallChartColorConfiguration() = default;
    AWS_QUICKSIGHT_API WaterfallChartColorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartColorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color configuration for individual groups within a waterfall visual.</p>
     */
    inline const WaterfallChartGroupColorConfiguration& GetGroupColorConfiguration() const { return m_groupColorConfiguration; }
    inline bool GroupColorConfigurationHasBeenSet() const { return m_groupColorConfigurationHasBeenSet; }
    template<typename GroupColorConfigurationT = WaterfallChartGroupColorConfiguration>
    void SetGroupColorConfiguration(GroupColorConfigurationT&& value) { m_groupColorConfigurationHasBeenSet = true; m_groupColorConfiguration = std::forward<GroupColorConfigurationT>(value); }
    template<typename GroupColorConfigurationT = WaterfallChartGroupColorConfiguration>
    WaterfallChartColorConfiguration& WithGroupColorConfiguration(GroupColorConfigurationT&& value) { SetGroupColorConfiguration(std::forward<GroupColorConfigurationT>(value)); return *this;}
    ///@}
  private:

    WaterfallChartGroupColorConfiguration m_groupColorConfiguration;
    bool m_groupColorConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
