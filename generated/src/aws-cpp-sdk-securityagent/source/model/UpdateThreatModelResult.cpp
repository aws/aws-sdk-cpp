/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/UpdateThreatModelResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateThreatModelResult::UpdateThreatModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateThreatModelResult& UpdateThreatModelResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("threatModelId")) {
    m_threatModelId = jsonValue.GetString("threatModelId");
    m_threatModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assets")) {
    m_assets = jsonValue.GetObject("assets");
    m_assetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeDocs")) {
    Aws::Utils::Array<JsonView> scopeDocsJsonList = jsonValue.GetArray("scopeDocs");
    for (unsigned scopeDocsIndex = 0; scopeDocsIndex < scopeDocsJsonList.GetLength(); ++scopeDocsIndex) {
      m_scopeDocs.push_back(scopeDocsJsonList[scopeDocsIndex].AsObject());
    }
    m_scopeDocsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceRole")) {
    m_serviceRole = jsonValue.GetString("serviceRole");
    m_serviceRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logConfig")) {
    m_logConfig = jsonValue.GetObject("logConfig");
    m_logConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
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
