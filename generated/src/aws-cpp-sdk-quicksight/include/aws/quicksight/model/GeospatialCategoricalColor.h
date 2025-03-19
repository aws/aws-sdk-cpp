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
    AWS_QUICKSIGHT_API GeospatialCategoricalColor() = default;
    AWS_QUICKSIGHT_API GeospatialCategoricalColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialCategoricalColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of categorical data colors for each category.</p>
     */
    inline const Aws::Vector<GeospatialCategoricalDataColor>& GetCategoryDataColors() const { return m_categoryDataColors; }
    inline bool CategoryDataColorsHasBeenSet() const { return m_categoryDataColorsHasBeenSet; }
    template<typename CategoryDataColorsT = Aws::Vector<GeospatialCategoricalDataColor>>
    void SetCategoryDataColors(CategoryDataColorsT&& value) { m_categoryDataColorsHasBeenSet = true; m_categoryDataColors = std::forward<CategoryDataColorsT>(value); }
    template<typename CategoryDataColorsT = Aws::Vector<GeospatialCategoricalDataColor>>
    GeospatialCategoricalColor& WithCategoryDataColors(CategoryDataColorsT&& value) { SetCategoryDataColors(std::forward<CategoryDataColorsT>(value)); return *this;}
    template<typename CategoryDataColorsT = GeospatialCategoricalDataColor>
    GeospatialCategoricalColor& AddCategoryDataColors(CategoryDataColorsT&& value) { m_categoryDataColorsHasBeenSet = true; m_categoryDataColors.emplace_back(std::forward<CategoryDataColorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of visibility for null data.</p>
     */
    inline Visibility GetNullDataVisibility() const { return m_nullDataVisibility; }
    inline bool NullDataVisibilityHasBeenSet() const { return m_nullDataVisibilityHasBeenSet; }
    inline void SetNullDataVisibility(Visibility value) { m_nullDataVisibilityHasBeenSet = true; m_nullDataVisibility = value; }
    inline GeospatialCategoricalColor& WithNullDataVisibility(Visibility value) { SetNullDataVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The null data visualization settings.</p>
     */
    inline const GeospatialNullDataSettings& GetNullDataSettings() const { return m_nullDataSettings; }
    inline bool NullDataSettingsHasBeenSet() const { return m_nullDataSettingsHasBeenSet; }
    template<typename NullDataSettingsT = GeospatialNullDataSettings>
    void SetNullDataSettings(NullDataSettingsT&& value) { m_nullDataSettingsHasBeenSet = true; m_nullDataSettings = std::forward<NullDataSettingsT>(value); }
    template<typename NullDataSettingsT = GeospatialNullDataSettings>
    GeospatialCategoricalColor& WithNullDataSettings(NullDataSettingsT&& value) { SetNullDataSettings(std::forward<NullDataSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default opacity of a categorical color.</p>
     */
    inline double GetDefaultOpacity() const { return m_defaultOpacity; }
    inline bool DefaultOpacityHasBeenSet() const { return m_defaultOpacityHasBeenSet; }
    inline void SetDefaultOpacity(double value) { m_defaultOpacityHasBeenSet = true; m_defaultOpacity = value; }
    inline GeospatialCategoricalColor& WithDefaultOpacity(double value) { SetDefaultOpacity(value); return *this;}
    ///@}
  private:

    Aws::Vector<GeospatialCategoricalDataColor> m_categoryDataColors;
    bool m_categoryDataColorsHasBeenSet = false;

    Visibility m_nullDataVisibility{Visibility::NOT_SET};
    bool m_nullDataVisibilityHasBeenSet = false;

    GeospatialNullDataSettings m_nullDataSettings;
    bool m_nullDataSettingsHasBeenSet = false;

    double m_defaultOpacity{0.0};
    bool m_defaultOpacityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
