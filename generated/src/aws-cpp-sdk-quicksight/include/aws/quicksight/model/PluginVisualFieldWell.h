/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PluginVisualAxisName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
#include <aws/quicksight/model/UnaggregatedField.h>
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
   * <p>A collection of field wells for a plugin visual.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PluginVisualFieldWell">AWS
   * API Reference</a></p>
   */
  class PluginVisualFieldWell
  {
  public:
    AWS_QUICKSIGHT_API PluginVisualFieldWell() = default;
    AWS_QUICKSIGHT_API PluginVisualFieldWell(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualFieldWell& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic axis name for the field well.</p>
     */
    inline PluginVisualAxisName GetAxisName() const { return m_axisName; }
    inline bool AxisNameHasBeenSet() const { return m_axisNameHasBeenSet; }
    inline void SetAxisName(PluginVisualAxisName value) { m_axisNameHasBeenSet = true; m_axisName = value; }
    inline PluginVisualFieldWell& WithAxisName(PluginVisualAxisName value) { SetAxisName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of dimensions for the field well.</p>
     */
    inline const Aws::Vector<DimensionField>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<DimensionField>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<DimensionField>>
    PluginVisualFieldWell& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = DimensionField>
    PluginVisualFieldWell& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of measures that exist in the field well.</p>
     */
    inline const Aws::Vector<MeasureField>& GetMeasures() const { return m_measures; }
    inline bool MeasuresHasBeenSet() const { return m_measuresHasBeenSet; }
    template<typename MeasuresT = Aws::Vector<MeasureField>>
    void SetMeasures(MeasuresT&& value) { m_measuresHasBeenSet = true; m_measures = std::forward<MeasuresT>(value); }
    template<typename MeasuresT = Aws::Vector<MeasureField>>
    PluginVisualFieldWell& WithMeasures(MeasuresT&& value) { SetMeasures(std::forward<MeasuresT>(value)); return *this;}
    template<typename MeasuresT = MeasureField>
    PluginVisualFieldWell& AddMeasures(MeasuresT&& value) { m_measuresHasBeenSet = true; m_measures.emplace_back(std::forward<MeasuresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of unaggregated fields that exist in the field well.</p>
     */
    inline const Aws::Vector<UnaggregatedField>& GetUnaggregated() const { return m_unaggregated; }
    inline bool UnaggregatedHasBeenSet() const { return m_unaggregatedHasBeenSet; }
    template<typename UnaggregatedT = Aws::Vector<UnaggregatedField>>
    void SetUnaggregated(UnaggregatedT&& value) { m_unaggregatedHasBeenSet = true; m_unaggregated = std::forward<UnaggregatedT>(value); }
    template<typename UnaggregatedT = Aws::Vector<UnaggregatedField>>
    PluginVisualFieldWell& WithUnaggregated(UnaggregatedT&& value) { SetUnaggregated(std::forward<UnaggregatedT>(value)); return *this;}
    template<typename UnaggregatedT = UnaggregatedField>
    PluginVisualFieldWell& AddUnaggregated(UnaggregatedT&& value) { m_unaggregatedHasBeenSet = true; m_unaggregated.emplace_back(std::forward<UnaggregatedT>(value)); return *this; }
    ///@}
  private:

    PluginVisualAxisName m_axisName{PluginVisualAxisName::NOT_SET};
    bool m_axisNameHasBeenSet = false;

    Aws::Vector<DimensionField> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<MeasureField> m_measures;
    bool m_measuresHasBeenSet = false;

    Aws::Vector<UnaggregatedField> m_unaggregated;
    bool m_unaggregatedHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
