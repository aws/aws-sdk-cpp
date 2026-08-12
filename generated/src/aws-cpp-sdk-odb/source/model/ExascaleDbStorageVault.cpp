/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ExascaleDbStorageVault.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

ExascaleDbStorageVault::ExascaleDbStorageVault(JsonView jsonValue) { *this = jsonValue; }

ExascaleDbStorageVault& ExascaleDbStorageVault::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exascaleDbStorageVaultId")) {
    m_exascaleDbStorageVaultId = jsonValue.GetString("exascaleDbStorageVaultId");
    m_exascaleDbStorageVaultIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalFlashCacheInPercent")) {
    m_additionalFlashCacheInPercent = jsonValue.GetInteger("additionalFlashCacheInPercent");
    m_additionalFlashCacheInPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachedShapeAttributes")) {
    Aws::Utils::Array<JsonView> attachedShapeAttributesJsonList = jsonValue.GetArray("attachedShapeAttributes");
    for (unsigned attachedShapeAttributesIndex = 0; attachedShapeAttributesIndex < attachedShapeAttributesJsonList.GetLength();
         ++attachedShapeAttributesIndex) {
      m_attachedShapeAttributes.push_back(
          ShapeAttributeMapper::GetShapeAttributeForName(attachedShapeAttributesJsonList[attachedShapeAttributesIndex].AsString()));
    }
    m_attachedShapeAttributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoscaleLimitInGBs")) {
    m_autoscaleLimitInGBs = jsonValue.GetInteger("autoscaleLimitInGBs");
    m_autoscaleLimitInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZone")) {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmClusterArns")) {
    Aws::Utils::Array<JsonView> vmClusterArnsJsonList = jsonValue.GetArray("vmClusterArns");
    for (unsigned vmClusterArnsIndex = 0; vmClusterArnsIndex < vmClusterArnsJsonList.GetLength(); ++vmClusterArnsIndex) {
      m_vmClusterArns.push_back(vmClusterArnsJsonList[vmClusterArnsIndex].AsString());
    }
    m_vmClusterArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmClusterCount")) {
    m_vmClusterCount = jsonValue.GetInteger("vmClusterCount");
    m_vmClusterCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmClusterIds")) {
    Aws::Utils::Array<JsonView> vmClusterIdsJsonList = jsonValue.GetArray("vmClusterIds");
    for (unsigned vmClusterIdsIndex = 0; vmClusterIdsIndex < vmClusterIdsJsonList.GetLength(); ++vmClusterIdsIndex) {
      m_vmClusterIds.push_back(vmClusterIdsJsonList[vmClusterIdsIndex].AsString());
    }
    m_vmClusterIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exascaleDbStorageVaultArn")) {
    m_exascaleDbStorageVaultArn = jsonValue.GetString("exascaleDbStorageVaultArn");
    m_exascaleDbStorageVaultArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("highCapacityDatabaseStorage")) {
    m_highCapacityDatabaseStorage = jsonValue.GetObject("highCapacityDatabaseStorage");
    m_highCapacityDatabaseStorageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isAutoscaleEnabled")) {
    m_isAutoscaleEnabled = jsonValue.GetBool("isAutoscaleEnabled");
    m_isAutoscaleEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ocid")) {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociResourceAnchorName")) {
    m_ociResourceAnchorName = jsonValue.GetString("ociResourceAnchorName");
    m_ociResourceAnchorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociUrl")) {
    m_ociUrl = jsonValue.GetString("ociUrl");
    m_ociUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("percentProgress")) {
    m_percentProgress = jsonValue.GetDouble("percentProgress");
    m_percentProgressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeZone")) {
    m_timeZone = jsonValue.GetString("timeZone");
    m_timeZoneHasBeenSet = true;
  }
  return *this;
}

JsonValue ExascaleDbStorageVault::Jsonize() const {
  JsonValue payload;

  if (m_exascaleDbStorageVaultIdHasBeenSet) {
    payload.WithString("exascaleDbStorageVaultId", m_exascaleDbStorageVaultId);
  }

  if (m_additionalFlashCacheInPercentHasBeenSet) {
    payload.WithInteger("additionalFlashCacheInPercent", m_additionalFlashCacheInPercent);
  }

  if (m_attachedShapeAttributesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attachedShapeAttributesJsonList(m_attachedShapeAttributes.size());
    for (unsigned attachedShapeAttributesIndex = 0; attachedShapeAttributesIndex < attachedShapeAttributesJsonList.GetLength();
         ++attachedShapeAttributesIndex) {
      attachedShapeAttributesJsonList[attachedShapeAttributesIndex].AsString(
          ShapeAttributeMapper::GetNameForShapeAttribute(m_attachedShapeAttributes[attachedShapeAttributesIndex]));
    }
    payload.WithArray("attachedShapeAttributes", std::move(attachedShapeAttributesJsonList));
  }

  if (m_autoscaleLimitInGBsHasBeenSet) {
    payload.WithInteger("autoscaleLimitInGBs", m_autoscaleLimitInGBs);
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("availabilityZone", m_availabilityZone);
  }

  if (m_availabilityZoneIdHasBeenSet) {
    payload.WithString("availabilityZoneId", m_availabilityZoneId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_vmClusterArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vmClusterArnsJsonList(m_vmClusterArns.size());
    for (unsigned vmClusterArnsIndex = 0; vmClusterArnsIndex < vmClusterArnsJsonList.GetLength(); ++vmClusterArnsIndex) {
      vmClusterArnsJsonList[vmClusterArnsIndex].AsString(m_vmClusterArns[vmClusterArnsIndex]);
    }
    payload.WithArray("vmClusterArns", std::move(vmClusterArnsJsonList));
  }

  if (m_vmClusterCountHasBeenSet) {
    payload.WithInteger("vmClusterCount", m_vmClusterCount);
  }

  if (m_vmClusterIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vmClusterIdsJsonList(m_vmClusterIds.size());
    for (unsigned vmClusterIdsIndex = 0; vmClusterIdsIndex < vmClusterIdsJsonList.GetLength(); ++vmClusterIdsIndex) {
      vmClusterIdsJsonList[vmClusterIdsIndex].AsString(m_vmClusterIds[vmClusterIdsIndex]);
    }
    payload.WithArray("vmClusterIds", std::move(vmClusterIdsJsonList));
  }

  if (m_exascaleDbStorageVaultArnHasBeenSet) {
    payload.WithString("exascaleDbStorageVaultArn", m_exascaleDbStorageVaultArn);
  }

  if (m_highCapacityDatabaseStorageHasBeenSet) {
    payload.WithObject("highCapacityDatabaseStorage", m_highCapacityDatabaseStorage.Jsonize());
  }

  if (m_isAutoscaleEnabledHasBeenSet) {
    payload.WithBool("isAutoscaleEnabled", m_isAutoscaleEnabled);
  }

  if (m_ocidHasBeenSet) {
    payload.WithString("ocid", m_ocid);
  }

  if (m_ociResourceAnchorNameHasBeenSet) {
    payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);
  }

  if (m_ociUrlHasBeenSet) {
    payload.WithString("ociUrl", m_ociUrl);
  }

  if (m_percentProgressHasBeenSet) {
    payload.WithDouble("percentProgress", m_percentProgress);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_timeZoneHasBeenSet) {
    payload.WithString("timeZone", m_timeZone);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
