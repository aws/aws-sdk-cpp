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
    AWS_QUICKSIGHT_API FontConfiguration();
    AWS_QUICKSIGHT_API FontConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FontConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The option that determines the text display size.</p>
     */
    inline const FontSize& GetFontSize() const{ return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    inline void SetFontSize(const FontSize& value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }
    inline void SetFontSize(FontSize&& value) { m_fontSizeHasBeenSet = true; m_fontSize = std::move(value); }
    inline FontConfiguration& WithFontSize(const FontSize& value) { SetFontSize(value); return *this;}
    inline FontConfiguration& WithFontSize(FontSize&& value) { SetFontSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the appearance of decorative lines on the text.</p>
     */
    inline const FontDecoration& GetFontDecoration() const{ return m_fontDecoration; }
    inline bool FontDecorationHasBeenSet() const { return m_fontDecorationHasBeenSet; }
    inline void SetFontDecoration(const FontDecoration& value) { m_fontDecorationHasBeenSet = true; m_fontDecoration = value; }
    inline void SetFontDecoration(FontDecoration&& value) { m_fontDecorationHasBeenSet = true; m_fontDecoration = std::move(value); }
    inline FontConfiguration& WithFontDecoration(const FontDecoration& value) { SetFontDecoration(value); return *this;}
    inline FontConfiguration& WithFontDecoration(FontDecoration&& value) { SetFontDecoration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the color of the text.</p>
     */
    inline const Aws::String& GetFontColor() const{ return m_fontColor; }
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
    inline void SetFontColor(const Aws::String& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }
    inline void SetFontColor(Aws::String&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }
    inline void SetFontColor(const char* value) { m_fontColorHasBeenSet = true; m_fontColor.assign(value); }
    inline FontConfiguration& WithFontColor(const Aws::String& value) { SetFontColor(value); return *this;}
    inline FontConfiguration& WithFontColor(Aws::String&& value) { SetFontColor(std::move(value)); return *this;}
    inline FontConfiguration& WithFontColor(const char* value) { SetFontColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the text display weight, or boldness.</p>
     */
    inline const FontWeight& GetFontWeight() const{ return m_fontWeight; }
    inline bool FontWeightHasBeenSet() const { return m_fontWeightHasBeenSet; }
    inline void SetFontWeight(const FontWeight& value) { m_fontWeightHasBeenSet = true; m_fontWeight = value; }
    inline void SetFontWeight(FontWeight&& value) { m_fontWeightHasBeenSet = true; m_fontWeight = std::move(value); }
    inline FontConfiguration& WithFontWeight(const FontWeight& value) { SetFontWeight(value); return *this;}
    inline FontConfiguration& WithFontWeight(FontWeight&& value) { SetFontWeight(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the text display face that is inherited by the given font
     * family.</p>
     */
    inline const FontStyle& GetFontStyle() const{ return m_fontStyle; }
    inline bool FontStyleHasBeenSet() const { return m_fontStyleHasBeenSet; }
    inline void SetFontStyle(const FontStyle& value) { m_fontStyleHasBeenSet = true; m_fontStyle = value; }
    inline void SetFontStyle(FontStyle&& value) { m_fontStyleHasBeenSet = true; m_fontStyle = std::move(value); }
    inline FontConfiguration& WithFontStyle(const FontStyle& value) { SetFontStyle(value); return *this;}
    inline FontConfiguration& WithFontStyle(FontStyle&& value) { SetFontStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font family that you want to use.</p>
     */
    inline const Aws::String& GetFontFamily() const{ return m_fontFamily; }
    inline bool FontFamilyHasBeenSet() const { return m_fontFamilyHasBeenSet; }
    inline void SetFontFamily(const Aws::String& value) { m_fontFamilyHasBeenSet = true; m_fontFamily = value; }
    inline void SetFontFamily(Aws::String&& value) { m_fontFamilyHasBeenSet = true; m_fontFamily = std::move(value); }
    inline void SetFontFamily(const char* value) { m_fontFamilyHasBeenSet = true; m_fontFamily.assign(value); }
    inline FontConfiguration& WithFontFamily(const Aws::String& value) { SetFontFamily(value); return *this;}
    inline FontConfiguration& WithFontFamily(Aws::String&& value) { SetFontFamily(std::move(value)); return *this;}
    inline FontConfiguration& WithFontFamily(const char* value) { SetFontFamily(value); return *this;}
    ///@}
  private:

    FontSize m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    FontDecoration m_fontDecoration;
    bool m_fontDecorationHasBeenSet = false;

    Aws::String m_fontColor;
    bool m_fontColorHasBeenSet = false;

    FontWeight m_fontWeight;
    bool m_fontWeightHasBeenSet = false;

    FontStyle m_fontStyle;
    bool m_fontStyleHasBeenSet = false;

    Aws::String m_fontFamily;
    bool m_fontFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
