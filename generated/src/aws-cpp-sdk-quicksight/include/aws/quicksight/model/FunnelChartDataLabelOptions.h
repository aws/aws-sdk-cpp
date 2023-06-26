/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/DataLabelPosition.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FunnelChartMeasureDataLabelStyle.h>
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
   * <p>The options that determine the presentation of the data labels.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FunnelChartDataLabelOptions">AWS
   * API Reference</a></p>
   */
  class FunnelChartDataLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API FunnelChartDataLabelOptions();
    AWS_QUICKSIGHT_API FunnelChartDataLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FunnelChartDataLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The visibility option that determines if data labels are displayed.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility option that determines if data labels are displayed.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility option that determines if data labels are displayed.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility option that determines if data labels are displayed.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility option that determines if data labels are displayed.</p>
     */
    inline FunnelChartDataLabelOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility option that determines if data labels are displayed.</p>
     */
    inline FunnelChartDataLabelOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The visibility of the category labels within the data labels.</p>
     */
    inline const Visibility& GetCategoryLabelVisibility() const{ return m_categoryLabelVisibility; }

    /**
     * <p>The visibility of the category labels within the data labels.</p>
     */
    inline bool CategoryLabelVisibilityHasBeenSet() const { return m_categoryLabelVisibilityHasBeenSet; }

    /**
     * <p>The visibility of the category labels within the data labels.</p>
     */
    inline void SetCategoryLabelVisibility(const Visibility& value) { m_categoryLabelVisibilityHasBeenSet = true; m_categoryLabelVisibility = value; }

    /**
     * <p>The visibility of the category labels within the data labels.</p>
     */
    inline void SetCategoryLabelVisibility(Visibility&& value) { m_categoryLabelVisibilityHasBeenSet = true; m_categoryLabelVisibility = std::move(value); }

    /**
     * <p>The visibility of the category labels within the data labels.</p>
     */
    inline FunnelChartDataLabelOptions& WithCategoryLabelVisibility(const Visibility& value) { SetCategoryLabelVisibility(value); return *this;}

    /**
     * <p>The visibility of the category labels within the data labels.</p>
     */
    inline FunnelChartDataLabelOptions& WithCategoryLabelVisibility(Visibility&& value) { SetCategoryLabelVisibility(std::move(value)); return *this;}


    /**
     * <p>The visibility of the measure labels within the data labels.</p>
     */
    inline const Visibility& GetMeasureLabelVisibility() const{ return m_measureLabelVisibility; }

    /**
     * <p>The visibility of the measure labels within the data labels.</p>
     */
    inline bool MeasureLabelVisibilityHasBeenSet() const { return m_measureLabelVisibilityHasBeenSet; }

    /**
     * <p>The visibility of the measure labels within the data labels.</p>
     */
    inline void SetMeasureLabelVisibility(const Visibility& value) { m_measureLabelVisibilityHasBeenSet = true; m_measureLabelVisibility = value; }

    /**
     * <p>The visibility of the measure labels within the data labels.</p>
     */
    inline void SetMeasureLabelVisibility(Visibility&& value) { m_measureLabelVisibilityHasBeenSet = true; m_measureLabelVisibility = std::move(value); }

    /**
     * <p>The visibility of the measure labels within the data labels.</p>
     */
    inline FunnelChartDataLabelOptions& WithMeasureLabelVisibility(const Visibility& value) { SetMeasureLabelVisibility(value); return *this;}

    /**
     * <p>The visibility of the measure labels within the data labels.</p>
     */
    inline FunnelChartDataLabelOptions& WithMeasureLabelVisibility(Visibility&& value) { SetMeasureLabelVisibility(std::move(value)); return *this;}


    /**
     * <p>Determines the positioning of the data label relative to a section of the
     * funnel.</p>
     */
    inline const DataLabelPosition& GetPosition() const{ return m_position; }

    /**
     * <p>Determines the positioning of the data label relative to a section of the
     * funnel.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>Determines the positioning of the data label relative to a section of the
     * funnel.</p>
     */
    inline void SetPosition(const DataLabelPosition& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>Determines the positioning of the data label relative to a section of the
     * funnel.</p>
     */
    inline void SetPosition(DataLabelPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>Determines the positioning of the data label relative to a section of the
     * funnel.</p>
     */
    inline FunnelChartDataLabelOptions& WithPosition(const DataLabelPosition& value) { SetPosition(value); return *this;}

    /**
     * <p>Determines the positioning of the data label relative to a section of the
     * funnel.</p>
     */
    inline FunnelChartDataLabelOptions& WithPosition(DataLabelPosition&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * <p>The font configuration for the data labels.</p> <p>Only the
     * <code>FontSize</code> attribute of the font configuration is used for data
     * labels.</p>
     */
    inline const FontConfiguration& GetLabelFontConfiguration() const{ return m_labelFontConfiguration; }

    /**
     * <p>The font configuration for the data labels.</p> <p>Only the
     * <code>FontSize</code> attribute of the font configuration is used for data
     * labels.</p>
     */
    inline bool LabelFontConfigurationHasBeenSet() const { return m_labelFontConfigurationHasBeenSet; }

    /**
     * <p>The font configuration for the data labels.</p> <p>Only the
     * <code>FontSize</code> attribute of the font configuration is used for data
     * labels.</p>
     */
    inline void SetLabelFontConfiguration(const FontConfiguration& value) { m_labelFontConfigurationHasBeenSet = true; m_labelFontConfiguration = value; }

    /**
     * <p>The font configuration for the data labels.</p> <p>Only the
     * <code>FontSize</code> attribute of the font configuration is used for data
     * labels.</p>
     */
    inline void SetLabelFontConfiguration(FontConfiguration&& value) { m_labelFontConfigurationHasBeenSet = true; m_labelFontConfiguration = std::move(value); }

    /**
     * <p>The font configuration for the data labels.</p> <p>Only the
     * <code>FontSize</code> attribute of the font configuration is used for data
     * labels.</p>
     */
    inline FunnelChartDataLabelOptions& WithLabelFontConfiguration(const FontConfiguration& value) { SetLabelFontConfiguration(value); return *this;}

    /**
     * <p>The font configuration for the data labels.</p> <p>Only the
     * <code>FontSize</code> attribute of the font configuration is used for data
     * labels.</p>
     */
    inline FunnelChartDataLabelOptions& WithLabelFontConfiguration(FontConfiguration&& value) { SetLabelFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>The color of the data label text.</p>
     */
    inline const Aws::String& GetLabelColor() const{ return m_labelColor; }

    /**
     * <p>The color of the data label text.</p>
     */
    inline bool LabelColorHasBeenSet() const { return m_labelColorHasBeenSet; }

    /**
     * <p>The color of the data label text.</p>
     */
    inline void SetLabelColor(const Aws::String& value) { m_labelColorHasBeenSet = true; m_labelColor = value; }

    /**
     * <p>The color of the data label text.</p>
     */
    inline void SetLabelColor(Aws::String&& value) { m_labelColorHasBeenSet = true; m_labelColor = std::move(value); }

    /**
     * <p>The color of the data label text.</p>
     */
    inline void SetLabelColor(const char* value) { m_labelColorHasBeenSet = true; m_labelColor.assign(value); }

    /**
     * <p>The color of the data label text.</p>
     */
    inline FunnelChartDataLabelOptions& WithLabelColor(const Aws::String& value) { SetLabelColor(value); return *this;}

    /**
     * <p>The color of the data label text.</p>
     */
    inline FunnelChartDataLabelOptions& WithLabelColor(Aws::String&& value) { SetLabelColor(std::move(value)); return *this;}

    /**
     * <p>The color of the data label text.</p>
     */
    inline FunnelChartDataLabelOptions& WithLabelColor(const char* value) { SetLabelColor(value); return *this;}


    /**
     * <p>Determines the style of the metric labels.</p>
     */
    inline const FunnelChartMeasureDataLabelStyle& GetMeasureDataLabelStyle() const{ return m_measureDataLabelStyle; }

    /**
     * <p>Determines the style of the metric labels.</p>
     */
    inline bool MeasureDataLabelStyleHasBeenSet() const { return m_measureDataLabelStyleHasBeenSet; }

    /**
     * <p>Determines the style of the metric labels.</p>
     */
    inline void SetMeasureDataLabelStyle(const FunnelChartMeasureDataLabelStyle& value) { m_measureDataLabelStyleHasBeenSet = true; m_measureDataLabelStyle = value; }

    /**
     * <p>Determines the style of the metric labels.</p>
     */
    inline void SetMeasureDataLabelStyle(FunnelChartMeasureDataLabelStyle&& value) { m_measureDataLabelStyleHasBeenSet = true; m_measureDataLabelStyle = std::move(value); }

    /**
     * <p>Determines the style of the metric labels.</p>
     */
    inline FunnelChartDataLabelOptions& WithMeasureDataLabelStyle(const FunnelChartMeasureDataLabelStyle& value) { SetMeasureDataLabelStyle(value); return *this;}

    /**
     * <p>Determines the style of the metric labels.</p>
     */
    inline FunnelChartDataLabelOptions& WithMeasureDataLabelStyle(FunnelChartMeasureDataLabelStyle&& value) { SetMeasureDataLabelStyle(std::move(value)); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    Visibility m_categoryLabelVisibility;
    bool m_categoryLabelVisibilityHasBeenSet = false;

    Visibility m_measureLabelVisibility;
    bool m_measureLabelVisibilityHasBeenSet = false;

    DataLabelPosition m_position;
    bool m_positionHasBeenSet = false;

    FontConfiguration m_labelFontConfiguration;
    bool m_labelFontConfigurationHasBeenSet = false;

    Aws::String m_labelColor;
    bool m_labelColorHasBeenSet = false;

    FunnelChartMeasureDataLabelStyle m_measureDataLabelStyle;
    bool m_measureDataLabelStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
