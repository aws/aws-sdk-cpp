/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemakertrainingsessionruntime/model/GetSamplingOperationResultResult.h>

#include <utility>

using namespace Aws::SageMakerTrainingSessionRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSamplingOperationResultResult::GetSamplingOperationResultResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetSamplingOperationResultResult& GetSamplingOperationResultResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("status")) {
    m_status = RequestStatusMapper::GetRequestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operationResult")) {
    m_operationResult = jsonValue.GetObject("operationResult");
    m_operationResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    m_errorDetails = jsonValue.GetString("errorDetails");
    m_errorDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
