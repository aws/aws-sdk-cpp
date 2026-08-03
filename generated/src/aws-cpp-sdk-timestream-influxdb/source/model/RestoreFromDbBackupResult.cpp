/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/timestream-influxdb/model/RestoreFromDbBackupResult.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestoreFromDbBackupResult::RestoreFromDbBackupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

RestoreFromDbBackupResult& RestoreFromDbBackupResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("restoredDbResourceId")) {
    m_restoredDbResourceId = jsonValue.GetString("restoredDbResourceId");
    m_restoredDbResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("restoreStatus")) {
    m_restoreStatus = RestoreStatusMapper::GetRestoreStatusForName(jsonValue.GetString("restoreStatus"));
    m_restoreStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("engineType")) {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));
    m_engineTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentType")) {
    m_deploymentType = ResourceDeploymentTypeMapper::GetResourceDeploymentTypeForName(jsonValue.GetString("deploymentType"));
    m_deploymentTypeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
