/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/Coordinate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

Coordinate::Coordinate(JsonView jsonValue) { *this = jsonValue; }

Coordinate& Coordinate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Latitude")) {
    m_latitude = jsonValue.GetDouble("Latitude");
    m_latitudeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Longitude")) {
    m_longitude = jsonValue.GetDouble("Longitude");
    m_longitudeHasBeenSet = true;
  }
  return *this;
}

JsonValue Coordinate::Jsonize() const {
  JsonValue payload;

  if (m_latitudeHasBeenSet) {
    payload.WithDouble("Latitude", m_latitude);
  }

  if (m_longitudeHasBeenSet) {
    payload.WithDouble("Longitude", m_longitude);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
