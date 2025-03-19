/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/KPISparklineType.h>
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
   * <p>The options that determine the visibility, color, type, and tooltip
   * visibility of the sparkline of a KPI visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPISparklineOptions">AWS
   * API Reference</a></p>
   */
  class KPISparklineOptions
  {
  public:
    AWS_QUICKSIGHT_API KPISparklineOptions() = default;
    AWS_QUICKSIGHT_API KPISparklineOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPISparklineOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of the sparkline.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline KPISparklineOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the sparkline.</p>
     */
    inline KPISparklineType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(KPISparklineType value) { m_typeHasBeenSet = true; m_type = value; }
    inline KPISparklineOptions& WithType(KPISparklineType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the sparkline.</p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    KPISparklineOptions& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip visibility of the sparkline.</p>
     */
    inline Visibility GetTooltipVisibility() const { return m_tooltipVisibility; }
    inline bool TooltipVisibilityHasBeenSet() const { return m_tooltipVisibilityHasBeenSet; }
    inline void SetTooltipVisibility(Visibility value) { m_tooltipVisibilityHasBeenSet = true; m_tooltipVisibility = value; }
    inline KPISparklineOptions& WithTooltipVisibility(Visibility value) { SetTooltipVisibility(value); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    KPISparklineType m_type{KPISparklineType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    Visibility m_tooltipVisibility{Visibility::NOT_SET};
    bool m_tooltipVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
