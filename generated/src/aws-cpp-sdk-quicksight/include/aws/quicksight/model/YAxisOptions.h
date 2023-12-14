/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SingleYAxisOption.h>
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
   * <p>The options that are available for a single Y axis in a chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/YAxisOptions">AWS
   * API Reference</a></p>
   */
  class YAxisOptions
  {
  public:
    AWS_QUICKSIGHT_API YAxisOptions();
    AWS_QUICKSIGHT_API YAxisOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API YAxisOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Y axis type to be used in the chart.</p> <p>If you choose
     * <code>PRIMARY_Y_AXIS</code>, the primary Y Axis is located on the leftmost
     * vertical axis of the chart.</p>
     */
    inline const SingleYAxisOption& GetYAxis() const{ return m_yAxis; }

    /**
     * <p>The Y axis type to be used in the chart.</p> <p>If you choose
     * <code>PRIMARY_Y_AXIS</code>, the primary Y Axis is located on the leftmost
     * vertical axis of the chart.</p>
     */
    inline bool YAxisHasBeenSet() const { return m_yAxisHasBeenSet; }

    /**
     * <p>The Y axis type to be used in the chart.</p> <p>If you choose
     * <code>PRIMARY_Y_AXIS</code>, the primary Y Axis is located on the leftmost
     * vertical axis of the chart.</p>
     */
    inline void SetYAxis(const SingleYAxisOption& value) { m_yAxisHasBeenSet = true; m_yAxis = value; }

    /**
     * <p>The Y axis type to be used in the chart.</p> <p>If you choose
     * <code>PRIMARY_Y_AXIS</code>, the primary Y Axis is located on the leftmost
     * vertical axis of the chart.</p>
     */
    inline void SetYAxis(SingleYAxisOption&& value) { m_yAxisHasBeenSet = true; m_yAxis = std::move(value); }

    /**
     * <p>The Y axis type to be used in the chart.</p> <p>If you choose
     * <code>PRIMARY_Y_AXIS</code>, the primary Y Axis is located on the leftmost
     * vertical axis of the chart.</p>
     */
    inline YAxisOptions& WithYAxis(const SingleYAxisOption& value) { SetYAxis(value); return *this;}

    /**
     * <p>The Y axis type to be used in the chart.</p> <p>If you choose
     * <code>PRIMARY_Y_AXIS</code>, the primary Y Axis is located on the leftmost
     * vertical axis of the chart.</p>
     */
    inline YAxisOptions& WithYAxis(SingleYAxisOption&& value) { SetYAxis(std::move(value)); return *this;}

  private:

    SingleYAxisOption m_yAxis;
    bool m_yAxisHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
