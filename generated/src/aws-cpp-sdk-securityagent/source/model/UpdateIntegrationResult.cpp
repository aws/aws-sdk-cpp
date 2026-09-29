/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/UpdateIntegrationResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateIntegrationResult::UpdateIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateIntegrationResult& UpdateIntegrationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("webhookUrl")) {
    m_webhookUrl = jsonValue.GetString("webhookUrl");
    m_webhookUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secret")) {
    m_secret = jsonValue.GetString("secret");
    m_secretHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
