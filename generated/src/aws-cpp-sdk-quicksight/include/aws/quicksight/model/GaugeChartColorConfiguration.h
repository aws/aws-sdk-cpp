/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The color configuration of a <code>GaugeChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartColorConfiguration">AWS
   * API Reference</a></p>
   */
  class GaugeChartColorConfiguration
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartColorConfiguration() = default;
    AWS_QUICKSIGHT_API GaugeChartColorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartColorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const Aws::String& GetForegroundColor() const { return m_foregroundColor; }
    inline bool ForegroundColorHasBeenSet() const { return m_foregroundColorHasBeenSet; }
    template<typename ForegroundColorT = Aws::String>
    void SetForegroundColor(ForegroundColorT&& value) { m_foregroundColorHasBeenSet = true; m_foregroundColor = std::forward<ForegroundColorT>(value); }
    template<typename ForegroundColorT = Aws::String>
    GaugeChartColorConfiguration& WithForegroundColor(ForegroundColorT&& value) { SetForegroundColor(std::forward<ForegroundColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const Aws::String& GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    template<typename BackgroundColorT = Aws::String>
    void SetBackgroundColor(BackgroundColorT&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::forward<BackgroundColorT>(value); }
    template<typename BackgroundColorT = Aws::String>
    GaugeChartColorConfiguration& WithBackgroundColor(BackgroundColorT&& value) { SetBackgroundColor(std::forward<BackgroundColorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_foregroundColor;
    bool m_foregroundColorHasBeenSet = false;

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
