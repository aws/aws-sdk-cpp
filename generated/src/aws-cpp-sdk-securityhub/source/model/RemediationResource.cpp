/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationResource::RemediationResource(JsonView jsonValue) { *this = jsonValue; }

RemediationResource& RemediationResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceOwnerAccountId")) {
    m_resourceOwnerAccountId = jsonValue.GetString("ResourceOwnerAccountId");
    m_resourceOwnerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceOwnerOrgId")) {
    m_resourceOwnerOrgId = jsonValue.GetString("ResourceOwnerOrgId");
    m_resourceOwnerOrgIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceGuid")) {
    m_resourceGuid = jsonValue.GetString("ResourceGuid");
    m_resourceGuidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceRegion")) {
    m_resourceRegion = jsonValue.GetString("ResourceRegion");
    m_resourceRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CloudProvider")) {
    m_cloudProvider = CloudProviderNameMapper::GetCloudProviderNameForName(jsonValue.GetString("CloudProvider"));
    m_cloudProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationResource::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_resourceOwnerAccountIdHasBeenSet) {
    payload.WithString("ResourceOwnerAccountId", m_resourceOwnerAccountId);
  }

  if (m_resourceOwnerOrgIdHasBeenSet) {
    payload.WithString("ResourceOwnerOrgId", m_resourceOwnerOrgId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_resourceGuidHasBeenSet) {
    payload.WithString("ResourceGuid", m_resourceGuid);
  }

  if (m_resourceRegionHasBeenSet) {
    payload.WithString("ResourceRegion", m_resourceRegion);
  }

  if (m_cloudProviderHasBeenSet) {
    payload.WithString("CloudProvider", CloudProviderNameMapper::GetNameForCloudProviderName(m_cloudProvider));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
