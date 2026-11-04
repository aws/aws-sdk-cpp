/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/SoftwareResourceResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

SoftwareResourceResult::SoftwareResourceResult(JsonView jsonValue) { *this = jsonValue; }

SoftwareResourceResult& SoftwareResourceResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceProvider")) {
    m_resourceProvider = jsonValue.GetString("ResourceProvider");
    m_resourceProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceOwnerOrgId")) {
    m_resourceOwnerOrgId = jsonValue.GetString("ResourceOwnerOrgId");
    m_resourceOwnerOrgIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceOwnerAccountId")) {
    m_resourceOwnerAccountId = jsonValue.GetString("ResourceOwnerAccountId");
    m_resourceOwnerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceCloudPartition")) {
    m_resourceCloudPartition = jsonValue.GetString("ResourceCloudPartition");
    m_resourceCloudPartitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceRegion")) {
    m_resourceRegion = jsonValue.GetString("ResourceRegion");
    m_resourceRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue SoftwareResourceResult::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  if (m_resourceProviderHasBeenSet) {
    payload.WithString("ResourceProvider", m_resourceProvider);
  }

  if (m_resourceOwnerOrgIdHasBeenSet) {
    payload.WithString("ResourceOwnerOrgId", m_resourceOwnerOrgId);
  }

  if (m_resourceOwnerAccountIdHasBeenSet) {
    payload.WithString("ResourceOwnerAccountId", m_resourceOwnerAccountId);
  }

  if (m_resourceCloudPartitionHasBeenSet) {
    payload.WithString("ResourceCloudPartition", m_resourceCloudPartition);
  }

  if (m_resourceRegionHasBeenSet) {
    payload.WithString("ResourceRegion", m_resourceRegion);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
