/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The categorical data color for a single category.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialCategoricalDataColor">AWS
   * API Reference</a></p>
   */
  class GeospatialCategoricalDataColor
  {
  public:
    AWS_QUICKSIGHT_API GeospatialCategoricalDataColor() = default;
    AWS_QUICKSIGHT_API GeospatialCategoricalDataColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialCategoricalDataColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color and opacity values for the category data color.</p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    GeospatialCategoricalDataColor& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data value for the category data color.</p>
     */
    inline const Aws::String& GetDataValue() const { return m_dataValue; }
    inline bool DataValueHasBeenSet() const { return m_dataValueHasBeenSet; }
    template<typename DataValueT = Aws::String>
    void SetDataValue(DataValueT&& value) { m_dataValueHasBeenSet = true; m_dataValue = std::forward<DataValueT>(value); }
    template<typename DataValueT = Aws::String>
    GeospatialCategoricalDataColor& WithDataValue(DataValueT&& value) { SetDataValue(std::forward<DataValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    Aws::String m_dataValue;
    bool m_dataValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
