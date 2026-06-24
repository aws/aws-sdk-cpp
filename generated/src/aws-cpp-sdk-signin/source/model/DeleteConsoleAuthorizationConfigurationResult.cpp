/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/signin/model/DeleteConsoleAuthorizationConfigurationResult.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteConsoleAuthorizationConfigurationResult::DeleteConsoleAuthorizationConfigurationResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DeleteConsoleAuthorizationConfigurationResult& DeleteConsoleAuthorizationConfigurationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("targetId")) {
    m_targetId = jsonValue.GetString("targetId");
    m_targetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scope")) {
    m_scope = jsonValue.GetString("scope");
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consoleAuthorizationEnabled")) {
    m_consoleAuthorizationEnabled = jsonValue.GetBool("consoleAuthorizationEnabled");
    m_consoleAuthorizationEnabledHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
