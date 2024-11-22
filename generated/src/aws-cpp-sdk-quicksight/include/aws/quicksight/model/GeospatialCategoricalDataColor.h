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
    AWS_QUICKSIGHT_API GeospatialCategoricalDataColor();
    AWS_QUICKSIGHT_API GeospatialCategoricalDataColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialCategoricalDataColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color and opacity values for the category data color.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline GeospatialCategoricalDataColor& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline GeospatialCategoricalDataColor& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline GeospatialCategoricalDataColor& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data value for the category data color.</p>
     */
    inline const Aws::String& GetDataValue() const{ return m_dataValue; }
    inline bool DataValueHasBeenSet() const { return m_dataValueHasBeenSet; }
    inline void SetDataValue(const Aws::String& value) { m_dataValueHasBeenSet = true; m_dataValue = value; }
    inline void SetDataValue(Aws::String&& value) { m_dataValueHasBeenSet = true; m_dataValue = std::move(value); }
    inline void SetDataValue(const char* value) { m_dataValueHasBeenSet = true; m_dataValue.assign(value); }
    inline GeospatialCategoricalDataColor& WithDataValue(const Aws::String& value) { SetDataValue(value); return *this;}
    inline GeospatialCategoricalDataColor& WithDataValue(Aws::String&& value) { SetDataValue(std::move(value)); return *this;}
    inline GeospatialCategoricalDataColor& WithDataValue(const char* value) { SetDataValue(value); return *this;}
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
