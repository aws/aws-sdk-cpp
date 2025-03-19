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
    AWS_REKOGNITION_API DominantColor() = default;
    AWS_REKOGNITION_API DominantColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DominantColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Red RGB value for a dominant color.</p>
     */
    inline int GetRed() const { return m_red; }
    inline bool RedHasBeenSet() const { return m_redHasBeenSet; }
    inline void SetRed(int value) { m_redHasBeenSet = true; m_red = value; }
    inline DominantColor& WithRed(int value) { SetRed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Blue RGB value for a dominant color.</p>
     */
    inline int GetBlue() const { return m_blue; }
    inline bool BlueHasBeenSet() const { return m_blueHasBeenSet; }
    inline void SetBlue(int value) { m_blueHasBeenSet = true; m_blue = value; }
    inline DominantColor& WithBlue(int value) { SetBlue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Green RGB value for a dominant color.</p>
     */
    inline int GetGreen() const { return m_green; }
    inline bool GreenHasBeenSet() const { return m_greenHasBeenSet; }
    inline void SetGreen(int value) { m_greenHasBeenSet = true; m_green = value; }
    inline DominantColor& WithGreen(int value) { SetGreen(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Hex code equivalent of the RGB values for a dominant color.</p>
     */
    inline const Aws::String& GetHexCode() const { return m_hexCode; }
    inline bool HexCodeHasBeenSet() const { return m_hexCodeHasBeenSet; }
    template<typename HexCodeT = Aws::String>
    void SetHexCode(HexCodeT&& value) { m_hexCodeHasBeenSet = true; m_hexCode = std::forward<HexCodeT>(value); }
    template<typename HexCodeT = Aws::String>
    DominantColor& WithHexCode(HexCodeT&& value) { SetHexCode(std::forward<HexCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CSS color name of a dominant color.</p>
     */
    inline const Aws::String& GetCSSColor() const { return m_cSSColor; }
    inline bool CSSColorHasBeenSet() const { return m_cSSColorHasBeenSet; }
    template<typename CSSColorT = Aws::String>
    void SetCSSColor(CSSColorT&& value) { m_cSSColorHasBeenSet = true; m_cSSColor = std::forward<CSSColorT>(value); }
    template<typename CSSColorT = Aws::String>
    DominantColor& WithCSSColor(CSSColorT&& value) { SetCSSColor(std::forward<CSSColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of 12 simplified color names applied to a dominant color.</p>
     */
    inline const Aws::String& GetSimplifiedColor() const { return m_simplifiedColor; }
    inline bool SimplifiedColorHasBeenSet() const { return m_simplifiedColorHasBeenSet; }
    template<typename SimplifiedColorT = Aws::String>
    void SetSimplifiedColor(SimplifiedColorT&& value) { m_simplifiedColorHasBeenSet = true; m_simplifiedColor = std::forward<SimplifiedColorT>(value); }
    template<typename SimplifiedColorT = Aws::String>
    DominantColor& WithSimplifiedColor(SimplifiedColorT&& value) { SetSimplifiedColor(std::forward<SimplifiedColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of image pixels that have a given dominant color.</p>
     */
    inline double GetPixelPercent() const { return m_pixelPercent; }
    inline bool PixelPercentHasBeenSet() const { return m_pixelPercentHasBeenSet; }
    inline void SetPixelPercent(double value) { m_pixelPercentHasBeenSet = true; m_pixelPercent = value; }
    inline DominantColor& WithPixelPercent(double value) { SetPixelPercent(value); return *this;}
    ///@}
  private:

    int m_red{0};
    bool m_redHasBeenSet = false;

    int m_blue{0};
    bool m_blueHasBeenSet = false;

    int m_green{0};
    bool m_greenHasBeenSet = false;

    Aws::String m_hexCode;
    bool m_hexCodeHasBeenSet = false;

    Aws::String m_cSSColor;
    bool m_cSSColorHasBeenSet = false;

    Aws::String m_simplifiedColor;
    bool m_simplifiedColorHasBeenSet = false;

    double m_pixelPercent{0.0};
    bool m_pixelPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
