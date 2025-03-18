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
    AWS_QUICKSIGHT_API DataColorPalette() = default;
    AWS_QUICKSIGHT_API DataColorPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataColorPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hexadecimal codes for the colors.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColors() const { return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    template<typename ColorsT = Aws::Vector<Aws::String>>
    void SetColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors = std::forward<ColorsT>(value); }
    template<typename ColorsT = Aws::Vector<Aws::String>>
    DataColorPalette& WithColors(ColorsT&& value) { SetColors(std::forward<ColorsT>(value)); return *this;}
    template<typename ColorsT = Aws::String>
    DataColorPalette& AddColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors.emplace_back(std::forward<ColorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum hexadecimal codes that describe a color gradient.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetMinMaxGradient() const { return m_minMaxGradient; }
    inline bool MinMaxGradientHasBeenSet() const { return m_minMaxGradientHasBeenSet; }
    template<typename MinMaxGradientT = Aws::Vector<Aws::String>>
    void SetMinMaxGradient(MinMaxGradientT&& value) { m_minMaxGradientHasBeenSet = true; m_minMaxGradient = std::forward<MinMaxGradientT>(value); }
    template<typename MinMaxGradientT = Aws::Vector<Aws::String>>
    DataColorPalette& WithMinMaxGradient(MinMaxGradientT&& value) { SetMinMaxGradient(std::forward<MinMaxGradientT>(value)); return *this;}
    template<typename MinMaxGradientT = Aws::String>
    DataColorPalette& AddMinMaxGradient(MinMaxGradientT&& value) { m_minMaxGradientHasBeenSet = true; m_minMaxGradient.emplace_back(std::forward<MinMaxGradientT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The hexadecimal code of a color that applies to charts where a lack of data
     * is highlighted.</p>
     */
    inline const Aws::String& GetEmptyFillColor() const { return m_emptyFillColor; }
    inline bool EmptyFillColorHasBeenSet() const { return m_emptyFillColorHasBeenSet; }
    template<typename EmptyFillColorT = Aws::String>
    void SetEmptyFillColor(EmptyFillColorT&& value) { m_emptyFillColorHasBeenSet = true; m_emptyFillColor = std::forward<EmptyFillColorT>(value); }
    template<typename EmptyFillColorT = Aws::String>
    DataColorPalette& WithEmptyFillColor(EmptyFillColorT&& value) { SetEmptyFillColor(std::forward<EmptyFillColorT>(value)); return *this;}
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
