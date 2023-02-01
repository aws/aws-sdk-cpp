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
    AWS_QUICKSIGHT_API PanelConfiguration();
    AWS_QUICKSIGHT_API PanelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PanelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures the title display within each small multiples panel.</p>
     */
    inline const PanelTitleOptions& GetTitle() const{ return m_title; }

    /**
     * <p>Configures the title display within each small multiples panel.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>Configures the title display within each small multiples panel.</p>
     */
    inline void SetTitle(const PanelTitleOptions& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>Configures the title display within each small multiples panel.</p>
     */
    inline void SetTitle(PanelTitleOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>Configures the title display within each small multiples panel.</p>
     */
    inline PanelConfiguration& WithTitle(const PanelTitleOptions& value) { SetTitle(value); return *this;}

    /**
     * <p>Configures the title display within each small multiples panel.</p>
     */
    inline PanelConfiguration& WithTitle(PanelTitleOptions&& value) { SetTitle(std::move(value)); return *this;}


    /**
     * <p>Determines whether or not each panel displays a border.</p>
     */
    inline const Visibility& GetBorderVisibility() const{ return m_borderVisibility; }

    /**
     * <p>Determines whether or not each panel displays a border.</p>
     */
    inline bool BorderVisibilityHasBeenSet() const { return m_borderVisibilityHasBeenSet; }

    /**
     * <p>Determines whether or not each panel displays a border.</p>
     */
    inline void SetBorderVisibility(const Visibility& value) { m_borderVisibilityHasBeenSet = true; m_borderVisibility = value; }

    /**
     * <p>Determines whether or not each panel displays a border.</p>
     */
    inline void SetBorderVisibility(Visibility&& value) { m_borderVisibilityHasBeenSet = true; m_borderVisibility = std::move(value); }

    /**
     * <p>Determines whether or not each panel displays a border.</p>
     */
    inline PanelConfiguration& WithBorderVisibility(const Visibility& value) { SetBorderVisibility(value); return *this;}

    /**
     * <p>Determines whether or not each panel displays a border.</p>
     */
    inline PanelConfiguration& WithBorderVisibility(Visibility&& value) { SetBorderVisibility(std::move(value)); return *this;}


    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline const Aws::String& GetBorderThickness() const{ return m_borderThickness; }

    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline bool BorderThicknessHasBeenSet() const { return m_borderThicknessHasBeenSet; }

    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline void SetBorderThickness(const Aws::String& value) { m_borderThicknessHasBeenSet = true; m_borderThickness = value; }

    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline void SetBorderThickness(Aws::String&& value) { m_borderThicknessHasBeenSet = true; m_borderThickness = std::move(value); }

    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline void SetBorderThickness(const char* value) { m_borderThicknessHasBeenSet = true; m_borderThickness.assign(value); }

    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline PanelConfiguration& WithBorderThickness(const Aws::String& value) { SetBorderThickness(value); return *this;}

    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline PanelConfiguration& WithBorderThickness(Aws::String&& value) { SetBorderThickness(std::move(value)); return *this;}

    /**
     * <p>Sets the line thickness of panel borders.</p>
     */
    inline PanelConfiguration& WithBorderThickness(const char* value) { SetBorderThickness(value); return *this;}


    /**
     * <p>Sets the line style of panel borders.</p>
     */
    inline const PanelBorderStyle& GetBorderStyle() const{ return m_borderStyle; }

    /**
     * <p>Sets the line style of panel borders.</p>
     */
    inline bool BorderStyleHasBeenSet() const { return m_borderStyleHasBeenSet; }

    /**
     * <p>Sets the line style of panel borders.</p>
     */
    inline void SetBorderStyle(const PanelBorderStyle& value) { m_borderStyleHasBeenSet = true; m_borderStyle = value; }

    /**
     * <p>Sets the line style of panel borders.</p>
     */
    inline void SetBorderStyle(PanelBorderStyle&& value) { m_borderStyleHasBeenSet = true; m_borderStyle = std::move(value); }

    /**
     * <p>Sets the line style of panel borders.</p>
     */
    inline PanelConfiguration& WithBorderStyle(const PanelBorderStyle& value) { SetBorderStyle(value); return *this;}

    /**
     * <p>Sets the line style of panel borders.</p>
     */
    inline PanelConfiguration& WithBorderStyle(PanelBorderStyle&& value) { SetBorderStyle(std::move(value)); return *this;}


    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline const Aws::String& GetBorderColor() const{ return m_borderColor; }

    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline bool BorderColorHasBeenSet() const { return m_borderColorHasBeenSet; }

    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline void SetBorderColor(const Aws::String& value) { m_borderColorHasBeenSet = true; m_borderColor = value; }

    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline void SetBorderColor(Aws::String&& value) { m_borderColorHasBeenSet = true; m_borderColor = std::move(value); }

    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline void SetBorderColor(const char* value) { m_borderColorHasBeenSet = true; m_borderColor.assign(value); }

    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline PanelConfiguration& WithBorderColor(const Aws::String& value) { SetBorderColor(value); return *this;}

    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline PanelConfiguration& WithBorderColor(Aws::String&& value) { SetBorderColor(std::move(value)); return *this;}

    /**
     * <p>Sets the line color of panel borders.</p>
     */
    inline PanelConfiguration& WithBorderColor(const char* value) { SetBorderColor(value); return *this;}


    /**
     * <p>Determines whether or not negative space between sibling panels is
     * rendered.</p>
     */
    inline const Visibility& GetGutterVisibility() const{ return m_gutterVisibility; }

    /**
     * <p>Determines whether or not negative space between sibling panels is
     * rendered.</p>
     */
    inline bool GutterVisibilityHasBeenSet() const { return m_gutterVisibilityHasBeenSet; }

    /**
     * <p>Determines whether or not negative space between sibling panels is
     * rendered.</p>
     */
    inline void SetGutterVisibility(const Visibility& value) { m_gutterVisibilityHasBeenSet = true; m_gutterVisibility = value; }

    /**
     * <p>Determines whether or not negative space between sibling panels is
     * rendered.</p>
     */
    inline void SetGutterVisibility(Visibility&& value) { m_gutterVisibilityHasBeenSet = true; m_gutterVisibility = std::move(value); }

    /**
     * <p>Determines whether or not negative space between sibling panels is
     * rendered.</p>
     */
    inline PanelConfiguration& WithGutterVisibility(const Visibility& value) { SetGutterVisibility(value); return *this;}

    /**
     * <p>Determines whether or not negative space between sibling panels is
     * rendered.</p>
     */
    inline PanelConfiguration& WithGutterVisibility(Visibility&& value) { SetGutterVisibility(std::move(value)); return *this;}


    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline const Aws::String& GetGutterSpacing() const{ return m_gutterSpacing; }

    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline bool GutterSpacingHasBeenSet() const { return m_gutterSpacingHasBeenSet; }

    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline void SetGutterSpacing(const Aws::String& value) { m_gutterSpacingHasBeenSet = true; m_gutterSpacing = value; }

    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline void SetGutterSpacing(Aws::String&& value) { m_gutterSpacingHasBeenSet = true; m_gutterSpacing = std::move(value); }

    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline void SetGutterSpacing(const char* value) { m_gutterSpacingHasBeenSet = true; m_gutterSpacing.assign(value); }

    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline PanelConfiguration& WithGutterSpacing(const Aws::String& value) { SetGutterSpacing(value); return *this;}

    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline PanelConfiguration& WithGutterSpacing(Aws::String&& value) { SetGutterSpacing(std::move(value)); return *this;}

    /**
     * <p>Sets the total amount of negative space to display between sibling
     * panels.</p>
     */
    inline PanelConfiguration& WithGutterSpacing(const char* value) { SetGutterSpacing(value); return *this;}


    /**
     * <p>Determines whether or not a background for each small multiples panel is
     * rendered.</p>
     */
    inline const Visibility& GetBackgroundVisibility() const{ return m_backgroundVisibility; }

    /**
     * <p>Determines whether or not a background for each small multiples panel is
     * rendered.</p>
     */
    inline bool BackgroundVisibilityHasBeenSet() const { return m_backgroundVisibilityHasBeenSet; }

    /**
     * <p>Determines whether or not a background for each small multiples panel is
     * rendered.</p>
     */
    inline void SetBackgroundVisibility(const Visibility& value) { m_backgroundVisibilityHasBeenSet = true; m_backgroundVisibility = value; }

    /**
     * <p>Determines whether or not a background for each small multiples panel is
     * rendered.</p>
     */
    inline void SetBackgroundVisibility(Visibility&& value) { m_backgroundVisibilityHasBeenSet = true; m_backgroundVisibility = std::move(value); }

    /**
     * <p>Determines whether or not a background for each small multiples panel is
     * rendered.</p>
     */
    inline PanelConfiguration& WithBackgroundVisibility(const Visibility& value) { SetBackgroundVisibility(value); return *this;}

    /**
     * <p>Determines whether or not a background for each small multiples panel is
     * rendered.</p>
     */
    inline PanelConfiguration& WithBackgroundVisibility(Visibility&& value) { SetBackgroundVisibility(std::move(value)); return *this;}


    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline const Aws::String& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline void SetBackgroundColor(const Aws::String& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline void SetBackgroundColor(Aws::String&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline void SetBackgroundColor(const char* value) { m_backgroundColorHasBeenSet = true; m_backgroundColor.assign(value); }

    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline PanelConfiguration& WithBackgroundColor(const Aws::String& value) { SetBackgroundColor(value); return *this;}

    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline PanelConfiguration& WithBackgroundColor(Aws::String&& value) { SetBackgroundColor(std::move(value)); return *this;}

    /**
     * <p>Sets the background color for each panel.</p>
     */
    inline PanelConfiguration& WithBackgroundColor(const char* value) { SetBackgroundColor(value); return *this;}

  private:

    PanelTitleOptions m_title;
    bool m_titleHasBeenSet = false;

    Visibility m_borderVisibility;
    bool m_borderVisibilityHasBeenSet = false;

    Aws::String m_borderThickness;
    bool m_borderThicknessHasBeenSet = false;

    PanelBorderStyle m_borderStyle;
    bool m_borderStyleHasBeenSet = false;

    Aws::String m_borderColor;
    bool m_borderColorHasBeenSet = false;

    Visibility m_gutterVisibility;
    bool m_gutterVisibilityHasBeenSet = false;

    Aws::String m_gutterSpacing;
    bool m_gutterSpacingHasBeenSet = false;

    Visibility m_backgroundVisibility;
    bool m_backgroundVisibilityHasBeenSet = false;

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
