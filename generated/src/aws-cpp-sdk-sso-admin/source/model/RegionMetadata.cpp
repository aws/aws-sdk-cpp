/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/model/RegionMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSOAdmin {
namespace Model {

RegionMetadata::RegionMetadata(JsonView jsonValue) { *this = jsonValue; }

RegionMetadata& RegionMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RegionName")) {
    m_regionName = jsonValue.GetString("RegionName");
    m_regionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RegionStatusMapper::GetRegionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AddedDate")) {
    m_addedDate = jsonValue.GetDouble("AddedDate");
    m_addedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsPrimaryRegion")) {
    m_isPrimaryRegion = jsonValue.GetBool("IsPrimaryRegion");
    m_isPrimaryRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue RegionMetadata::Jsonize() const {
  JsonValue payload;

  if (m_regionNameHasBeenSet) {
    payload.WithString("RegionName", m_regionName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RegionStatusMapper::GetNameForRegionStatus(m_status));
  }

  if (m_addedDateHasBeenSet) {
    payload.WithDouble("AddedDate", m_addedDate.SecondsWithMSPrecision());
  }

  if (m_isPrimaryRegionHasBeenSet) {
    payload.WithBool("IsPrimaryRegion", m_isPrimaryRegion);
  }

  return payload;
}

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
