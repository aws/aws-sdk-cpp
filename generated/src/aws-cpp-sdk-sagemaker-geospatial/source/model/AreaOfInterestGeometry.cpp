/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/AreaOfInterestGeometry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

AreaOfInterestGeometry::AreaOfInterestGeometry() : 
    m_multiPolygonGeometryHasBeenSet(false),
    m_polygonGeometryHasBeenSet(false)
{
}

AreaOfInterestGeometry::AreaOfInterestGeometry(JsonView jsonValue) : 
    m_multiPolygonGeometryHasBeenSet(false),
    m_polygonGeometryHasBeenSet(false)
{
  *this = jsonValue;
}

AreaOfInterestGeometry& AreaOfInterestGeometry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MultiPolygonGeometry"))
  {
    m_multiPolygonGeometry = jsonValue.GetObject("MultiPolygonGeometry");

    m_multiPolygonGeometryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolygonGeometry"))
  {
    m_polygonGeometry = jsonValue.GetObject("PolygonGeometry");

    m_polygonGeometryHasBeenSet = true;
  }

  return *this;
}

JsonValue AreaOfInterestGeometry::Jsonize() const
{
  JsonValue payload;

  if(m_multiPolygonGeometryHasBeenSet)
  {
   payload.WithObject("MultiPolygonGeometry", m_multiPolygonGeometry.Jsonize());

  }

  if(m_polygonGeometryHasBeenSet)
  {
   payload.WithObject("PolygonGeometry", m_polygonGeometry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
