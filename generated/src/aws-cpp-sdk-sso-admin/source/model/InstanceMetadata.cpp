/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/model/InstanceMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSOAdmin {
namespace Model {

InstanceMetadata::InstanceMetadata(JsonView jsonValue) { *this = jsonValue; }

InstanceMetadata& InstanceMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceArn")) {
    m_instanceArn = jsonValue.GetString("InstanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentityStoreId")) {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OwnerAccountId")) {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedDate")) {
    m_createdDate = jsonValue.GetDouble("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = InstanceStatusMapper::GetInstanceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryRegion")) {
    m_primaryRegion = jsonValue.GetString("PrimaryRegion");
    m_primaryRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsObject());
    }
    m_regionsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceMetadata::Jsonize() const {
  JsonValue payload;

  if (m_instanceArnHasBeenSet) {
    payload.WithString("InstanceArn", m_instanceArn);
  }

  if (m_identityStoreIdHasBeenSet) {
    payload.WithString("IdentityStoreId", m_identityStoreId);
  }

  if (m_ownerAccountIdHasBeenSet) {
    payload.WithString("OwnerAccountId", m_ownerAccountId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_createdDateHasBeenSet) {
    payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", InstanceStatusMapper::GetNameForInstanceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("StatusReason", m_statusReason);
  }

  if (m_primaryRegionHasBeenSet) {
    payload.WithString("PrimaryRegion", m_primaryRegion);
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsObject(m_regions[regionsIndex].Jsonize());
    }
    payload.WithArray("Regions", std::move(regionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
