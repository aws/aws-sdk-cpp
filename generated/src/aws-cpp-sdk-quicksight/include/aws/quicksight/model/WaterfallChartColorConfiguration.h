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
    AWS_QUICKSIGHT_API WaterfallChartColorConfiguration();
    AWS_QUICKSIGHT_API WaterfallChartColorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartColorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The color configuration for individual groups within a waterfall visual.</p>
     */
    inline const WaterfallChartGroupColorConfiguration& GetGroupColorConfiguration() const{ return m_groupColorConfiguration; }

    /**
     * <p>The color configuration for individual groups within a waterfall visual.</p>
     */
    inline bool GroupColorConfigurationHasBeenSet() const { return m_groupColorConfigurationHasBeenSet; }

    /**
     * <p>The color configuration for individual groups within a waterfall visual.</p>
     */
    inline void SetGroupColorConfiguration(const WaterfallChartGroupColorConfiguration& value) { m_groupColorConfigurationHasBeenSet = true; m_groupColorConfiguration = value; }

    /**
     * <p>The color configuration for individual groups within a waterfall visual.</p>
     */
    inline void SetGroupColorConfiguration(WaterfallChartGroupColorConfiguration&& value) { m_groupColorConfigurationHasBeenSet = true; m_groupColorConfiguration = std::move(value); }

    /**
     * <p>The color configuration for individual groups within a waterfall visual.</p>
     */
    inline WaterfallChartColorConfiguration& WithGroupColorConfiguration(const WaterfallChartGroupColorConfiguration& value) { SetGroupColorConfiguration(value); return *this;}

    /**
     * <p>The color configuration for individual groups within a waterfall visual.</p>
     */
    inline WaterfallChartColorConfiguration& WithGroupColorConfiguration(WaterfallChartGroupColorConfiguration&& value) { SetGroupColorConfiguration(std::move(value)); return *this;}

  private:

    WaterfallChartGroupColorConfiguration m_groupColorConfiguration;
    bool m_groupColorConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
