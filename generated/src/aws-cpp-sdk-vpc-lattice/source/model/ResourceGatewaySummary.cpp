﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vpc-lattice/model/ResourceGatewaySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {

ResourceGatewaySummary::ResourceGatewaySummary(JsonView jsonValue) { *this = jsonValue; }

ResourceGatewaySummary& ResourceGatewaySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ResourceGatewayStatusMapper::GetResourceGatewayStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcIdentifier")) {
    m_vpcIdentifier = jsonValue.GetString("vpcIdentifier");
    m_vpcIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAddressType")) {
    m_ipAddressType = ResourceGatewayIpAddressTypeMapper::GetResourceGatewayIpAddressTypeForName(jsonValue.GetString("ipAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv4AddressesPerEni")) {
    m_ipv4AddressesPerEni = jsonValue.GetInteger("ipv4AddressesPerEni");
    m_ipv4AddressesPerEniHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceGatewaySummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ResourceGatewayStatusMapper::GetNameForResourceGatewayStatus(m_status));
  }

  if (m_vpcIdentifierHasBeenSet) {
    payload.WithString("vpcIdentifier", m_vpcIdentifier);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("subnetIds", std::move(subnetIdsJsonList));
  }

  if (m_securityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
    }
    payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));
  }

  if (m_ipAddressTypeHasBeenSet) {
    payload.WithString("ipAddressType", ResourceGatewayIpAddressTypeMapper::GetNameForResourceGatewayIpAddressType(m_ipAddressType));
  }

  if (m_ipv4AddressesPerEniHasBeenSet) {
    payload.WithInteger("ipv4AddressesPerEni", m_ipv4AddressesPerEni);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
