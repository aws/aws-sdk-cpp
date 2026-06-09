/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ColumnSemanticType.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ColumnSemanticType::ColumnSemanticType(JsonView jsonValue) { *this = jsonValue; }

ColumnSemanticType& ColumnSemanticType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GeographicalRole")) {
    m_geographicalRole = GeoSpatialDataRoleMapper::GetGeoSpatialDataRoleForName(jsonValue.GetString("GeographicalRole"));
    m_geographicalRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue ColumnSemanticType::Jsonize() const {
  JsonValue payload;

  if (m_geographicalRoleHasBeenSet) {
    payload.WithString("GeographicalRole", GeoSpatialDataRoleMapper::GetNameForGeoSpatialDataRole(m_geographicalRole));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
