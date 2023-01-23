/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/RegionOfInterest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

RegionOfInterest::RegionOfInterest() : 
    m_boundingBoxHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
}

RegionOfInterest::RegionOfInterest(JsonView jsonValue) : 
    m_boundingBoxHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
  *this = jsonValue;
}

RegionOfInterest& RegionOfInterest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Polygon"))
  {
    Aws::Utils::Array<JsonView> polygonJsonList = jsonValue.GetArray("Polygon");
    for(unsigned polygonIndex = 0; polygonIndex < polygonJsonList.GetLength(); ++polygonIndex)
    {
      m_polygon.push_back(polygonJsonList[polygonIndex].AsObject());
    }
    m_polygonHasBeenSet = true;
  }

  return *this;
}

JsonValue RegionOfInterest::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_polygonHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> polygonJsonList(m_polygon.size());
   for(unsigned polygonIndex = 0; polygonIndex < polygonJsonList.GetLength(); ++polygonIndex)
   {
     polygonJsonList[polygonIndex].AsObject(m_polygon[polygonIndex].Jsonize());
   }
   payload.WithArray("Polygon", std::move(polygonJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
