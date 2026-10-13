/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/Resource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

Resource::Resource(JsonView jsonValue) { *this = jsonValue; }

Resource& Resource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsRegion")) {
    m_awsRegion = jsonValue.GetString("awsRegion");
    m_awsRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsAccountId")) {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZoneName")) {
    m_availabilityZoneName = jsonValue.GetString("availabilityZoneName");
    m_availabilityZoneNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containmentParentId")) {
    m_containmentParentId = jsonValue.GetString("containmentParentId");
    m_containmentParentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logicalResourceGroupId")) {
    m_logicalResourceGroupId = jsonValue.GetString("logicalResourceGroupId");
    m_logicalResourceGroupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Resource::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_awsRegionHasBeenSet) {
    payload.WithString("awsRegion", m_awsRegion);
  }

  if (m_awsAccountIdHasBeenSet) {
    payload.WithString("awsAccountId", m_awsAccountId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  if (m_availabilityZoneIdHasBeenSet) {
    payload.WithString("availabilityZoneId", m_availabilityZoneId);
  }

  if (m_availabilityZoneNameHasBeenSet) {
    payload.WithString("availabilityZoneName", m_availabilityZoneName);
  }

  if (m_containmentParentIdHasBeenSet) {
    payload.WithString("containmentParentId", m_containmentParentId);
  }

  if (m_logicalResourceGroupIdHasBeenSet) {
    payload.WithString("logicalResourceGroupId", m_logicalResourceGroupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
