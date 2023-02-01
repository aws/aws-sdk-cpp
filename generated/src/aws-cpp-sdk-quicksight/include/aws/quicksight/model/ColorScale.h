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
    AWS_QUICKSIGHT_API ColorScale();
    AWS_QUICKSIGHT_API ColorScale(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColorScale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline const Aws::Vector<DataColor>& GetColors() const{ return m_colors; }

    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }

    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline void SetColors(const Aws::Vector<DataColor>& value) { m_colorsHasBeenSet = true; m_colors = value; }

    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline void SetColors(Aws::Vector<DataColor>&& value) { m_colorsHasBeenSet = true; m_colors = std::move(value); }

    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline ColorScale& WithColors(const Aws::Vector<DataColor>& value) { SetColors(value); return *this;}

    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline ColorScale& WithColors(Aws::Vector<DataColor>&& value) { SetColors(std::move(value)); return *this;}

    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline ColorScale& AddColors(const DataColor& value) { m_colorsHasBeenSet = true; m_colors.push_back(value); return *this; }

    /**
     * <p>Determines the list of colors that are applied to the visual.</p>
     */
    inline ColorScale& AddColors(DataColor&& value) { m_colorsHasBeenSet = true; m_colors.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines the color fill type.</p>
     */
    inline const ColorFillType& GetColorFillType() const{ return m_colorFillType; }

    /**
     * <p>Determines the color fill type.</p>
     */
    inline bool ColorFillTypeHasBeenSet() const { return m_colorFillTypeHasBeenSet; }

    /**
     * <p>Determines the color fill type.</p>
     */
    inline void SetColorFillType(const ColorFillType& value) { m_colorFillTypeHasBeenSet = true; m_colorFillType = value; }

    /**
     * <p>Determines the color fill type.</p>
     */
    inline void SetColorFillType(ColorFillType&& value) { m_colorFillTypeHasBeenSet = true; m_colorFillType = std::move(value); }

    /**
     * <p>Determines the color fill type.</p>
     */
    inline ColorScale& WithColorFillType(const ColorFillType& value) { SetColorFillType(value); return *this;}

    /**
     * <p>Determines the color fill type.</p>
     */
    inline ColorScale& WithColorFillType(ColorFillType&& value) { SetColorFillType(std::move(value)); return *this;}


    /**
     * <p>Determines the color that is applied to null values.</p>
     */
    inline const DataColor& GetNullValueColor() const{ return m_nullValueColor; }

    /**
     * <p>Determines the color that is applied to null values.</p>
     */
    inline bool NullValueColorHasBeenSet() const { return m_nullValueColorHasBeenSet; }

    /**
     * <p>Determines the color that is applied to null values.</p>
     */
    inline void SetNullValueColor(const DataColor& value) { m_nullValueColorHasBeenSet = true; m_nullValueColor = value; }

    /**
     * <p>Determines the color that is applied to null values.</p>
     */
    inline void SetNullValueColor(DataColor&& value) { m_nullValueColorHasBeenSet = true; m_nullValueColor = std::move(value); }

    /**
     * <p>Determines the color that is applied to null values.</p>
     */
    inline ColorScale& WithNullValueColor(const DataColor& value) { SetNullValueColor(value); return *this;}

    /**
     * <p>Determines the color that is applied to null values.</p>
     */
    inline ColorScale& WithNullValueColor(DataColor&& value) { SetNullValueColor(std::move(value)); return *this;}

  private:

    Aws::Vector<DataColor> m_colors;
    bool m_colorsHasBeenSet = false;

    ColorFillType m_colorFillType;
    bool m_colorFillTypeHasBeenSet = false;

    DataColor m_nullValueColor;
    bool m_nullValueColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
