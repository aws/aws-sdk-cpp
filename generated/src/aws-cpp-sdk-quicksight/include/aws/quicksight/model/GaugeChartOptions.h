/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PrimaryValueDisplayType.h>
#include <aws/quicksight/model/ComparisonConfiguration.h>
#include <aws/quicksight/model/ArcAxisConfiguration.h>
#include <aws/quicksight/model/ArcConfiguration.h>
#include <aws/quicksight/model/FontConfiguration.h>
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
   * <p>The options that determine the presentation of the
   * <code>GaugeChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartOptions">AWS
   * API Reference</a></p>
   */
  class GaugeChartOptions
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartOptions() = default;
    AWS_QUICKSIGHT_API GaugeChartOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline PrimaryValueDisplayType GetPrimaryValueDisplayType() const { return m_primaryValueDisplayType; }
    inline bool PrimaryValueDisplayTypeHasBeenSet() const { return m_primaryValueDisplayTypeHasBeenSet; }
    inline void SetPrimaryValueDisplayType(PrimaryValueDisplayType value) { m_primaryValueDisplayTypeHasBeenSet = true; m_primaryValueDisplayType = value; }
    inline GaugeChartOptions& WithPrimaryValueDisplayType(PrimaryValueDisplayType value) { SetPrimaryValueDisplayType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const ComparisonConfiguration& GetComparison() const { return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    template<typename ComparisonT = ComparisonConfiguration>
    void SetComparison(ComparisonT&& value) { m_comparisonHasBeenSet = true; m_comparison = std::forward<ComparisonT>(value); }
    template<typename ComparisonT = ComparisonConfiguration>
    GaugeChartOptions& WithComparison(ComparisonT&& value) { SetComparison(std::forward<ComparisonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arc axis configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const ArcAxisConfiguration& GetArcAxis() const { return m_arcAxis; }
    inline bool ArcAxisHasBeenSet() const { return m_arcAxisHasBeenSet; }
    template<typename ArcAxisT = ArcAxisConfiguration>
    void SetArcAxis(ArcAxisT&& value) { m_arcAxisHasBeenSet = true; m_arcAxis = std::forward<ArcAxisT>(value); }
    template<typename ArcAxisT = ArcAxisConfiguration>
    GaugeChartOptions& WithArcAxis(ArcAxisT&& value) { SetArcAxis(std::forward<ArcAxisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arc configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const ArcConfiguration& GetArc() const { return m_arc; }
    inline bool ArcHasBeenSet() const { return m_arcHasBeenSet; }
    template<typename ArcT = ArcConfiguration>
    void SetArc(ArcT&& value) { m_arcHasBeenSet = true; m_arc = std::forward<ArcT>(value); }
    template<typename ArcT = ArcConfiguration>
    GaugeChartOptions& WithArc(ArcT&& value) { SetArc(std::forward<ArcT>(value)); return *this;}
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
    GaugeChartOptions& WithPrimaryValueFontConfiguration(PrimaryValueFontConfigurationT&& value) { SetPrimaryValueFontConfiguration(std::forward<PrimaryValueFontConfigurationT>(value)); return *this;}
    ///@}
  private:

    PrimaryValueDisplayType m_primaryValueDisplayType{PrimaryValueDisplayType::NOT_SET};
    bool m_primaryValueDisplayTypeHasBeenSet = false;

    ComparisonConfiguration m_comparison;
    bool m_comparisonHasBeenSet = false;

    ArcAxisConfiguration m_arcAxis;
    bool m_arcAxisHasBeenSet = false;

    ArcConfiguration m_arc;
    bool m_arcHasBeenSet = false;

    FontConfiguration m_primaryValueFontConfiguration;
    bool m_primaryValueFontConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
