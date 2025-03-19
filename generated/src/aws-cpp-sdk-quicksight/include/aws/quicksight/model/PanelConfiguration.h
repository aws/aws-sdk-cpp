/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PanelTitleOptions.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/PanelBorderStyle.h>
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
   * <p>A collection of options that configure how each panel displays in a small
   * multiples chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PanelConfiguration">AWS
   * API Reference</a></p>
   */
  class PanelConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PanelConfiguration() = default;
    AWS_QUICKSIGHT_API PanelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PanelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures the title display within each small multiples panel.</p>
     */
    inline const PanelTitleOptions& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = PanelTitleOptions>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = PanelTitleOptions>
    PanelConfiguration& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether or not each panel displays a border.</p>
     */
    inline Visibility GetBorderVisibility() const { return m_borderVisibility; }
    inline bool BorderVisibilityHasBeenSet() const { return m_borderVisibilityHasBeenSet; }
    inline void SetBorderVisibility(Visibility value) { m_borderVisibilityHasBeenSet = true; m_borderVisibility = value; }
    inline PanelConfiguration& WithBorderVisibility(Visibility value) { SetBorderVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline const Aws::String& GetBorderThickness() const { return m_borderThickness; }
    inline bool BorderThicknessHasBeenSet() const { return m_borderThicknessHasBeenSet; }
    template<typename BorderThicknessT = Aws::String>
    void SetBorderThickness(BorderThicknessT&& value) { m_borderThicknessHasBeenSet = true; m_borderThickness = std::forward<BorderThicknessT>(value); }
    template<typename BorderThicknessT = Aws::String>
    PanelConfiguration& WithBorderThickness(BorderThicknessT&& value) { SetBorderThickness(std::forward<BorderThicknessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the line style of panel borders.</p>
     */
    inline PanelBorderStyle GetBorderStyle() const { return m_borderStyle; }
    inline bool BorderStyleHasBeenSet() const { return m_borderStyleHasBeenSet; }
    inline void SetBorderStyle(PanelBorderStyle value) { m_borderStyleHasBeenSet = true; m_borderStyle = value; }
    inline PanelConfiguration& WithBorderStyle(PanelBorderStyle value) { SetBorderStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline const Aws::String& GetBorderColor() const { return m_borderColor; }
    inline bool BorderColorHasBeenSet() const { return m_borderColorHasBeenSet; }
    template<typename BorderColorT = Aws::String>
    void SetBorderColor(BorderColorT&& value) { m_borderColorHasBeenSet = true; m_borderColor = std::forward<BorderColorT>(value); }
    template<typename BorderColorT = Aws::String>
    PanelConfiguration& WithBorderColor(BorderColorT&& value) { SetBorderColor(std::forward<BorderColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether or not negative space between sibling panels is
     * rendered.</p>
     */
    inline Visibility GetGutterVisibility() const { return m_gutterVisibility; }
    inline bool GutterVisibilityHasBeenSet() const { return m_gutterVisibilityHasBeenSet; }
    inline void SetGutterVisibility(Visibility value) { m_gutterVisibilityHasBeenSet = true; m_gutterVisibility = value; }
    inline PanelConfiguration& WithGutterVisibility(Visibility value) { SetGutterVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline const Aws::String& GetGutterSpacing() const { return m_gutterSpacing; }
    inline bool GutterSpacingHasBeenSet() const { return m_gutterSpacingHasBeenSet; }
    template<typename GutterSpacingT = Aws::String>
    void SetGutterSpacing(GutterSpacingT&& value) { m_gutterSpacingHasBeenSet = true; m_gutterSpacing = std::forward<GutterSpacingT>(value); }
    template<typename GutterSpacingT = Aws::String>
    PanelConfiguration& WithGutterSpacing(GutterSpacingT&& value) { SetGutterSpacing(std::forward<GutterSpacingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether or not a background for each small multiples panel is
     * rendered.</p>
     */
    inline Visibility GetBackgroundVisibility() const { return m_backgroundVisibility; }
    inline bool BackgroundVisibilityHasBeenSet() const { return m_backgroundVisibilityHasBeenSet; }
    inline void SetBackgroundVisibility(Visibility value) { m_backgroundVisibilityHasBeenSet = true; m_backgroundVisibility = value; }
    inline PanelConfiguration& WithBackgroundVisibility(Visibility value) { SetBackgroundVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline const Aws::String& GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    template<typename BackgroundColorT = Aws::String>
    void SetBackgroundColor(BackgroundColorT&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::forward<BackgroundColorT>(value); }
    template<typename BackgroundColorT = Aws::String>
    PanelConfiguration& WithBackgroundColor(BackgroundColorT&& value) { SetBackgroundColor(std::forward<BackgroundColorT>(value)); return *this;}
    ///@}
  private:

    PanelTitleOptions m_title;
    bool m_titleHasBeenSet = false;

    Visibility m_borderVisibility{Visibility::NOT_SET};
    bool m_borderVisibilityHasBeenSet = false;

    Aws::String m_borderThickness;
    bool m_borderThicknessHasBeenSet = false;

    PanelBorderStyle m_borderStyle{PanelBorderStyle::NOT_SET};
    bool m_borderStyleHasBeenSet = false;

    Aws::String m_borderColor;
    bool m_borderColorHasBeenSet = false;

    Visibility m_gutterVisibility{Visibility::NOT_SET};
    bool m_gutterVisibilityHasBeenSet = false;

    Aws::String m_gutterSpacing;
    bool m_gutterSpacingHasBeenSet = false;

    Visibility m_backgroundVisibility{Visibility::NOT_SET};
    bool m_backgroundVisibilityHasBeenSet = false;

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
