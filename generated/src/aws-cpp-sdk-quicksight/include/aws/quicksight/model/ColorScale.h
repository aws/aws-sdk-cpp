/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColorFillType.h>
#include <aws/quicksight/model/DataColor.h>
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
   * <p>Determines the color scale that is applied to the visual.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColorScale">AWS
   * API Reference</a></p>
   */
  class ColorScale
  {
  public:
    AWS_QUICKSIGHT_API ColorScale() = default;
    AWS_QUICKSIGHT_API ColorScale(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColorScale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline const Aws::Vector<DataColor>& GetColors() const { return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    template<typename ColorsT = Aws::Vector<DataColor>>
    void SetColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors = std::forward<ColorsT>(value); }
    template<typename ColorsT = Aws::Vector<DataColor>>
    ColorScale& WithColors(ColorsT&& value) { SetColors(std::forward<ColorsT>(value)); return *this;}
    template<typename ColorsT = DataColor>
    ColorScale& AddColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors.emplace_back(std::forward<ColorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines the color fill type.</p>
     */
    inline ColorFillType GetColorFillType() const { return m_colorFillType; }
    inline bool ColorFillTypeHasBeenSet() const { return m_colorFillTypeHasBeenSet; }
    inline void SetColorFillType(ColorFillType value) { m_colorFillTypeHasBeenSet = true; m_colorFillType = value; }
    inline ColorScale& WithColorFillType(ColorFillType value) { SetColorFillType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the color that is applied to null values.</p>
     */
    inline const DataColor& GetNullValueColor() const { return m_nullValueColor; }
    inline bool NullValueColorHasBeenSet() const { return m_nullValueColorHasBeenSet; }
    template<typename NullValueColorT = DataColor>
    void SetNullValueColor(NullValueColorT&& value) { m_nullValueColorHasBeenSet = true; m_nullValueColor = std::forward<NullValueColorT>(value); }
    template<typename NullValueColorT = DataColor>
    ColorScale& WithNullValueColor(NullValueColorT&& value) { SetNullValueColor(std::forward<NullValueColorT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataColor> m_colors;
    bool m_colorsHasBeenSet = false;

    ColorFillType m_colorFillType{ColorFillType::NOT_SET};
    bool m_colorFillTypeHasBeenSet = false;

    DataColor m_nullValueColor;
    bool m_nullValueColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
