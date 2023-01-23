/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/quicksight/model/TextWrap.h>
#include <aws/quicksight/model/HorizontalTextAlignment.h>
#include <aws/quicksight/model/VerticalTextAlignment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GlobalTableBorderOptions.h>
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
   * <p>The table cell style for a cell in pivot table or table visual.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableCellStyle">AWS
   * API Reference</a></p>
   */
  class TableCellStyle
  {
  public:
    AWS_QUICKSIGHT_API TableCellStyle();
    AWS_QUICKSIGHT_API TableCellStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableCellStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The visibility of the table cells.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the table cells.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the table cells.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the table cells.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the table cells.</p>
     */
    inline TableCellStyle& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the table cells.</p>
     */
    inline TableCellStyle& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The font configuration of the table cells.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const{ return m_fontConfiguration; }

    /**
     * <p>The font configuration of the table cells.</p>
     */
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }

    /**
     * <p>The font configuration of the table cells.</p>
     */
    inline void SetFontConfiguration(const FontConfiguration& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = value; }

    /**
     * <p>The font configuration of the table cells.</p>
     */
    inline void SetFontConfiguration(FontConfiguration&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::move(value); }

    /**
     * <p>The font configuration of the table cells.</p>
     */
    inline TableCellStyle& WithFontConfiguration(const FontConfiguration& value) { SetFontConfiguration(value); return *this;}

    /**
     * <p>The font configuration of the table cells.</p>
     */
    inline TableCellStyle& WithFontConfiguration(FontConfiguration&& value) { SetFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>The text wrap (none, wrap) for the table cells.</p>
     */
    inline const TextWrap& GetTextWrap() const{ return m_textWrap; }

    /**
     * <p>The text wrap (none, wrap) for the table cells.</p>
     */
    inline bool TextWrapHasBeenSet() const { return m_textWrapHasBeenSet; }

    /**
     * <p>The text wrap (none, wrap) for the table cells.</p>
     */
    inline void SetTextWrap(const TextWrap& value) { m_textWrapHasBeenSet = true; m_textWrap = value; }

    /**
     * <p>The text wrap (none, wrap) for the table cells.</p>
     */
    inline void SetTextWrap(TextWrap&& value) { m_textWrapHasBeenSet = true; m_textWrap = std::move(value); }

    /**
     * <p>The text wrap (none, wrap) for the table cells.</p>
     */
    inline TableCellStyle& WithTextWrap(const TextWrap& value) { SetTextWrap(value); return *this;}

    /**
     * <p>The text wrap (none, wrap) for the table cells.</p>
     */
    inline TableCellStyle& WithTextWrap(TextWrap&& value) { SetTextWrap(std::move(value)); return *this;}


    /**
     * <p>The horizontal text alignment (left, center, right, auto) for the table
     * cells.</p>
     */
    inline const HorizontalTextAlignment& GetHorizontalTextAlignment() const{ return m_horizontalTextAlignment; }

    /**
     * <p>The horizontal text alignment (left, center, right, auto) for the table
     * cells.</p>
     */
    inline bool HorizontalTextAlignmentHasBeenSet() const { return m_horizontalTextAlignmentHasBeenSet; }

    /**
     * <p>The horizontal text alignment (left, center, right, auto) for the table
     * cells.</p>
     */
    inline void SetHorizontalTextAlignment(const HorizontalTextAlignment& value) { m_horizontalTextAlignmentHasBeenSet = true; m_horizontalTextAlignment = value; }

    /**
     * <p>The horizontal text alignment (left, center, right, auto) for the table
     * cells.</p>
     */
    inline void SetHorizontalTextAlignment(HorizontalTextAlignment&& value) { m_horizontalTextAlignmentHasBeenSet = true; m_horizontalTextAlignment = std::move(value); }

    /**
     * <p>The horizontal text alignment (left, center, right, auto) for the table
     * cells.</p>
     */
    inline TableCellStyle& WithHorizontalTextAlignment(const HorizontalTextAlignment& value) { SetHorizontalTextAlignment(value); return *this;}

    /**
     * <p>The horizontal text alignment (left, center, right, auto) for the table
     * cells.</p>
     */
    inline TableCellStyle& WithHorizontalTextAlignment(HorizontalTextAlignment&& value) { SetHorizontalTextAlignment(std::move(value)); return *this;}


    /**
     * <p>The vertical text alignment (top, middle, bottom) for the table cells.</p>
     */
    inline const VerticalTextAlignment& GetVerticalTextAlignment() const{ return m_verticalTextAlignment; }

    /**
     * <p>The vertical text alignment (top, middle, bottom) for the table cells.</p>
     */
    inline bool VerticalTextAlignmentHasBeenSet() const { return m_verticalTextAlignmentHasBeenSet; }

    /**
     * <p>The vertical text alignment (top, middle, bottom) for the table cells.</p>
     */
    inline void SetVerticalTextAlignment(const VerticalTextAlignment& value) { m_verticalTextAlignmentHasBeenSet = true; m_verticalTextAlignment = value; }

    /**
     * <p>The vertical text alignment (top, middle, bottom) for the table cells.</p>
     */
    inline void SetVerticalTextAlignment(VerticalTextAlignment&& value) { m_verticalTextAlignmentHasBeenSet = true; m_verticalTextAlignment = std::move(value); }

    /**
     * <p>The vertical text alignment (top, middle, bottom) for the table cells.</p>
     */
    inline TableCellStyle& WithVerticalTextAlignment(const VerticalTextAlignment& value) { SetVerticalTextAlignment(value); return *this;}

    /**
     * <p>The vertical text alignment (top, middle, bottom) for the table cells.</p>
     */
    inline TableCellStyle& WithVerticalTextAlignment(VerticalTextAlignment&& value) { SetVerticalTextAlignment(std::move(value)); return *this;}


    /**
     * <p>The background color for the table cells.</p>
     */
    inline const Aws::String& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * <p>The background color for the table cells.</p>
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * <p>The background color for the table cells.</p>
     */
    inline void SetBackgroundColor(const Aws::String& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * <p>The background color for the table cells.</p>
     */
    inline void SetBackgroundColor(Aws::String&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * <p>The background color for the table cells.</p>
     */
    inline void SetBackgroundColor(const char* value) { m_backgroundColorHasBeenSet = true; m_backgroundColor.assign(value); }

    /**
     * <p>The background color for the table cells.</p>
     */
    inline TableCellStyle& WithBackgroundColor(const Aws::String& value) { SetBackgroundColor(value); return *this;}

    /**
     * <p>The background color for the table cells.</p>
     */
    inline TableCellStyle& WithBackgroundColor(Aws::String&& value) { SetBackgroundColor(std::move(value)); return *this;}

    /**
     * <p>The background color for the table cells.</p>
     */
    inline TableCellStyle& WithBackgroundColor(const char* value) { SetBackgroundColor(value); return *this;}


    /**
     * <p>The height color for the table cells.</p>
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * <p>The height color for the table cells.</p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>The height color for the table cells.</p>
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>The height color for the table cells.</p>
     */
    inline TableCellStyle& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * <p>The borders for the table cells.</p>
     */
    inline const GlobalTableBorderOptions& GetBorder() const{ return m_border; }

    /**
     * <p>The borders for the table cells.</p>
     */
    inline bool BorderHasBeenSet() const { return m_borderHasBeenSet; }

    /**
     * <p>The borders for the table cells.</p>
     */
    inline void SetBorder(const GlobalTableBorderOptions& value) { m_borderHasBeenSet = true; m_border = value; }

    /**
     * <p>The borders for the table cells.</p>
     */
    inline void SetBorder(GlobalTableBorderOptions&& value) { m_borderHasBeenSet = true; m_border = std::move(value); }

    /**
     * <p>The borders for the table cells.</p>
     */
    inline TableCellStyle& WithBorder(const GlobalTableBorderOptions& value) { SetBorder(value); return *this;}

    /**
     * <p>The borders for the table cells.</p>
     */
    inline TableCellStyle& WithBorder(GlobalTableBorderOptions&& value) { SetBorder(std::move(value)); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    TextWrap m_textWrap;
    bool m_textWrapHasBeenSet = false;

    HorizontalTextAlignment m_horizontalTextAlignment;
    bool m_horizontalTextAlignmentHasBeenSet = false;

    VerticalTextAlignment m_verticalTextAlignment;
    bool m_verticalTextAlignmentHasBeenSet = false;

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_height;
    bool m_heightHasBeenSet = false;

    GlobalTableBorderOptions m_border;
    bool m_borderHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
