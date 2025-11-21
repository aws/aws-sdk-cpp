/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mediaconnect/model/BatchGetRouterInputResult.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetRouterInputResult::BatchGetRouterInputResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchGetRouterInputResult& BatchGetRouterInputResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("routerInputs")) {
    Aws::Utils::Array<JsonView> routerInputsJsonList = jsonValue.GetArray("routerInputs");
    for (unsigned routerInputsIndex = 0; routerInputsIndex < routerInputsJsonList.GetLength(); ++routerInputsIndex) {
      m_routerInputs.push_back(routerInputsJsonList[routerInputsIndex].AsObject());
    }
    m_routerInputsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
