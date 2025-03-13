/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SheetImageTooltipText.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The tooltip configuration for a sheet image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetImageTooltipConfiguration">AWS
   * API Reference</a></p>
   */
  class SheetImageTooltipConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SheetImageTooltipConfiguration() = default;
    AWS_QUICKSIGHT_API SheetImageTooltipConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImageTooltipConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text that appears in the tooltip.</p>
     */
    inline const SheetImageTooltipText& GetTooltipText() const { return m_tooltipText; }
    inline bool TooltipTextHasBeenSet() const { return m_tooltipTextHasBeenSet; }
    template<typename TooltipTextT = SheetImageTooltipText>
    void SetTooltipText(TooltipTextT&& value) { m_tooltipTextHasBeenSet = true; m_tooltipText = std::forward<TooltipTextT>(value); }
    template<typename TooltipTextT = SheetImageTooltipText>
    SheetImageTooltipConfiguration& WithTooltipText(TooltipTextT&& value) { SetTooltipText(std::forward<TooltipTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the tooltip.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline SheetImageTooltipConfiguration& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}
  private:

    SheetImageTooltipText m_tooltipText;
    bool m_tooltipTextHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
