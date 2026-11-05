/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3tables/model/GetTableMigrationResult.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTableMigrationResult::GetTableMigrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetTableMigrationResult& GetTableMigrationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("migrationId")) {
    m_migrationId = jsonValue.GetString("migrationId");
    m_migrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableBucketARN")) {
    m_tableBucketARN = jsonValue.GetString("tableBucketARN");
    m_tableBucketARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableARN")) {
    m_tableARN = jsonValue.GetString("tableARN");
    m_tableARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = MigrationTypeMapper::GetMigrationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = MigrationStateMapper::GetMigrationStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleARN")) {
    m_roleARN = jsonValue.GetString("roleARN");
    m_roleARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reviewMigrationPlan")) {
    m_reviewMigrationPlan = jsonValue.GetBool("reviewMigrationPlan");
    m_reviewMigrationPlanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasValidPlan")) {
    m_hasValidPlan = jsonValue.GetBool("hasValidPlan");
    m_hasValidPlanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateUpdatedAt")) {
    m_stateUpdatedAt = jsonValue.GetString("stateUpdatedAt");
    m_stateUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetObject("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("planningStats")) {
    m_planningStats = jsonValue.GetObject("planningStats");
    m_planningStatsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("migrationStats")) {
    m_migrationStats = jsonValue.GetObject("migrationStats");
    m_migrationStatsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceType")) {
    m_sourceType = MigrationSourceTypeMapper::GetMigrationSourceTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataMigration")) {
    m_dataMigration = jsonValue.GetObject("dataMigration");
    m_dataMigrationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("migrationOutput")) {
    m_migrationOutput = jsonValue.GetObject("migrationOutput");
    m_migrationOutputHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
