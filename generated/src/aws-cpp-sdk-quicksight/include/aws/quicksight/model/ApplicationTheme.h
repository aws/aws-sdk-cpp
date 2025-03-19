/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BrandColorPalette.h>
#include <aws/quicksight/model/BrandElementStyle.h>
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
   * <p>The application theme.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ApplicationTheme">AWS
   * API Reference</a></p>
   */
  class ApplicationTheme
  {
  public:
    AWS_QUICKSIGHT_API ApplicationTheme() = default;
    AWS_QUICKSIGHT_API ApplicationTheme(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ApplicationTheme& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color palette.</p>
     */
    inline const BrandColorPalette& GetBrandColorPalette() const { return m_brandColorPalette; }
    inline bool BrandColorPaletteHasBeenSet() const { return m_brandColorPaletteHasBeenSet; }
    template<typename BrandColorPaletteT = BrandColorPalette>
    void SetBrandColorPalette(BrandColorPaletteT&& value) { m_brandColorPaletteHasBeenSet = true; m_brandColorPalette = std::forward<BrandColorPaletteT>(value); }
    template<typename BrandColorPaletteT = BrandColorPalette>
    ApplicationTheme& WithBrandColorPalette(BrandColorPaletteT&& value) { SetBrandColorPalette(std::forward<BrandColorPaletteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The element style.</p>
     */
    inline const BrandElementStyle& GetBrandElementStyle() const { return m_brandElementStyle; }
    inline bool BrandElementStyleHasBeenSet() const { return m_brandElementStyleHasBeenSet; }
    template<typename BrandElementStyleT = BrandElementStyle>
    void SetBrandElementStyle(BrandElementStyleT&& value) { m_brandElementStyleHasBeenSet = true; m_brandElementStyle = std::forward<BrandElementStyleT>(value); }
    template<typename BrandElementStyleT = BrandElementStyle>
    ApplicationTheme& WithBrandElementStyle(BrandElementStyleT&& value) { SetBrandElementStyle(std::forward<BrandElementStyleT>(value)); return *this;}
    ///@}
  private:

    BrandColorPalette m_brandColorPalette;
    bool m_brandColorPaletteHasBeenSet = false;

    BrandElementStyle m_brandElementStyle;
    bool m_brandElementStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
