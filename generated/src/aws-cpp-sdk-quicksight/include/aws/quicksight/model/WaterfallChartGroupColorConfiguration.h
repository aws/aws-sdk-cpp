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
   * <p>The color configuration for individual groups within a waterfall
   * visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WaterfallChartGroupColorConfiguration">AWS
   * API Reference</a></p>
   */
  class WaterfallChartGroupColorConfiguration
  {
  public:
    AWS_QUICKSIGHT_API WaterfallChartGroupColorConfiguration() = default;
    AWS_QUICKSIGHT_API WaterfallChartGroupColorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartGroupColorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline const Aws::String& GetPositiveBarColor() const { return m_positiveBarColor; }
    inline bool PositiveBarColorHasBeenSet() const { return m_positiveBarColorHasBeenSet; }
    template<typename PositiveBarColorT = Aws::String>
    void SetPositiveBarColor(PositiveBarColorT&& value) { m_positiveBarColorHasBeenSet = true; m_positiveBarColor = std::forward<PositiveBarColorT>(value); }
    template<typename PositiveBarColorT = Aws::String>
    WaterfallChartGroupColorConfiguration& WithPositiveBarColor(PositiveBarColorT&& value) { SetPositiveBarColor(std::forward<PositiveBarColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline const Aws::String& GetNegativeBarColor() const { return m_negativeBarColor; }
    inline bool NegativeBarColorHasBeenSet() const { return m_negativeBarColorHasBeenSet; }
    template<typename NegativeBarColorT = Aws::String>
    void SetNegativeBarColor(NegativeBarColorT&& value) { m_negativeBarColorHasBeenSet = true; m_negativeBarColor = std::forward<NegativeBarColorT>(value); }
    template<typename NegativeBarColorT = Aws::String>
    WaterfallChartGroupColorConfiguration& WithNegativeBarColor(NegativeBarColorT&& value) { SetNegativeBarColor(std::forward<NegativeBarColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline const Aws::String& GetTotalBarColor() const { return m_totalBarColor; }
    inline bool TotalBarColorHasBeenSet() const { return m_totalBarColorHasBeenSet; }
    template<typename TotalBarColorT = Aws::String>
    void SetTotalBarColor(TotalBarColorT&& value) { m_totalBarColorHasBeenSet = true; m_totalBarColor = std::forward<TotalBarColorT>(value); }
    template<typename TotalBarColorT = Aws::String>
    WaterfallChartGroupColorConfiguration& WithTotalBarColor(TotalBarColorT&& value) { SetTotalBarColor(std::forward<TotalBarColorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_positiveBarColor;
    bool m_positiveBarColorHasBeenSet = false;

    Aws::String m_negativeBarColor;
    bool m_negativeBarColorHasBeenSet = false;

    Aws::String m_totalBarColor;
    bool m_totalBarColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
