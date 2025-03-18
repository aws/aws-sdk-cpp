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
    AWS_QUICKSIGHT_API TableCellStyle() = default;
    AWS_QUICKSIGHT_API TableCellStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableCellStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of the table cells.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline TableCellStyle& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font configuration of the table cells.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const { return m_fontConfiguration; }
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }
    template<typename FontConfigurationT = FontConfiguration>
    void SetFontConfiguration(FontConfigurationT&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::forward<FontConfigurationT>(value); }
    template<typename FontConfigurationT = FontConfiguration>
    TableCellStyle& WithFontConfiguration(FontConfigurationT&& value) { SetFontConfiguration(std::forward<FontConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text wrap (none, wrap) for the table cells.</p>
     */
    inline TextWrap GetTextWrap() const { return m_textWrap; }
    inline bool TextWrapHasBeenSet() const { return m_textWrapHasBeenSet; }
    inline void SetTextWrap(TextWrap value) { m_textWrapHasBeenSet = true; m_textWrap = value; }
    inline TableCellStyle& WithTextWrap(TextWrap value) { SetTextWrap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The horizontal text alignment (left, center, right, auto) for the table
     * cells.</p>
     */
    inline HorizontalTextAlignment GetHorizontalTextAlignment() const { return m_horizontalTextAlignment; }
    inline bool HorizontalTextAlignmentHasBeenSet() const { return m_horizontalTextAlignmentHasBeenSet; }
    inline void SetHorizontalTextAlignment(HorizontalTextAlignment value) { m_horizontalTextAlignmentHasBeenSet = true; m_horizontalTextAlignment = value; }
    inline TableCellStyle& WithHorizontalTextAlignment(HorizontalTextAlignment value) { SetHorizontalTextAlignment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vertical text alignment (top, middle, bottom) for the table cells.</p>
     */
    inline VerticalTextAlignment GetVerticalTextAlignment() const { return m_verticalTextAlignment; }
    inline bool VerticalTextAlignmentHasBeenSet() const { return m_verticalTextAlignmentHasBeenSet; }
    inline void SetVerticalTextAlignment(VerticalTextAlignment value) { m_verticalTextAlignmentHasBeenSet = true; m_verticalTextAlignment = value; }
    inline TableCellStyle& WithVerticalTextAlignment(VerticalTextAlignment value) { SetVerticalTextAlignment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color for the table cells.</p>
     */
    inline const Aws::String& GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    template<typename BackgroundColorT = Aws::String>
    void SetBackgroundColor(BackgroundColorT&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::forward<BackgroundColorT>(value); }
    template<typename BackgroundColorT = Aws::String>
    TableCellStyle& WithBackgroundColor(BackgroundColorT&& value) { SetBackgroundColor(std::forward<BackgroundColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height color for the table cells.</p>
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline TableCellStyle& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The borders for the table cells.</p>
     */
    inline const GlobalTableBorderOptions& GetBorder() const { return m_border; }
    inline bool BorderHasBeenSet() const { return m_borderHasBeenSet; }
    template<typename BorderT = GlobalTableBorderOptions>
    void SetBorder(BorderT&& value) { m_borderHasBeenSet = true; m_border = std::forward<BorderT>(value); }
    template<typename BorderT = GlobalTableBorderOptions>
    TableCellStyle& WithBorder(BorderT&& value) { SetBorder(std::forward<BorderT>(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    TextWrap m_textWrap{TextWrap::NOT_SET};
    bool m_textWrapHasBeenSet = false;

    HorizontalTextAlignment m_horizontalTextAlignment{HorizontalTextAlignment::NOT_SET};
    bool m_horizontalTextAlignmentHasBeenSet = false;

    VerticalTextAlignment m_verticalTextAlignment{VerticalTextAlignment::NOT_SET};
    bool m_verticalTextAlignmentHasBeenSet = false;

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    GlobalTableBorderOptions m_border;
    bool m_borderHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
