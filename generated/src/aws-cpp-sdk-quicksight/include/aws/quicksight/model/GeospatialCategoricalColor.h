/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/GeospatialNullDataSettings.h>
#include <aws/quicksight/model/GeospatialCategoricalDataColor.h>
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
   * <p>The definition for a categorical color.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialCategoricalColor">AWS
   * API Reference</a></p>
   */
  class GeospatialCategoricalColor
  {
  public:
    AWS_QUICKSIGHT_API GeospatialCategoricalColor();
    AWS_QUICKSIGHT_API GeospatialCategoricalColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialCategoricalColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of categorical data colors for each category.</p>
     */
    inline const Aws::Vector<GeospatialCategoricalDataColor>& GetCategoryDataColors() const{ return m_categoryDataColors; }
    inline bool CategoryDataColorsHasBeenSet() const { return m_categoryDataColorsHasBeenSet; }
    inline void SetCategoryDataColors(const Aws::Vector<GeospatialCategoricalDataColor>& value) { m_categoryDataColorsHasBeenSet = true; m_categoryDataColors = value; }
    inline void SetCategoryDataColors(Aws::Vector<GeospatialCategoricalDataColor>&& value) { m_categoryDataColorsHasBeenSet = true; m_categoryDataColors = std::move(value); }
    inline GeospatialCategoricalColor& WithCategoryDataColors(const Aws::Vector<GeospatialCategoricalDataColor>& value) { SetCategoryDataColors(value); return *this;}
    inline GeospatialCategoricalColor& WithCategoryDataColors(Aws::Vector<GeospatialCategoricalDataColor>&& value) { SetCategoryDataColors(std::move(value)); return *this;}
    inline GeospatialCategoricalColor& AddCategoryDataColors(const GeospatialCategoricalDataColor& value) { m_categoryDataColorsHasBeenSet = true; m_categoryDataColors.push_back(value); return *this; }
    inline GeospatialCategoricalColor& AddCategoryDataColors(GeospatialCategoricalDataColor&& value) { m_categoryDataColorsHasBeenSet = true; m_categoryDataColors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of visibility for null data.</p>
     */
    inline const Visibility& GetNullDataVisibility() const{ return m_nullDataVisibility; }
    inline bool NullDataVisibilityHasBeenSet() const { return m_nullDataVisibilityHasBeenSet; }
    inline void SetNullDataVisibility(const Visibility& value) { m_nullDataVisibilityHasBeenSet = true; m_nullDataVisibility = value; }
    inline void SetNullDataVisibility(Visibility&& value) { m_nullDataVisibilityHasBeenSet = true; m_nullDataVisibility = std::move(value); }
    inline GeospatialCategoricalColor& WithNullDataVisibility(const Visibility& value) { SetNullDataVisibility(value); return *this;}
    inline GeospatialCategoricalColor& WithNullDataVisibility(Visibility&& value) { SetNullDataVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The null data visualization settings.</p>
     */
    inline const GeospatialNullDataSettings& GetNullDataSettings() const{ return m_nullDataSettings; }
    inline bool NullDataSettingsHasBeenSet() const { return m_nullDataSettingsHasBeenSet; }
    inline void SetNullDataSettings(const GeospatialNullDataSettings& value) { m_nullDataSettingsHasBeenSet = true; m_nullDataSettings = value; }
    inline void SetNullDataSettings(GeospatialNullDataSettings&& value) { m_nullDataSettingsHasBeenSet = true; m_nullDataSettings = std::move(value); }
    inline GeospatialCategoricalColor& WithNullDataSettings(const GeospatialNullDataSettings& value) { SetNullDataSettings(value); return *this;}
    inline GeospatialCategoricalColor& WithNullDataSettings(GeospatialNullDataSettings&& value) { SetNullDataSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default opacity of a categorical color.</p>
     */
    inline double GetDefaultOpacity() const{ return m_defaultOpacity; }
    inline bool DefaultOpacityHasBeenSet() const { return m_defaultOpacityHasBeenSet; }
    inline void SetDefaultOpacity(double value) { m_defaultOpacityHasBeenSet = true; m_defaultOpacity = value; }
    inline GeospatialCategoricalColor& WithDefaultOpacity(double value) { SetDefaultOpacity(value); return *this;}
    ///@}
  private:

    Aws::Vector<GeospatialCategoricalDataColor> m_categoryDataColors;
    bool m_categoryDataColorsHasBeenSet = false;

    Visibility m_nullDataVisibility;
    bool m_nullDataVisibilityHasBeenSet = false;

    GeospatialNullDataSettings m_nullDataSettings;
    bool m_nullDataSettingsHasBeenSet = false;

    double m_defaultOpacity;
    bool m_defaultOpacityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
