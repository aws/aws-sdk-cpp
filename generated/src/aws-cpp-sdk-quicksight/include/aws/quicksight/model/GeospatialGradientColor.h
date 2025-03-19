/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/GeospatialNullDataSettings.h>
#include <aws/quicksight/model/GeospatialGradientStepColor.h>
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
   * <p>The definition for a gradient color.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialGradientColor">AWS
   * API Reference</a></p>
   */
  class GeospatialGradientColor
  {
  public:
    AWS_QUICKSIGHT_API GeospatialGradientColor() = default;
    AWS_QUICKSIGHT_API GeospatialGradientColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialGradientColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of gradient step colors for the gradient.</p>
     */
    inline const Aws::Vector<GeospatialGradientStepColor>& GetStepColors() const { return m_stepColors; }
    inline bool StepColorsHasBeenSet() const { return m_stepColorsHasBeenSet; }
    template<typename StepColorsT = Aws::Vector<GeospatialGradientStepColor>>
    void SetStepColors(StepColorsT&& value) { m_stepColorsHasBeenSet = true; m_stepColors = std::forward<StepColorsT>(value); }
    template<typename StepColorsT = Aws::Vector<GeospatialGradientStepColor>>
    GeospatialGradientColor& WithStepColors(StepColorsT&& value) { SetStepColors(std::forward<StepColorsT>(value)); return *this;}
    template<typename StepColorsT = GeospatialGradientStepColor>
    GeospatialGradientColor& AddStepColors(StepColorsT&& value) { m_stepColorsHasBeenSet = true; m_stepColors.emplace_back(std::forward<StepColorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of visibility for null data.</p>
     */
    inline Visibility GetNullDataVisibility() const { return m_nullDataVisibility; }
    inline bool NullDataVisibilityHasBeenSet() const { return m_nullDataVisibilityHasBeenSet; }
    inline void SetNullDataVisibility(Visibility value) { m_nullDataVisibilityHasBeenSet = true; m_nullDataVisibility = value; }
    inline GeospatialGradientColor& WithNullDataVisibility(Visibility value) { SetNullDataVisibility(value); return *this;}
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
    GeospatialGradientColor& WithNullDataSettings(NullDataSettingsT&& value) { SetNullDataSettings(std::forward<NullDataSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default opacity for the gradient color.</p>
     */
    inline double GetDefaultOpacity() const { return m_defaultOpacity; }
    inline bool DefaultOpacityHasBeenSet() const { return m_defaultOpacityHasBeenSet; }
    inline void SetDefaultOpacity(double value) { m_defaultOpacityHasBeenSet = true; m_defaultOpacity = value; }
    inline GeospatialGradientColor& WithDefaultOpacity(double value) { SetDefaultOpacity(value); return *this;}
    ///@}
  private:

    Aws::Vector<GeospatialGradientStepColor> m_stepColors;
    bool m_stepColorsHasBeenSet = false;

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
