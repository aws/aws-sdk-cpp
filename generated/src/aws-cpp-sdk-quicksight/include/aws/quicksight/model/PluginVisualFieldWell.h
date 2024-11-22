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
    AWS_QUICKSIGHT_API PluginVisualFieldWell();
    AWS_QUICKSIGHT_API PluginVisualFieldWell(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualFieldWell& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic axis name for the field well.</p>
     */
    inline const PluginVisualAxisName& GetAxisName() const{ return m_axisName; }
    inline bool AxisNameHasBeenSet() const { return m_axisNameHasBeenSet; }
    inline void SetAxisName(const PluginVisualAxisName& value) { m_axisNameHasBeenSet = true; m_axisName = value; }
    inline void SetAxisName(PluginVisualAxisName&& value) { m_axisNameHasBeenSet = true; m_axisName = std::move(value); }
    inline PluginVisualFieldWell& WithAxisName(const PluginVisualAxisName& value) { SetAxisName(value); return *this;}
    inline PluginVisualFieldWell& WithAxisName(PluginVisualAxisName&& value) { SetAxisName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of dimensions for the field well.</p>
     */
    inline const Aws::Vector<DimensionField>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<DimensionField>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<DimensionField>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline PluginVisualFieldWell& WithDimensions(const Aws::Vector<DimensionField>& value) { SetDimensions(value); return *this;}
    inline PluginVisualFieldWell& WithDimensions(Aws::Vector<DimensionField>&& value) { SetDimensions(std::move(value)); return *this;}
    inline PluginVisualFieldWell& AddDimensions(const DimensionField& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline PluginVisualFieldWell& AddDimensions(DimensionField&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of measures that exist in the field well.</p>
     */
    inline const Aws::Vector<MeasureField>& GetMeasures() const{ return m_measures; }
    inline bool MeasuresHasBeenSet() const { return m_measuresHasBeenSet; }
    inline void SetMeasures(const Aws::Vector<MeasureField>& value) { m_measuresHasBeenSet = true; m_measures = value; }
    inline void SetMeasures(Aws::Vector<MeasureField>&& value) { m_measuresHasBeenSet = true; m_measures = std::move(value); }
    inline PluginVisualFieldWell& WithMeasures(const Aws::Vector<MeasureField>& value) { SetMeasures(value); return *this;}
    inline PluginVisualFieldWell& WithMeasures(Aws::Vector<MeasureField>&& value) { SetMeasures(std::move(value)); return *this;}
    inline PluginVisualFieldWell& AddMeasures(const MeasureField& value) { m_measuresHasBeenSet = true; m_measures.push_back(value); return *this; }
    inline PluginVisualFieldWell& AddMeasures(MeasureField&& value) { m_measuresHasBeenSet = true; m_measures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of unaggregated fields that exist in the field well.</p>
     */
    inline const Aws::Vector<UnaggregatedField>& GetUnaggregated() const{ return m_unaggregated; }
    inline bool UnaggregatedHasBeenSet() const { return m_unaggregatedHasBeenSet; }
    inline void SetUnaggregated(const Aws::Vector<UnaggregatedField>& value) { m_unaggregatedHasBeenSet = true; m_unaggregated = value; }
    inline void SetUnaggregated(Aws::Vector<UnaggregatedField>&& value) { m_unaggregatedHasBeenSet = true; m_unaggregated = std::move(value); }
    inline PluginVisualFieldWell& WithUnaggregated(const Aws::Vector<UnaggregatedField>& value) { SetUnaggregated(value); return *this;}
    inline PluginVisualFieldWell& WithUnaggregated(Aws::Vector<UnaggregatedField>&& value) { SetUnaggregated(std::move(value)); return *this;}
    inline PluginVisualFieldWell& AddUnaggregated(const UnaggregatedField& value) { m_unaggregatedHasBeenSet = true; m_unaggregated.push_back(value); return *this; }
    inline PluginVisualFieldWell& AddUnaggregated(UnaggregatedField&& value) { m_unaggregatedHasBeenSet = true; m_unaggregated.push_back(std::move(value)); return *this; }
    ///@}
  private:

    PluginVisualAxisName m_axisName;
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
