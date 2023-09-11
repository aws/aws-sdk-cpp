/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ProgressBarOptions.h>
#include <aws/quicksight/model/TrendArrowOptions.h>
#include <aws/quicksight/model/SecondaryValueOptions.h>
#include <aws/quicksight/model/ComparisonConfiguration.h>
#include <aws/quicksight/model/PrimaryValueDisplayType.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/quicksight/model/KPISparklineOptions.h>
#include <aws/quicksight/model/KPIVisualLayoutOptions.h>
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
   * <p>The options that determine the presentation of a KPI visual.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIOptions">AWS
   * API Reference</a></p>
   */
  class KPIOptions
  {
  public:
    AWS_QUICKSIGHT_API KPIOptions();
    AWS_QUICKSIGHT_API KPIOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the presentation of the progress bar of a KPI
     * visual.</p>
     */
    inline const ProgressBarOptions& GetProgressBar() const{ return m_progressBar; }

    /**
     * <p>The options that determine the presentation of the progress bar of a KPI
     * visual.</p>
     */
    inline bool ProgressBarHasBeenSet() const { return m_progressBarHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the progress bar of a KPI
     * visual.</p>
     */
    inline void SetProgressBar(const ProgressBarOptions& value) { m_progressBarHasBeenSet = true; m_progressBar = value; }

    /**
     * <p>The options that determine the presentation of the progress bar of a KPI
     * visual.</p>
     */
    inline void SetProgressBar(ProgressBarOptions&& value) { m_progressBarHasBeenSet = true; m_progressBar = std::move(value); }

    /**
     * <p>The options that determine the presentation of the progress bar of a KPI
     * visual.</p>
     */
    inline KPIOptions& WithProgressBar(const ProgressBarOptions& value) { SetProgressBar(value); return *this;}

    /**
     * <p>The options that determine the presentation of the progress bar of a KPI
     * visual.</p>
     */
    inline KPIOptions& WithProgressBar(ProgressBarOptions&& value) { SetProgressBar(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of trend arrows in a KPI
     * visual.</p>
     */
    inline const TrendArrowOptions& GetTrendArrows() const{ return m_trendArrows; }

    /**
     * <p>The options that determine the presentation of trend arrows in a KPI
     * visual.</p>
     */
    inline bool TrendArrowsHasBeenSet() const { return m_trendArrowsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of trend arrows in a KPI
     * visual.</p>
     */
    inline void SetTrendArrows(const TrendArrowOptions& value) { m_trendArrowsHasBeenSet = true; m_trendArrows = value; }

    /**
     * <p>The options that determine the presentation of trend arrows in a KPI
     * visual.</p>
     */
    inline void SetTrendArrows(TrendArrowOptions&& value) { m_trendArrowsHasBeenSet = true; m_trendArrows = std::move(value); }

    /**
     * <p>The options that determine the presentation of trend arrows in a KPI
     * visual.</p>
     */
    inline KPIOptions& WithTrendArrows(const TrendArrowOptions& value) { SetTrendArrows(value); return *this;}

    /**
     * <p>The options that determine the presentation of trend arrows in a KPI
     * visual.</p>
     */
    inline KPIOptions& WithTrendArrows(TrendArrowOptions&& value) { SetTrendArrows(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the secondary value of a KPI
     * visual.</p>
     */
    inline const SecondaryValueOptions& GetSecondaryValue() const{ return m_secondaryValue; }

    /**
     * <p>The options that determine the presentation of the secondary value of a KPI
     * visual.</p>
     */
    inline bool SecondaryValueHasBeenSet() const { return m_secondaryValueHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the secondary value of a KPI
     * visual.</p>
     */
    inline void SetSecondaryValue(const SecondaryValueOptions& value) { m_secondaryValueHasBeenSet = true; m_secondaryValue = value; }

    /**
     * <p>The options that determine the presentation of the secondary value of a KPI
     * visual.</p>
     */
    inline void SetSecondaryValue(SecondaryValueOptions&& value) { m_secondaryValueHasBeenSet = true; m_secondaryValue = std::move(value); }

    /**
     * <p>The options that determine the presentation of the secondary value of a KPI
     * visual.</p>
     */
    inline KPIOptions& WithSecondaryValue(const SecondaryValueOptions& value) { SetSecondaryValue(value); return *this;}

    /**
     * <p>The options that determine the presentation of the secondary value of a KPI
     * visual.</p>
     */
    inline KPIOptions& WithSecondaryValue(SecondaryValueOptions&& value) { SetSecondaryValue(std::move(value)); return *this;}


    /**
     * <p>The comparison configuration of a KPI visual.</p>
     */
    inline const ComparisonConfiguration& GetComparison() const{ return m_comparison; }

    /**
     * <p>The comparison configuration of a KPI visual.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The comparison configuration of a KPI visual.</p>
     */
    inline void SetComparison(const ComparisonConfiguration& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The comparison configuration of a KPI visual.</p>
     */
    inline void SetComparison(ComparisonConfiguration&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The comparison configuration of a KPI visual.</p>
     */
    inline KPIOptions& WithComparison(const ComparisonConfiguration& value) { SetComparison(value); return *this;}

    /**
     * <p>The comparison configuration of a KPI visual.</p>
     */
    inline KPIOptions& WithComparison(ComparisonConfiguration&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline const PrimaryValueDisplayType& GetPrimaryValueDisplayType() const{ return m_primaryValueDisplayType; }

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline bool PrimaryValueDisplayTypeHasBeenSet() const { return m_primaryValueDisplayTypeHasBeenSet; }

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline void SetPrimaryValueDisplayType(const PrimaryValueDisplayType& value) { m_primaryValueDisplayTypeHasBeenSet = true; m_primaryValueDisplayType = value; }

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline void SetPrimaryValueDisplayType(PrimaryValueDisplayType&& value) { m_primaryValueDisplayTypeHasBeenSet = true; m_primaryValueDisplayType = std::move(value); }

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline KPIOptions& WithPrimaryValueDisplayType(const PrimaryValueDisplayType& value) { SetPrimaryValueDisplayType(value); return *this;}

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline KPIOptions& WithPrimaryValueDisplayType(PrimaryValueDisplayType&& value) { SetPrimaryValueDisplayType(std::move(value)); return *this;}


    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline const FontConfiguration& GetPrimaryValueFontConfiguration() const{ return m_primaryValueFontConfiguration; }

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline bool PrimaryValueFontConfigurationHasBeenSet() const { return m_primaryValueFontConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline void SetPrimaryValueFontConfiguration(const FontConfiguration& value) { m_primaryValueFontConfigurationHasBeenSet = true; m_primaryValueFontConfiguration = value; }

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline void SetPrimaryValueFontConfiguration(FontConfiguration&& value) { m_primaryValueFontConfigurationHasBeenSet = true; m_primaryValueFontConfiguration = std::move(value); }

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline KPIOptions& WithPrimaryValueFontConfiguration(const FontConfiguration& value) { SetPrimaryValueFontConfiguration(value); return *this;}

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline KPIOptions& WithPrimaryValueFontConfiguration(FontConfiguration&& value) { SetPrimaryValueFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the secondary value font configuration.</p>
     */
    inline const FontConfiguration& GetSecondaryValueFontConfiguration() const{ return m_secondaryValueFontConfiguration; }

    /**
     * <p>The options that determine the secondary value font configuration.</p>
     */
    inline bool SecondaryValueFontConfigurationHasBeenSet() const { return m_secondaryValueFontConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the secondary value font configuration.</p>
     */
    inline void SetSecondaryValueFontConfiguration(const FontConfiguration& value) { m_secondaryValueFontConfigurationHasBeenSet = true; m_secondaryValueFontConfiguration = value; }

    /**
     * <p>The options that determine the secondary value font configuration.</p>
     */
    inline void SetSecondaryValueFontConfiguration(FontConfiguration&& value) { m_secondaryValueFontConfigurationHasBeenSet = true; m_secondaryValueFontConfiguration = std::move(value); }

    /**
     * <p>The options that determine the secondary value font configuration.</p>
     */
    inline KPIOptions& WithSecondaryValueFontConfiguration(const FontConfiguration& value) { SetSecondaryValueFontConfiguration(value); return *this;}

    /**
     * <p>The options that determine the secondary value font configuration.</p>
     */
    inline KPIOptions& WithSecondaryValueFontConfiguration(FontConfiguration&& value) { SetSecondaryValueFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the visibility, color, type, and tooltip
     * visibility of the sparkline of a KPI visual.</p>
     */
    inline const KPISparklineOptions& GetSparkline() const{ return m_sparkline; }

    /**
     * <p>The options that determine the visibility, color, type, and tooltip
     * visibility of the sparkline of a KPI visual.</p>
     */
    inline bool SparklineHasBeenSet() const { return m_sparklineHasBeenSet; }

    /**
     * <p>The options that determine the visibility, color, type, and tooltip
     * visibility of the sparkline of a KPI visual.</p>
     */
    inline void SetSparkline(const KPISparklineOptions& value) { m_sparklineHasBeenSet = true; m_sparkline = value; }

    /**
     * <p>The options that determine the visibility, color, type, and tooltip
     * visibility of the sparkline of a KPI visual.</p>
     */
    inline void SetSparkline(KPISparklineOptions&& value) { m_sparklineHasBeenSet = true; m_sparkline = std::move(value); }

    /**
     * <p>The options that determine the visibility, color, type, and tooltip
     * visibility of the sparkline of a KPI visual.</p>
     */
    inline KPIOptions& WithSparkline(const KPISparklineOptions& value) { SetSparkline(value); return *this;}

    /**
     * <p>The options that determine the visibility, color, type, and tooltip
     * visibility of the sparkline of a KPI visual.</p>
     */
    inline KPIOptions& WithSparkline(KPISparklineOptions&& value) { SetSparkline(std::move(value)); return *this;}


    /**
     * <p>The options that determine the layout a KPI visual.</p>
     */
    inline const KPIVisualLayoutOptions& GetVisualLayoutOptions() const{ return m_visualLayoutOptions; }

    /**
     * <p>The options that determine the layout a KPI visual.</p>
     */
    inline bool VisualLayoutOptionsHasBeenSet() const { return m_visualLayoutOptionsHasBeenSet; }

    /**
     * <p>The options that determine the layout a KPI visual.</p>
     */
    inline void SetVisualLayoutOptions(const KPIVisualLayoutOptions& value) { m_visualLayoutOptionsHasBeenSet = true; m_visualLayoutOptions = value; }

    /**
     * <p>The options that determine the layout a KPI visual.</p>
     */
    inline void SetVisualLayoutOptions(KPIVisualLayoutOptions&& value) { m_visualLayoutOptionsHasBeenSet = true; m_visualLayoutOptions = std::move(value); }

    /**
     * <p>The options that determine the layout a KPI visual.</p>
     */
    inline KPIOptions& WithVisualLayoutOptions(const KPIVisualLayoutOptions& value) { SetVisualLayoutOptions(value); return *this;}

    /**
     * <p>The options that determine the layout a KPI visual.</p>
     */
    inline KPIOptions& WithVisualLayoutOptions(KPIVisualLayoutOptions&& value) { SetVisualLayoutOptions(std::move(value)); return *this;}

  private:

    ProgressBarOptions m_progressBar;
    bool m_progressBarHasBeenSet = false;

    TrendArrowOptions m_trendArrows;
    bool m_trendArrowsHasBeenSet = false;

    SecondaryValueOptions m_secondaryValue;
    bool m_secondaryValueHasBeenSet = false;

    ComparisonConfiguration m_comparison;
    bool m_comparisonHasBeenSet = false;

    PrimaryValueDisplayType m_primaryValueDisplayType;
    bool m_primaryValueDisplayTypeHasBeenSet = false;

    FontConfiguration m_primaryValueFontConfiguration;
    bool m_primaryValueFontConfigurationHasBeenSet = false;

    FontConfiguration m_secondaryValueFontConfiguration;
    bool m_secondaryValueFontConfigurationHasBeenSet = false;

    KPISparklineOptions m_sparkline;
    bool m_sparklineHasBeenSet = false;

    KPIVisualLayoutOptions m_visualLayoutOptions;
    bool m_visualLayoutOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
