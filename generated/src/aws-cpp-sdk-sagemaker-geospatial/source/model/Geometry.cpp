﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/Geometry.h>
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

Geometry::Geometry(JsonView jsonValue)
{
  *this = jsonValue;
}

Geometry& Geometry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Coordinates"))
  {
    Aws::Utils::Array<JsonView> coordinatesJsonList = jsonValue.GetArray("Coordinates");
    for(unsigned coordinatesIndex = 0; coordinatesIndex < coordinatesJsonList.GetLength(); ++coordinatesIndex)
    {
      Aws::Utils::Array<JsonView> linearRingJsonList = coordinatesJsonList[coordinatesIndex].AsArray();
      Aws::Vector<Aws::Vector<double>> linearRingList;
      linearRingList.reserve((size_t)linearRingJsonList.GetLength());
      for(unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex)
      {
        Aws::Utils::Array<JsonView> positionJsonList = linearRingJsonList[linearRingIndex].AsArray();
        Aws::Vector<double> positionList;
        positionList.reserve((size_t)positionJsonList.GetLength());
        for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
        {
          positionList.push_back(positionJsonList[positionIndex].AsDouble());
        }
        linearRingList.push_back(std::move(positionList));
      }
      m_coordinates.push_back(std::move(linearRingList));
    }
    m_coordinatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Geometry::Jsonize() const
{
  JsonValue payload;

  if(m_coordinatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> coordinatesJsonList(m_coordinates.size());
   for(unsigned coordinatesIndex = 0; coordinatesIndex < coordinatesJsonList.GetLength(); ++coordinatesIndex)
   {
     Aws::Utils::Array<JsonValue> linearRingJsonList(m_coordinates[coordinatesIndex].size());
     for(unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex)
     {
       Aws::Utils::Array<JsonValue> positionJsonList(m_coordinates[coordinatesIndex][linearRingIndex].size());
       for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
       {
         positionJsonList[positionIndex].AsDouble(m_coordinates[coordinatesIndex][linearRingIndex][positionIndex]);
       }
       linearRingJsonList[linearRingIndex].AsArray(std::move(positionJsonList));
     }
     coordinatesJsonList[coordinatesIndex].AsArray(std::move(linearRingJsonList));
   }
   payload.WithArray("Coordinates", std::move(coordinatesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
