/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>A description of the dominant colors in an image.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DominantColor">AWS
   * API Reference</a></p>
   */
  class DominantColor
  {
  public:
    AWS_REKOGNITION_API DominantColor();
    AWS_REKOGNITION_API DominantColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DominantColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Red RGB value for a dominant color.</p>
     */
    inline int GetRed() const{ return m_red; }

    /**
     * <p>The Red RGB value for a dominant color.</p>
     */
    inline bool RedHasBeenSet() const { return m_redHasBeenSet; }

    /**
     * <p>The Red RGB value for a dominant color.</p>
     */
    inline void SetRed(int value) { m_redHasBeenSet = true; m_red = value; }

    /**
     * <p>The Red RGB value for a dominant color.</p>
     */
    inline DominantColor& WithRed(int value) { SetRed(value); return *this;}


    /**
     * <p>The Blue RGB value for a dominant color.</p>
     */
    inline int GetBlue() const{ return m_blue; }

    /**
     * <p>The Blue RGB value for a dominant color.</p>
     */
    inline bool BlueHasBeenSet() const { return m_blueHasBeenSet; }

    /**
     * <p>The Blue RGB value for a dominant color.</p>
     */
    inline void SetBlue(int value) { m_blueHasBeenSet = true; m_blue = value; }

    /**
     * <p>The Blue RGB value for a dominant color.</p>
     */
    inline DominantColor& WithBlue(int value) { SetBlue(value); return *this;}


    /**
     * <p>The Green RGB value for a dominant color.</p>
     */
    inline int GetGreen() const{ return m_green; }

    /**
     * <p>The Green RGB value for a dominant color.</p>
     */
    inline bool GreenHasBeenSet() const { return m_greenHasBeenSet; }

    /**
     * <p>The Green RGB value for a dominant color.</p>
     */
    inline void SetGreen(int value) { m_greenHasBeenSet = true; m_green = value; }

    /**
     * <p>The Green RGB value for a dominant color.</p>
     */
    inline DominantColor& WithGreen(int value) { SetGreen(value); return *this;}


    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline const Aws::String& GetHexCode() const{ return m_hexCode; }

    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline bool HexCodeHasBeenSet() const { return m_hexCodeHasBeenSet; }

    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline void SetHexCode(const Aws::String& value) { m_hexCodeHasBeenSet = true; m_hexCode = value; }

    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline void SetHexCode(Aws::String&& value) { m_hexCodeHasBeenSet = true; m_hexCode = std::move(value); }

    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline void SetHexCode(const char* value) { m_hexCodeHasBeenSet = true; m_hexCode.assign(value); }

    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline DominantColor& WithHexCode(const Aws::String& value) { SetHexCode(value); return *this;}

    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline DominantColor& WithHexCode(Aws::String&& value) { SetHexCode(std::move(value)); return *this;}

    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline DominantColor& WithHexCode(const char* value) { SetHexCode(value); return *this;}


    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline const Aws::String& GetCSSColor() const{ return m_cSSColor; }

    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline bool CSSColorHasBeenSet() const { return m_cSSColorHasBeenSet; }

    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline void SetCSSColor(const Aws::String& value) { m_cSSColorHasBeenSet = true; m_cSSColor = value; }

    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline void SetCSSColor(Aws::String&& value) { m_cSSColorHasBeenSet = true; m_cSSColor = std::move(value); }

    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline void SetCSSColor(const char* value) { m_cSSColorHasBeenSet = true; m_cSSColor.assign(value); }

    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline DominantColor& WithCSSColor(const Aws::String& value) { SetCSSColor(value); return *this;}

    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline DominantColor& WithCSSColor(Aws::String&& value) { SetCSSColor(std::move(value)); return *this;}

    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline DominantColor& WithCSSColor(const char* value) { SetCSSColor(value); return *this;}


    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline const Aws::String& GetSimplifiedColor() const{ return m_simplifiedColor; }

    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline bool SimplifiedColorHasBeenSet() const { return m_simplifiedColorHasBeenSet; }

    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline void SetSimplifiedColor(const Aws::String& value) { m_simplifiedColorHasBeenSet = true; m_simplifiedColor = value; }

    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline void SetSimplifiedColor(Aws::String&& value) { m_simplifiedColorHasBeenSet = true; m_simplifiedColor = std::move(value); }

    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline void SetSimplifiedColor(const char* value) { m_simplifiedColorHasBeenSet = true; m_simplifiedColor.assign(value); }

    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline DominantColor& WithSimplifiedColor(const Aws::String& value) { SetSimplifiedColor(value); return *this;}

    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline DominantColor& WithSimplifiedColor(Aws::String&& value) { SetSimplifiedColor(std::move(value)); return *this;}

    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline DominantColor& WithSimplifiedColor(const char* value) { SetSimplifiedColor(value); return *this;}


    /**
     * <p>The percentage of image pixels that have a given dominant color.</p>
     */
    inline double GetPixelPercent() const{ return m_pixelPercent; }

    /**
     * <p>The percentage of image pixels that have a given dominant color.</p>
     */
    inline bool PixelPercentHasBeenSet() const { return m_pixelPercentHasBeenSet; }

    /**
     * <p>The percentage of image pixels that have a given dominant color.</p>
     */
    inline void SetPixelPercent(double value) { m_pixelPercentHasBeenSet = true; m_pixelPercent = value; }

    /**
     * <p>The percentage of image pixels that have a given dominant color.</p>
     */
    inline DominantColor& WithPixelPercent(double value) { SetPixelPercent(value); return *this;}

  private:

    int m_red;
    bool m_redHasBeenSet = false;

    int m_blue;
    bool m_blueHasBeenSet = false;

    int m_green;
    bool m_greenHasBeenSet = false;

    Aws::String m_hexCode;
    bool m_hexCodeHasBeenSet = false;

    Aws::String m_cSSColor;
    bool m_cSSColorHasBeenSet = false;

    Aws::String m_simplifiedColor;
    bool m_simplifiedColorHasBeenSet = false;

    double m_pixelPercent;
    bool m_pixelPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
