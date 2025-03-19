/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FontSize.h>
#include <aws/quicksight/model/FontDecoration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FontWeight.h>
#include <aws/quicksight/model/FontStyle.h>
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
   * <p>Configures the display properties of the given text.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FontConfiguration">AWS
   * API Reference</a></p>
   */
  class FontConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FontConfiguration() = default;
    AWS_QUICKSIGHT_API FontConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FontConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The option that determines the text display size.</p>
     */
    inline const FontSize& GetFontSize() const { return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    template<typename FontSizeT = FontSize>
    void SetFontSize(FontSizeT&& value) { m_fontSizeHasBeenSet = true; m_fontSize = std::forward<FontSizeT>(value); }
    template<typename FontSizeT = FontSize>
    FontConfiguration& WithFontSize(FontSizeT&& value) { SetFontSize(std::forward<FontSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the appearance of decorative lines on the text.</p>
     */
    inline FontDecoration GetFontDecoration() const { return m_fontDecoration; }
    inline bool FontDecorationHasBeenSet() const { return m_fontDecorationHasBeenSet; }
    inline void SetFontDecoration(FontDecoration value) { m_fontDecorationHasBeenSet = true; m_fontDecoration = value; }
    inline FontConfiguration& WithFontDecoration(FontDecoration value) { SetFontDecoration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the color of the text.</p>
     */
    inline const Aws::String& GetFontColor() const { return m_fontColor; }
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
    template<typename FontColorT = Aws::String>
    void SetFontColor(FontColorT&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::forward<FontColorT>(value); }
    template<typename FontColorT = Aws::String>
    FontConfiguration& WithFontColor(FontColorT&& value) { SetFontColor(std::forward<FontColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the text display weight, or boldness.</p>
     */
    inline const FontWeight& GetFontWeight() const { return m_fontWeight; }
    inline bool FontWeightHasBeenSet() const { return m_fontWeightHasBeenSet; }
    template<typename FontWeightT = FontWeight>
    void SetFontWeight(FontWeightT&& value) { m_fontWeightHasBeenSet = true; m_fontWeight = std::forward<FontWeightT>(value); }
    template<typename FontWeightT = FontWeight>
    FontConfiguration& WithFontWeight(FontWeightT&& value) { SetFontWeight(std::forward<FontWeightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the text display face that is inherited by the given font
     * family.</p>
     */
    inline FontStyle GetFontStyle() const { return m_fontStyle; }
    inline bool FontStyleHasBeenSet() const { return m_fontStyleHasBeenSet; }
    inline void SetFontStyle(FontStyle value) { m_fontStyleHasBeenSet = true; m_fontStyle = value; }
    inline FontConfiguration& WithFontStyle(FontStyle value) { SetFontStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font family that you want to use.</p>
     */
    inline const Aws::String& GetFontFamily() const { return m_fontFamily; }
    inline bool FontFamilyHasBeenSet() const { return m_fontFamilyHasBeenSet; }
    template<typename FontFamilyT = Aws::String>
    void SetFontFamily(FontFamilyT&& value) { m_fontFamilyHasBeenSet = true; m_fontFamily = std::forward<FontFamilyT>(value); }
    template<typename FontFamilyT = Aws::String>
    FontConfiguration& WithFontFamily(FontFamilyT&& value) { SetFontFamily(std::forward<FontFamilyT>(value)); return *this;}
    ///@}
  private:

    FontSize m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    FontDecoration m_fontDecoration{FontDecoration::NOT_SET};
    bool m_fontDecorationHasBeenSet = false;

    Aws::String m_fontColor;
    bool m_fontColorHasBeenSet = false;

    FontWeight m_fontWeight;
    bool m_fontWeightHasBeenSet = false;

    FontStyle m_fontStyle{FontStyle::NOT_SET};
    bool m_fontStyleHasBeenSet = false;

    Aws::String m_fontFamily;
    bool m_fontFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
