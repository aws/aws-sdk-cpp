/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/nova-act/model/InvokeActStepResult.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InvokeActStepResult::InvokeActStepResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

InvokeActStepResult& InvokeActStepResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("calls")) {
    Aws::Utils::Array<JsonView> callsJsonList = jsonValue.GetArray("calls");
    for (unsigned callsIndex = 0; callsIndex < callsJsonList.GetLength(); ++callsIndex) {
      m_calls.push_back(callsJsonList[callsIndex].AsObject());
    }
    m_callsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepId")) {
    m_stepId = jsonValue.GetString("stepId");
    m_stepIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
