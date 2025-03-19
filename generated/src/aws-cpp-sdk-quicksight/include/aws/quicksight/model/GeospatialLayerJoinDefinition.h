/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/UnaggregatedField.h>
#include <aws/quicksight/model/GeospatialLayerColorField.h>
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
   * <p>The custom actions for a layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLayerJoinDefinition">AWS
   * API Reference</a></p>
   */
  class GeospatialLayerJoinDefinition
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLayerJoinDefinition() = default;
    AWS_QUICKSIGHT_API GeospatialLayerJoinDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLayerJoinDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field or property in the geospatial data source.</p>
     */
    inline const Aws::String& GetShapeKeyField() const { return m_shapeKeyField; }
    inline bool ShapeKeyFieldHasBeenSet() const { return m_shapeKeyFieldHasBeenSet; }
    template<typename ShapeKeyFieldT = Aws::String>
    void SetShapeKeyField(ShapeKeyFieldT&& value) { m_shapeKeyFieldHasBeenSet = true; m_shapeKeyField = std::forward<ShapeKeyFieldT>(value); }
    template<typename ShapeKeyFieldT = Aws::String>
    GeospatialLayerJoinDefinition& WithShapeKeyField(ShapeKeyFieldT&& value) { SetShapeKeyField(std::forward<ShapeKeyFieldT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UnaggregatedField& GetDatasetKeyField() const { return m_datasetKeyField; }
    inline bool DatasetKeyFieldHasBeenSet() const { return m_datasetKeyFieldHasBeenSet; }
    template<typename DatasetKeyFieldT = UnaggregatedField>
    void SetDatasetKeyField(DatasetKeyFieldT&& value) { m_datasetKeyFieldHasBeenSet = true; m_datasetKeyField = std::forward<DatasetKeyFieldT>(value); }
    template<typename DatasetKeyFieldT = UnaggregatedField>
    GeospatialLayerJoinDefinition& WithDatasetKeyField(DatasetKeyFieldT&& value) { SetDatasetKeyField(std::forward<DatasetKeyFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geospatial color field for the join definition.</p>
     */
    inline const GeospatialLayerColorField& GetColorField() const { return m_colorField; }
    inline bool ColorFieldHasBeenSet() const { return m_colorFieldHasBeenSet; }
    template<typename ColorFieldT = GeospatialLayerColorField>
    void SetColorField(ColorFieldT&& value) { m_colorFieldHasBeenSet = true; m_colorField = std::forward<ColorFieldT>(value); }
    template<typename ColorFieldT = GeospatialLayerColorField>
    GeospatialLayerJoinDefinition& WithColorField(ColorFieldT&& value) { SetColorField(std::forward<ColorFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shapeKeyField;
    bool m_shapeKeyFieldHasBeenSet = false;

    UnaggregatedField m_datasetKeyField;
    bool m_datasetKeyFieldHasBeenSet = false;

    GeospatialLayerColorField m_colorField;
    bool m_colorFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
