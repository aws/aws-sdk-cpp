/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLayerJoinDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

GeospatialLayerJoinDefinition::GeospatialLayerJoinDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialLayerJoinDefinition& GeospatialLayerJoinDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShapeKeyField"))
  {
    m_shapeKeyField = jsonValue.GetString("ShapeKeyField");
    m_shapeKeyFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetKeyField"))
  {
    m_datasetKeyField = jsonValue.GetObject("DatasetKeyField");
    m_datasetKeyFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColorField"))
  {
    m_colorField = jsonValue.GetObject("ColorField");
    m_colorFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialLayerJoinDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_shapeKeyFieldHasBeenSet)
  {
   payload.WithString("ShapeKeyField", m_shapeKeyField);

  }

  if(m_datasetKeyFieldHasBeenSet)
  {
   payload.WithObject("DatasetKeyField", m_datasetKeyField.Jsonize());

  }

  if(m_colorFieldHasBeenSet)
  {
   payload.WithObject("ColorField", m_colorField.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
