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
    AWS_QUICKSIGHT_API KPIOptions() = default;
    AWS_QUICKSIGHT_API KPIOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options that determine the presentation of the progress bar of a KPI
     * visual.</p>
     */
    inline const ProgressBarOptions& GetProgressBar() const { return m_progressBar; }
    inline bool ProgressBarHasBeenSet() const { return m_progressBarHasBeenSet; }
    template<typename ProgressBarT = ProgressBarOptions>
    void SetProgressBar(ProgressBarT&& value) { m_progressBarHasBeenSet = true; m_progressBar = std::forward<ProgressBarT>(value); }
    template<typename ProgressBarT = ProgressBarOptions>
    KPIOptions& WithProgressBar(ProgressBarT&& value) { SetProgressBar(std::forward<ProgressBarT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of trend arrows in a KPI
     * visual.</p>
     */
    inline const TrendArrowOptions& GetTrendArrows() const { return m_trendArrows; }
    inline bool TrendArrowsHasBeenSet() const { return m_trendArrowsHasBeenSet; }
    template<typename TrendArrowsT = TrendArrowOptions>
    void SetTrendArrows(TrendArrowsT&& value) { m_trendArrowsHasBeenSet = true; m_trendArrows = std::forward<TrendArrowsT>(value); }
    template<typename TrendArrowsT = TrendArrowOptions>
    KPIOptions& WithTrendArrows(TrendArrowsT&& value) { SetTrendArrows(std::forward<TrendArrowsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the secondary value of a KPI
     * visual.</p>
     */
    inline const SecondaryValueOptions& GetSecondaryValue() const { return m_secondaryValue; }
    inline bool SecondaryValueHasBeenSet() const { return m_secondaryValueHasBeenSet; }
    template<typename SecondaryValueT = SecondaryValueOptions>
    void SetSecondaryValue(SecondaryValueT&& value) { m_secondaryValueHasBeenSet = true; m_secondaryValue = std::forward<SecondaryValueT>(value); }
    template<typename SecondaryValueT = SecondaryValueOptions>
    KPIOptions& WithSecondaryValue(SecondaryValueT&& value) { SetSecondaryValue(std::forward<SecondaryValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison configuration of a KPI visual.</p>
     */
    inline const ComparisonConfiguration& GetComparison() const { return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    template<typename ComparisonT = ComparisonConfiguration>
    void SetComparison(ComparisonT&& value) { m_comparisonHasBeenSet = true; m_comparison = std::forward<ComparisonT>(value); }
    template<typename ComparisonT = ComparisonConfiguration>
    KPIOptions& WithComparison(ComparisonT&& value) { SetComparison(std::forward<ComparisonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline PrimaryValueDisplayType GetPrimaryValueDisplayType() const { return m_primaryValueDisplayType; }
    inline bool PrimaryValueDisplayTypeHasBeenSet() const { return m_primaryValueDisplayTypeHasBeenSet; }
    inline void SetPrimaryValueDisplayType(PrimaryValueDisplayType value) { m_primaryValueDisplayTypeHasBeenSet = true; m_primaryValueDisplayType = value; }
    inline KPIOptions& WithPrimaryValueDisplayType(PrimaryValueDisplayType value) { SetPrimaryValueDisplayType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline const FontConfiguration& GetPrimaryValueFontConfiguration() const { return m_primaryValueFontConfiguration; }
    inline bool PrimaryValueFontConfigurationHasBeenSet() const { return m_primaryValueFontConfigurationHasBeenSet; }
    template<typename PrimaryValueFontConfigurationT = FontConfiguration>
    void SetPrimaryValueFontConfiguration(PrimaryValueFontConfigurationT&& value) { m_primaryValueFontConfigurationHasBeenSet = true; m_primaryValueFontConfiguration = std::forward<PrimaryValueFontConfigurationT>(value); }
    template<typename PrimaryValueFontConfigurationT = FontConfiguration>
    KPIOptions& WithPrimaryValueFontConfiguration(PrimaryValueFontConfigurationT&& value) { SetPrimaryValueFontConfiguration(std::forward<PrimaryValueFontConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the secondary value font configuration.</p>
     */
    inline const FontConfiguration& GetSecondaryValueFontConfiguration() const { return m_secondaryValueFontConfiguration; }
    inline bool SecondaryValueFontConfigurationHasBeenSet() const { return m_secondaryValueFontConfigurationHasBeenSet; }
    template<typename SecondaryValueFontConfigurationT = FontConfiguration>
    void SetSecondaryValueFontConfiguration(SecondaryValueFontConfigurationT&& value) { m_secondaryValueFontConfigurationHasBeenSet = true; m_secondaryValueFontConfiguration = std::forward<SecondaryValueFontConfigurationT>(value); }
    template<typename SecondaryValueFontConfigurationT = FontConfiguration>
    KPIOptions& WithSecondaryValueFontConfiguration(SecondaryValueFontConfigurationT&& value) { SetSecondaryValueFontConfiguration(std::forward<SecondaryValueFontConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the visibility, color, type, and tooltip
     * visibility of the sparkline of a KPI visual.</p>
     */
    inline const KPISparklineOptions& GetSparkline() const { return m_sparkline; }
    inline bool SparklineHasBeenSet() const { return m_sparklineHasBeenSet; }
    template<typename SparklineT = KPISparklineOptions>
    void SetSparkline(SparklineT&& value) { m_sparklineHasBeenSet = true; m_sparkline = std::forward<SparklineT>(value); }
    template<typename SparklineT = KPISparklineOptions>
    KPIOptions& WithSparkline(SparklineT&& value) { SetSparkline(std::forward<SparklineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the layout a KPI visual.</p>
     */
    inline const KPIVisualLayoutOptions& GetVisualLayoutOptions() const { return m_visualLayoutOptions; }
    inline bool VisualLayoutOptionsHasBeenSet() const { return m_visualLayoutOptionsHasBeenSet; }
    template<typename VisualLayoutOptionsT = KPIVisualLayoutOptions>
    void SetVisualLayoutOptions(VisualLayoutOptionsT&& value) { m_visualLayoutOptionsHasBeenSet = true; m_visualLayoutOptions = std::forward<VisualLayoutOptionsT>(value); }
    template<typename VisualLayoutOptionsT = KPIVisualLayoutOptions>
    KPIOptions& WithVisualLayoutOptions(VisualLayoutOptionsT&& value) { SetVisualLayoutOptions(std::forward<VisualLayoutOptionsT>(value)); return *this;}
    ///@}
  private:

    ProgressBarOptions m_progressBar;
    bool m_progressBarHasBeenSet = false;

    TrendArrowOptions m_trendArrows;
    bool m_trendArrowsHasBeenSet = false;

    SecondaryValueOptions m_secondaryValue;
    bool m_secondaryValueHasBeenSet = false;

    ComparisonConfiguration m_comparison;
    bool m_comparisonHasBeenSet = false;

    PrimaryValueDisplayType m_primaryValueDisplayType{PrimaryValueDisplayType::NOT_SET};
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
