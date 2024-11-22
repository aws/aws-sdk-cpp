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
    AWS_QUICKSIGHT_API GeospatialLayerColorField();
    AWS_QUICKSIGHT_API GeospatialLayerColorField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLayerColorField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of color dimension fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColorDimensionsFields() const{ return m_colorDimensionsFields; }
    inline bool ColorDimensionsFieldsHasBeenSet() const { return m_colorDimensionsFieldsHasBeenSet; }
    inline void SetColorDimensionsFields(const Aws::Vector<DimensionField>& value) { m_colorDimensionsFieldsHasBeenSet = true; m_colorDimensionsFields = value; }
    inline void SetColorDimensionsFields(Aws::Vector<DimensionField>&& value) { m_colorDimensionsFieldsHasBeenSet = true; m_colorDimensionsFields = std::move(value); }
    inline GeospatialLayerColorField& WithColorDimensionsFields(const Aws::Vector<DimensionField>& value) { SetColorDimensionsFields(value); return *this;}
    inline GeospatialLayerColorField& WithColorDimensionsFields(Aws::Vector<DimensionField>&& value) { SetColorDimensionsFields(std::move(value)); return *this;}
    inline GeospatialLayerColorField& AddColorDimensionsFields(const DimensionField& value) { m_colorDimensionsFieldsHasBeenSet = true; m_colorDimensionsFields.push_back(value); return *this; }
    inline GeospatialLayerColorField& AddColorDimensionsFields(DimensionField&& value) { m_colorDimensionsFieldsHasBeenSet = true; m_colorDimensionsFields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of color measure fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetColorValuesFields() const{ return m_colorValuesFields; }
    inline bool ColorValuesFieldsHasBeenSet() const { return m_colorValuesFieldsHasBeenSet; }
    inline void SetColorValuesFields(const Aws::Vector<MeasureField>& value) { m_colorValuesFieldsHasBeenSet = true; m_colorValuesFields = value; }
    inline void SetColorValuesFields(Aws::Vector<MeasureField>&& value) { m_colorValuesFieldsHasBeenSet = true; m_colorValuesFields = std::move(value); }
    inline GeospatialLayerColorField& WithColorValuesFields(const Aws::Vector<MeasureField>& value) { SetColorValuesFields(value); return *this;}
    inline GeospatialLayerColorField& WithColorValuesFields(Aws::Vector<MeasureField>&& value) { SetColorValuesFields(std::move(value)); return *this;}
    inline GeospatialLayerColorField& AddColorValuesFields(const MeasureField& value) { m_colorValuesFieldsHasBeenSet = true; m_colorValuesFields.push_back(value); return *this; }
    inline GeospatialLayerColorField& AddColorValuesFields(MeasureField&& value) { m_colorValuesFieldsHasBeenSet = true; m_colorValuesFields.push_back(std::move(value)); return *this; }
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
