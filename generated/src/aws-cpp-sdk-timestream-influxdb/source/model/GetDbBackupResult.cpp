/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/timestream-influxdb/model/GetDbBackupResult.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDbBackupResult::GetDbBackupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDbBackupResult& GetDbBackupResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DbBackupStatusMapper::GetDbBackupStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAfter")) {
    m_expiresAfter = jsonValue.GetString("expiresAfter");
    m_expiresAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbResourceId")) {
    m_dbResourceId = jsonValue.GetString("dbResourceId");
    m_dbResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = DbBackupTypeMapper::GetDbBackupTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("engineType")) {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));
    m_engineTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentType")) {
    m_deploymentType = ResourceDeploymentTypeMapper::GetResourceDeploymentTypeForName(jsonValue.GetString("deploymentType"));
    m_deploymentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterConfiguration")) {
    m_clusterConfiguration = jsonValue.GetObject("clusterConfiguration");
    m_clusterConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbParameterGroupId")) {
    m_dbParameterGroupId = jsonValue.GetString("dbParameterGroupId");
    m_dbParameterGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbInstanceType")) {
    m_dbInstanceType = DbInstanceTypeMapper::GetDbInstanceTypeForName(jsonValue.GetString("dbInstanceType"));
    m_dbInstanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logDeliveryConfiguration")) {
    m_logDeliveryConfiguration = jsonValue.GetObject("logDeliveryConfiguration");
    m_logDeliveryConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failoverMode")) {
    m_failoverMode = FailoverModeMapper::GetFailoverModeForName(jsonValue.GetString("failoverMode"));
    m_failoverModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbStorageType")) {
    m_dbStorageType = DbStorageTypeMapper::GetDbStorageTypeForName(jsonValue.GetString("dbStorageType"));
    m_dbStorageTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allocatedStorage")) {
    m_allocatedStorage = jsonValue.GetInteger("allocatedStorage");
    m_allocatedStorageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcSubnetIds")) {
    Aws::Utils::Array<JsonView> vpcSubnetIdsJsonList = jsonValue.GetArray("vpcSubnetIds");
    for (unsigned vpcSubnetIdsIndex = 0; vpcSubnetIdsIndex < vpcSubnetIdsJsonList.GetLength(); ++vpcSubnetIdsIndex) {
      m_vpcSubnetIds.push_back(vpcSubnetIdsJsonList[vpcSubnetIdsIndex].AsString());
    }
    m_vpcSubnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcSecurityGroupIds")) {
    Aws::Utils::Array<JsonView> vpcSecurityGroupIdsJsonList = jsonValue.GetArray("vpcSecurityGroupIds");
    for (unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength();
         ++vpcSecurityGroupIdsIndex) {
      m_vpcSecurityGroupIds.push_back(vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString());
    }
    m_vpcSecurityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publiclyAccessible")) {
    m_publiclyAccessible = jsonValue.GetBool("publiclyAccessible");
    m_publiclyAccessibleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkType")) {
    m_networkType = NetworkTypeMapper::GetNetworkTypeForName(jsonValue.GetString("networkType"));
    m_networkTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("influxAuthParametersSecretArn")) {
    m_influxAuthParametersSecretArn = jsonValue.GetString("influxAuthParametersSecretArn");
    m_influxAuthParametersSecretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maintenanceSchedule")) {
    m_maintenanceSchedule = jsonValue.GetObject("maintenanceSchedule");
    m_maintenanceScheduleHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
