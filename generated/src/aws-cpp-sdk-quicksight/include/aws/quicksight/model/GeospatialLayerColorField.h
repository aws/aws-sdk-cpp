/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The color field that defines a gradient or categorical style.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLayerColorField">AWS
   * API Reference</a></p>
   */
  class GeospatialLayerColorField
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLayerColorField() = default;
    AWS_QUICKSIGHT_API GeospatialLayerColorField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLayerColorField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of color dimension fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColorDimensionsFields() const { return m_colorDimensionsFields; }
    inline bool ColorDimensionsFieldsHasBeenSet() const { return m_colorDimensionsFieldsHasBeenSet; }
    template<typename ColorDimensionsFieldsT = Aws::Vector<DimensionField>>
    void SetColorDimensionsFields(ColorDimensionsFieldsT&& value) { m_colorDimensionsFieldsHasBeenSet = true; m_colorDimensionsFields = std::forward<ColorDimensionsFieldsT>(value); }
    template<typename ColorDimensionsFieldsT = Aws::Vector<DimensionField>>
    GeospatialLayerColorField& WithColorDimensionsFields(ColorDimensionsFieldsT&& value) { SetColorDimensionsFields(std::forward<ColorDimensionsFieldsT>(value)); return *this;}
    template<typename ColorDimensionsFieldsT = DimensionField>
    GeospatialLayerColorField& AddColorDimensionsFields(ColorDimensionsFieldsT&& value) { m_colorDimensionsFieldsHasBeenSet = true; m_colorDimensionsFields.emplace_back(std::forward<ColorDimensionsFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of color measure fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetColorValuesFields() const { return m_colorValuesFields; }
    inline bool ColorValuesFieldsHasBeenSet() const { return m_colorValuesFieldsHasBeenSet; }
    template<typename ColorValuesFieldsT = Aws::Vector<MeasureField>>
    void SetColorValuesFields(ColorValuesFieldsT&& value) { m_colorValuesFieldsHasBeenSet = true; m_colorValuesFields = std::forward<ColorValuesFieldsT>(value); }
    template<typename ColorValuesFieldsT = Aws::Vector<MeasureField>>
    GeospatialLayerColorField& WithColorValuesFields(ColorValuesFieldsT&& value) { SetColorValuesFields(std::forward<ColorValuesFieldsT>(value)); return *this;}
    template<typename ColorValuesFieldsT = MeasureField>
    GeospatialLayerColorField& AddColorValuesFields(ColorValuesFieldsT&& value) { m_colorValuesFieldsHasBeenSet = true; m_colorValuesFields.emplace_back(std::forward<ColorValuesFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_colorDimensionsFields;
    bool m_colorDimensionsFieldsHasBeenSet = false;

    Aws::Vector<MeasureField> m_colorValuesFields;
    bool m_colorValuesFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
