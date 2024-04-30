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
    AWS_QUICKSIGHT_API GaugeChartColorConfiguration();
    AWS_QUICKSIGHT_API GaugeChartColorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartColorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const Aws::String& GetForegroundColor() const{ return m_foregroundColor; }

    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ForegroundColorHasBeenSet() const { return m_foregroundColorHasBeenSet; }

    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetForegroundColor(const Aws::String& value) { m_foregroundColorHasBeenSet = true; m_foregroundColor = value; }

    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetForegroundColor(Aws::String&& value) { m_foregroundColorHasBeenSet = true; m_foregroundColor = std::move(value); }

    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetForegroundColor(const char* value) { m_foregroundColorHasBeenSet = true; m_foregroundColor.assign(value); }

    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartColorConfiguration& WithForegroundColor(const Aws::String& value) { SetForegroundColor(value); return *this;}

    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartColorConfiguration& WithForegroundColor(Aws::String&& value) { SetForegroundColor(std::move(value)); return *this;}

    /**
     * <p>The foreground color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartColorConfiguration& WithForegroundColor(const char* value) { SetForegroundColor(value); return *this;}


    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const Aws::String& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetBackgroundColor(const Aws::String& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetBackgroundColor(Aws::String&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetBackgroundColor(const char* value) { m_backgroundColorHasBeenSet = true; m_backgroundColor.assign(value); }

    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartColorConfiguration& WithBackgroundColor(const Aws::String& value) { SetBackgroundColor(value); return *this;}

    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartColorConfiguration& WithBackgroundColor(Aws::String&& value) { SetBackgroundColor(std::move(value)); return *this;}

    /**
     * <p>The background color configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartColorConfiguration& WithBackgroundColor(const char* value) { SetBackgroundColor(value); return *this;}

  private:

    Aws::String m_foregroundColor;
    bool m_foregroundColorHasBeenSet = false;

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
