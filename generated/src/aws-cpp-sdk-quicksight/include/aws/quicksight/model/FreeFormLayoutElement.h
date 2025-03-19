/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/LayoutElementType.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/FreeFormLayoutElementBorderStyle.h>
#include <aws/quicksight/model/FreeFormLayoutElementBackgroundStyle.h>
#include <aws/quicksight/model/LoadingAnimation.h>
#include <aws/quicksight/model/SheetElementRenderingRule.h>
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
   * <p>An element within a free-form layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FreeFormLayoutElement">AWS
   * API Reference</a></p>
   */
  class FreeFormLayoutElement
  {
  public:
    AWS_QUICKSIGHT_API FreeFormLayoutElement() = default;
    AWS_QUICKSIGHT_API FreeFormLayoutElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FreeFormLayoutElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline const Aws::String& GetElementId() const { return m_elementId; }
    inline bool ElementIdHasBeenSet() const { return m_elementIdHasBeenSet; }
    template<typename ElementIdT = Aws::String>
    void SetElementId(ElementIdT&& value) { m_elementIdHasBeenSet = true; m_elementId = std::forward<ElementIdT>(value); }
    template<typename ElementIdT = Aws::String>
    FreeFormLayoutElement& WithElementId(ElementIdT&& value) { SetElementId(std::forward<ElementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of element.</p>
     */
    inline LayoutElementType GetElementType() const { return m_elementType; }
    inline bool ElementTypeHasBeenSet() const { return m_elementTypeHasBeenSet; }
    inline void SetElementType(LayoutElementType value) { m_elementTypeHasBeenSet = true; m_elementType = value; }
    inline FreeFormLayoutElement& WithElementType(LayoutElementType value) { SetElementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline const Aws::String& GetXAxisLocation() const { return m_xAxisLocation; }
    inline bool XAxisLocationHasBeenSet() const { return m_xAxisLocationHasBeenSet; }
    template<typename XAxisLocationT = Aws::String>
    void SetXAxisLocation(XAxisLocationT&& value) { m_xAxisLocationHasBeenSet = true; m_xAxisLocation = std::forward<XAxisLocationT>(value); }
    template<typename XAxisLocationT = Aws::String>
    FreeFormLayoutElement& WithXAxisLocation(XAxisLocationT&& value) { SetXAxisLocation(std::forward<XAxisLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline const Aws::String& GetYAxisLocation() const { return m_yAxisLocation; }
    inline bool YAxisLocationHasBeenSet() const { return m_yAxisLocationHasBeenSet; }
    template<typename YAxisLocationT = Aws::String>
    void SetYAxisLocation(YAxisLocationT&& value) { m_yAxisLocationHasBeenSet = true; m_yAxisLocation = std::forward<YAxisLocationT>(value); }
    template<typename YAxisLocationT = Aws::String>
    FreeFormLayoutElement& WithYAxisLocation(YAxisLocationT&& value) { SetYAxisLocation(std::forward<YAxisLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline const Aws::String& GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    template<typename WidthT = Aws::String>
    void SetWidth(WidthT&& value) { m_widthHasBeenSet = true; m_width = std::forward<WidthT>(value); }
    template<typename WidthT = Aws::String>
    FreeFormLayoutElement& WithWidth(WidthT&& value) { SetWidth(std::forward<WidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline const Aws::String& GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    template<typename HeightT = Aws::String>
    void SetHeight(HeightT&& value) { m_heightHasBeenSet = true; m_height = std::forward<HeightT>(value); }
    template<typename HeightT = Aws::String>
    FreeFormLayoutElement& WithHeight(HeightT&& value) { SetHeight(std::forward<HeightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of an element within a free-form layout.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline FreeFormLayoutElement& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline const Aws::Vector<SheetElementRenderingRule>& GetRenderingRules() const { return m_renderingRules; }
    inline bool RenderingRulesHasBeenSet() const { return m_renderingRulesHasBeenSet; }
    template<typename RenderingRulesT = Aws::Vector<SheetElementRenderingRule>>
    void SetRenderingRules(RenderingRulesT&& value) { m_renderingRulesHasBeenSet = true; m_renderingRules = std::forward<RenderingRulesT>(value); }
    template<typename RenderingRulesT = Aws::Vector<SheetElementRenderingRule>>
    FreeFormLayoutElement& WithRenderingRules(RenderingRulesT&& value) { SetRenderingRules(std::forward<RenderingRulesT>(value)); return *this;}
    template<typename RenderingRulesT = SheetElementRenderingRule>
    FreeFormLayoutElement& AddRenderingRules(RenderingRulesT&& value) { m_renderingRulesHasBeenSet = true; m_renderingRules.emplace_back(std::forward<RenderingRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The border style configuration of a free-form layout element.</p>
     */
    inline const FreeFormLayoutElementBorderStyle& GetBorderStyle() const { return m_borderStyle; }
    inline bool BorderStyleHasBeenSet() const { return m_borderStyleHasBeenSet; }
    template<typename BorderStyleT = FreeFormLayoutElementBorderStyle>
    void SetBorderStyle(BorderStyleT&& value) { m_borderStyleHasBeenSet = true; m_borderStyle = std::forward<BorderStyleT>(value); }
    template<typename BorderStyleT = FreeFormLayoutElementBorderStyle>
    FreeFormLayoutElement& WithBorderStyle(BorderStyleT&& value) { SetBorderStyle(std::forward<BorderStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The border style configuration of a free-form layout element. This border
     * style is used when the element is selected.</p>
     */
    inline const FreeFormLayoutElementBorderStyle& GetSelectedBorderStyle() const { return m_selectedBorderStyle; }
    inline bool SelectedBorderStyleHasBeenSet() const { return m_selectedBorderStyleHasBeenSet; }
    template<typename SelectedBorderStyleT = FreeFormLayoutElementBorderStyle>
    void SetSelectedBorderStyle(SelectedBorderStyleT&& value) { m_selectedBorderStyleHasBeenSet = true; m_selectedBorderStyle = std::forward<SelectedBorderStyleT>(value); }
    template<typename SelectedBorderStyleT = FreeFormLayoutElementBorderStyle>
    FreeFormLayoutElement& WithSelectedBorderStyle(SelectedBorderStyleT&& value) { SetSelectedBorderStyle(std::forward<SelectedBorderStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background style configuration of a free-form layout element.</p>
     */
    inline const FreeFormLayoutElementBackgroundStyle& GetBackgroundStyle() const { return m_backgroundStyle; }
    inline bool BackgroundStyleHasBeenSet() const { return m_backgroundStyleHasBeenSet; }
    template<typename BackgroundStyleT = FreeFormLayoutElementBackgroundStyle>
    void SetBackgroundStyle(BackgroundStyleT&& value) { m_backgroundStyleHasBeenSet = true; m_backgroundStyle = std::forward<BackgroundStyleT>(value); }
    template<typename BackgroundStyleT = FreeFormLayoutElementBackgroundStyle>
    FreeFormLayoutElement& WithBackgroundStyle(BackgroundStyleT&& value) { SetBackgroundStyle(std::forward<BackgroundStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The loading animation configuration of a free-form layout element.</p>
     */
    inline const LoadingAnimation& GetLoadingAnimation() const { return m_loadingAnimation; }
    inline bool LoadingAnimationHasBeenSet() const { return m_loadingAnimationHasBeenSet; }
    template<typename LoadingAnimationT = LoadingAnimation>
    void SetLoadingAnimation(LoadingAnimationT&& value) { m_loadingAnimationHasBeenSet = true; m_loadingAnimation = std::forward<LoadingAnimationT>(value); }
    template<typename LoadingAnimationT = LoadingAnimation>
    FreeFormLayoutElement& WithLoadingAnimation(LoadingAnimationT&& value) { SetLoadingAnimation(std::forward<LoadingAnimationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_elementId;
    bool m_elementIdHasBeenSet = false;

    LayoutElementType m_elementType{LayoutElementType::NOT_SET};
    bool m_elementTypeHasBeenSet = false;

    Aws::String m_xAxisLocation;
    bool m_xAxisLocationHasBeenSet = false;

    Aws::String m_yAxisLocation;
    bool m_yAxisLocationHasBeenSet = false;

    Aws::String m_width;
    bool m_widthHasBeenSet = false;

    Aws::String m_height;
    bool m_heightHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    Aws::Vector<SheetElementRenderingRule> m_renderingRules;
    bool m_renderingRulesHasBeenSet = false;

    FreeFormLayoutElementBorderStyle m_borderStyle;
    bool m_borderStyleHasBeenSet = false;

    FreeFormLayoutElementBorderStyle m_selectedBorderStyle;
    bool m_selectedBorderStyleHasBeenSet = false;

    FreeFormLayoutElementBackgroundStyle m_backgroundStyle;
    bool m_backgroundStyleHasBeenSet = false;

    LoadingAnimation m_loadingAnimation;
    bool m_loadingAnimationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
