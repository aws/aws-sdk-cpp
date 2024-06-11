/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The theme colors that are used for data colors in charts. The colors
   * description is a hexadecimal color code that consists of six alphanumerical
   * characters, prefixed with <code>#</code>, for example #37BFF5. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataColorPalette">AWS
   * API Reference</a></p>
   */
  class DataColorPalette
  {
  public:
    AWS_QUICKSIGHT_API DataColorPalette();
    AWS_QUICKSIGHT_API DataColorPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataColorPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hexadecimal codes for the colors.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColors() const{ return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    inline void SetColors(const Aws::Vector<Aws::String>& value) { m_colorsHasBeenSet = true; m_colors = value; }
    inline void SetColors(Aws::Vector<Aws::String>&& value) { m_colorsHasBeenSet = true; m_colors = std::move(value); }
    inline DataColorPalette& WithColors(const Aws::Vector<Aws::String>& value) { SetColors(value); return *this;}
    inline DataColorPalette& WithColors(Aws::Vector<Aws::String>&& value) { SetColors(std::move(value)); return *this;}
    inline DataColorPalette& AddColors(const Aws::String& value) { m_colorsHasBeenSet = true; m_colors.push_back(value); return *this; }
    inline DataColorPalette& AddColors(Aws::String&& value) { m_colorsHasBeenSet = true; m_colors.push_back(std::move(value)); return *this; }
    inline DataColorPalette& AddColors(const char* value) { m_colorsHasBeenSet = true; m_colors.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum hexadecimal codes that describe a color gradient.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetMinMaxGradient() const{ return m_minMaxGradient; }
    inline bool MinMaxGradientHasBeenSet() const { return m_minMaxGradientHasBeenSet; }
    inline void SetMinMaxGradient(const Aws::Vector<Aws::String>& value) { m_minMaxGradientHasBeenSet = true; m_minMaxGradient = value; }
    inline void SetMinMaxGradient(Aws::Vector<Aws::String>&& value) { m_minMaxGradientHasBeenSet = true; m_minMaxGradient = std::move(value); }
    inline DataColorPalette& WithMinMaxGradient(const Aws::Vector<Aws::String>& value) { SetMinMaxGradient(value); return *this;}
    inline DataColorPalette& WithMinMaxGradient(Aws::Vector<Aws::String>&& value) { SetMinMaxGradient(std::move(value)); return *this;}
    inline DataColorPalette& AddMinMaxGradient(const Aws::String& value) { m_minMaxGradientHasBeenSet = true; m_minMaxGradient.push_back(value); return *this; }
    inline DataColorPalette& AddMinMaxGradient(Aws::String&& value) { m_minMaxGradientHasBeenSet = true; m_minMaxGradient.push_back(std::move(value)); return *this; }
    inline DataColorPalette& AddMinMaxGradient(const char* value) { m_minMaxGradientHasBeenSet = true; m_minMaxGradient.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The hexadecimal code of a color that applies to charts where a lack of data
     * is highlighted.</p>
     */
    inline const Aws::String& GetEmptyFillColor() const{ return m_emptyFillColor; }
    inline bool EmptyFillColorHasBeenSet() const { return m_emptyFillColorHasBeenSet; }
    inline void SetEmptyFillColor(const Aws::String& value) { m_emptyFillColorHasBeenSet = true; m_emptyFillColor = value; }
    inline void SetEmptyFillColor(Aws::String&& value) { m_emptyFillColorHasBeenSet = true; m_emptyFillColor = std::move(value); }
    inline void SetEmptyFillColor(const char* value) { m_emptyFillColorHasBeenSet = true; m_emptyFillColor.assign(value); }
    inline DataColorPalette& WithEmptyFillColor(const Aws::String& value) { SetEmptyFillColor(value); return *this;}
    inline DataColorPalette& WithEmptyFillColor(Aws::String&& value) { SetEmptyFillColor(std::move(value)); return *this;}
    inline DataColorPalette& WithEmptyFillColor(const char* value) { SetEmptyFillColor(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_colors;
    bool m_colorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_minMaxGradient;
    bool m_minMaxGradientHasBeenSet = false;

    Aws::String m_emptyFillColor;
    bool m_emptyFillColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
