/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-geospatial/model/MultiPolygonGeometryInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerGeospatial {
namespace Model {

MultiPolygonGeometryInput::MultiPolygonGeometryInput(JsonView jsonValue) { *this = jsonValue; }

MultiPolygonGeometryInput& MultiPolygonGeometryInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Coordinates")) {
    Aws::Utils::Array<JsonView> coordinatesJsonList = jsonValue.GetArray("Coordinates");
    for (unsigned coordinatesIndex = 0; coordinatesIndex < coordinatesJsonList.GetLength(); ++coordinatesIndex) {
      Aws::Utils::Array<JsonView> linearRings2JsonList = coordinatesJsonList[coordinatesIndex].AsArray();
      Aws::Vector<Aws::Vector<Aws::Vector<double>>> linearRings2List;
      linearRings2List.reserve((size_t)linearRings2JsonList.GetLength());
      for (unsigned linearRings2Index = 0; linearRings2Index < linearRings2JsonList.GetLength(); ++linearRings2Index) {
        Aws::Utils::Array<JsonView> linearRing3JsonList = linearRings2JsonList[linearRings2Index].AsArray();
        Aws::Vector<Aws::Vector<double>> linearRing3List;
        linearRing3List.reserve((size_t)linearRing3JsonList.GetLength());
        for (unsigned linearRing3Index = 0; linearRing3Index < linearRing3JsonList.GetLength(); ++linearRing3Index) {
          Aws::Utils::Array<JsonView> position4JsonList = linearRing3JsonList[linearRing3Index].AsArray();
          Aws::Vector<double> position4List;
          position4List.reserve((size_t)position4JsonList.GetLength());
          for (unsigned position4Index = 0; position4Index < position4JsonList.GetLength(); ++position4Index) {
            position4List.push_back(position4JsonList[position4Index].AsDouble());
          }
          linearRing3List.push_back(std::move(position4List));
        }
        linearRings2List.push_back(std::move(linearRing3List));
      }
      m_coordinates.push_back(std::move(linearRings2List));
    }
    m_coordinatesHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiPolygonGeometryInput::Jsonize() const {
  JsonValue payload;

  if (m_coordinatesHasBeenSet) {
    Aws::Utils::Array<JsonValue> coordinatesJsonList(m_coordinates.size());
    for (unsigned coordinatesIndex = 0; coordinatesIndex < coordinatesJsonList.GetLength(); ++coordinatesIndex) {
      Aws::Utils::Array<JsonValue> linearRingsJsonList(m_coordinates[coordinatesIndex].size());
      for (unsigned linearRingsIndex = 0; linearRingsIndex < linearRingsJsonList.GetLength(); ++linearRingsIndex) {
        Aws::Utils::Array<JsonValue> linearRingJsonList(m_coordinates[coordinatesIndex][linearRingsIndex].size());
        for (unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex) {
          Aws::Utils::Array<JsonValue> positionJsonList(m_coordinates[coordinatesIndex][linearRingsIndex][linearRingIndex].size());
          for (unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex) {
            positionJsonList[positionIndex].AsDouble(m_coordinates[coordinatesIndex][linearRingsIndex][linearRingIndex][positionIndex]);
          }
          linearRingJsonList[linearRingIndex].AsArray(std::move(positionJsonList));
        }
        linearRingsJsonList[linearRingsIndex].AsArray(std::move(linearRingJsonList));
      }
      coordinatesJsonList[coordinatesIndex].AsArray(std::move(linearRingsJsonList));
    }
    payload.WithArray("Coordinates", std::move(coordinatesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerGeospatial
}  // namespace Aws
