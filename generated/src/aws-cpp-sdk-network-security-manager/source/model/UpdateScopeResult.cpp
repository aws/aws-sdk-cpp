/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/UpdateScopeResult.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateScopeResult::UpdateScopeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateScopeResult& UpdateScopeResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("scopeId")) {
    m_scopeId = jsonValue.GetString("scopeId");
    m_scopeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeArn")) {
    m_scopeArn = jsonValue.GetString("scopeArn");
    m_scopeArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeName")) {
    m_scopeName = jsonValue.GetString("scopeName");
    m_scopeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeDescription")) {
    m_scopeDescription = jsonValue.GetString("scopeDescription");
    m_scopeDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeConfiguration")) {
    m_scopeConfiguration = jsonValue.GetObject("scopeConfiguration");
    m_scopeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateToken")) {
    m_updateToken = jsonValue.GetString("updateToken");
    m_updateTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isSnapshot")) {
    m_isSnapshot = jsonValue.GetBool("isSnapshot");
    m_isSnapshotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasPublishedVersion")) {
    m_hasPublishedVersion = jsonValue.GetBool("hasPublishedVersion");
    m_hasPublishedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
