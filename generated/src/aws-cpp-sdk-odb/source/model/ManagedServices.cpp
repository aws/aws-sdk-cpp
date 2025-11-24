/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ManagedServices.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

ManagedServices::ManagedServices(JsonView jsonValue) { *this = jsonValue; }

ManagedServices& ManagedServices::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceNetworkArn")) {
    m_serviceNetworkArn = jsonValue.GetString("serviceNetworkArn");
    m_serviceNetworkArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceGatewayArn")) {
    m_resourceGatewayArn = jsonValue.GetString("resourceGatewayArn");
    m_resourceGatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedServicesIpv4Cidrs")) {
    Aws::Utils::Array<JsonView> managedServicesIpv4CidrsJsonList = jsonValue.GetArray("managedServicesIpv4Cidrs");
    for (unsigned managedServicesIpv4CidrsIndex = 0; managedServicesIpv4CidrsIndex < managedServicesIpv4CidrsJsonList.GetLength();
         ++managedServicesIpv4CidrsIndex) {
      m_managedServicesIpv4Cidrs.push_back(managedServicesIpv4CidrsJsonList[managedServicesIpv4CidrsIndex].AsString());
    }
    m_managedServicesIpv4CidrsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceNetworkEndpoint")) {
    m_serviceNetworkEndpoint = jsonValue.GetObject("serviceNetworkEndpoint");
    m_serviceNetworkEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedS3BackupAccess")) {
    m_managedS3BackupAccess = jsonValue.GetObject("managedS3BackupAccess");
    m_managedS3BackupAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("zeroEtlAccess")) {
    m_zeroEtlAccess = jsonValue.GetObject("zeroEtlAccess");
    m_zeroEtlAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Access")) {
    m_s3Access = jsonValue.GetObject("s3Access");
    m_s3AccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stsAccess")) {
    m_stsAccess = jsonValue.GetObject("stsAccess");
    m_stsAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsAccess")) {
    m_kmsAccess = jsonValue.GetObject("kmsAccess");
    m_kmsAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crossRegionS3RestoreSourcesAccess")) {
    Aws::Utils::Array<JsonView> crossRegionS3RestoreSourcesAccessJsonList = jsonValue.GetArray("crossRegionS3RestoreSourcesAccess");
    for (unsigned crossRegionS3RestoreSourcesAccessIndex = 0;
         crossRegionS3RestoreSourcesAccessIndex < crossRegionS3RestoreSourcesAccessJsonList.GetLength();
         ++crossRegionS3RestoreSourcesAccessIndex) {
      m_crossRegionS3RestoreSourcesAccess.push_back(
          crossRegionS3RestoreSourcesAccessJsonList[crossRegionS3RestoreSourcesAccessIndex].AsObject());
    }
    m_crossRegionS3RestoreSourcesAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedServices::Jsonize() const {
  JsonValue payload;

  if (m_serviceNetworkArnHasBeenSet) {
    payload.WithString("serviceNetworkArn", m_serviceNetworkArn);
  }

  if (m_resourceGatewayArnHasBeenSet) {
    payload.WithString("resourceGatewayArn", m_resourceGatewayArn);
  }

  if (m_managedServicesIpv4CidrsHasBeenSet) {
    Aws::Utils::Array<JsonValue> managedServicesIpv4CidrsJsonList(m_managedServicesIpv4Cidrs.size());
    for (unsigned managedServicesIpv4CidrsIndex = 0; managedServicesIpv4CidrsIndex < managedServicesIpv4CidrsJsonList.GetLength();
         ++managedServicesIpv4CidrsIndex) {
      managedServicesIpv4CidrsJsonList[managedServicesIpv4CidrsIndex].AsString(m_managedServicesIpv4Cidrs[managedServicesIpv4CidrsIndex]);
    }
    payload.WithArray("managedServicesIpv4Cidrs", std::move(managedServicesIpv4CidrsJsonList));
  }

  if (m_serviceNetworkEndpointHasBeenSet) {
    payload.WithObject("serviceNetworkEndpoint", m_serviceNetworkEndpoint.Jsonize());
  }

  if (m_managedS3BackupAccessHasBeenSet) {
    payload.WithObject("managedS3BackupAccess", m_managedS3BackupAccess.Jsonize());
  }

  if (m_zeroEtlAccessHasBeenSet) {
    payload.WithObject("zeroEtlAccess", m_zeroEtlAccess.Jsonize());
  }

  if (m_s3AccessHasBeenSet) {
    payload.WithObject("s3Access", m_s3Access.Jsonize());
  }

  if (m_stsAccessHasBeenSet) {
    payload.WithObject("stsAccess", m_stsAccess.Jsonize());
  }

  if (m_kmsAccessHasBeenSet) {
    payload.WithObject("kmsAccess", m_kmsAccess.Jsonize());
  }

  if (m_crossRegionS3RestoreSourcesAccessHasBeenSet) {
    Aws::Utils::Array<JsonValue> crossRegionS3RestoreSourcesAccessJsonList(m_crossRegionS3RestoreSourcesAccess.size());
    for (unsigned crossRegionS3RestoreSourcesAccessIndex = 0;
         crossRegionS3RestoreSourcesAccessIndex < crossRegionS3RestoreSourcesAccessJsonList.GetLength();
         ++crossRegionS3RestoreSourcesAccessIndex) {
      crossRegionS3RestoreSourcesAccessJsonList[crossRegionS3RestoreSourcesAccessIndex].AsObject(
          m_crossRegionS3RestoreSourcesAccess[crossRegionS3RestoreSourcesAccessIndex].Jsonize());
    }
    payload.WithArray("crossRegionS3RestoreSourcesAccess", std::move(crossRegionS3RestoreSourcesAccessJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
