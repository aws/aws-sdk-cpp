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
    AWS_QUICKSIGHT_API ApplicationTheme();
    AWS_QUICKSIGHT_API ApplicationTheme(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ApplicationTheme& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color palette.</p>
     */
    inline const BrandColorPalette& GetBrandColorPalette() const{ return m_brandColorPalette; }
    inline bool BrandColorPaletteHasBeenSet() const { return m_brandColorPaletteHasBeenSet; }
    inline void SetBrandColorPalette(const BrandColorPalette& value) { m_brandColorPaletteHasBeenSet = true; m_brandColorPalette = value; }
    inline void SetBrandColorPalette(BrandColorPalette&& value) { m_brandColorPaletteHasBeenSet = true; m_brandColorPalette = std::move(value); }
    inline ApplicationTheme& WithBrandColorPalette(const BrandColorPalette& value) { SetBrandColorPalette(value); return *this;}
    inline ApplicationTheme& WithBrandColorPalette(BrandColorPalette&& value) { SetBrandColorPalette(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The element style.</p>
     */
    inline const BrandElementStyle& GetBrandElementStyle() const{ return m_brandElementStyle; }
    inline bool BrandElementStyleHasBeenSet() const { return m_brandElementStyleHasBeenSet; }
    inline void SetBrandElementStyle(const BrandElementStyle& value) { m_brandElementStyleHasBeenSet = true; m_brandElementStyle = value; }
    inline void SetBrandElementStyle(BrandElementStyle&& value) { m_brandElementStyleHasBeenSet = true; m_brandElementStyle = std::move(value); }
    inline ApplicationTheme& WithBrandElementStyle(const BrandElementStyle& value) { SetBrandElementStyle(value); return *this;}
    inline ApplicationTheme& WithBrandElementStyle(BrandElementStyle&& value) { SetBrandElementStyle(std::move(value)); return *this;}
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
