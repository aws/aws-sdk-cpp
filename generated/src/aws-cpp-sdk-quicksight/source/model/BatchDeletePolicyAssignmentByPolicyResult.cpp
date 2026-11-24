/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/BatchDeletePolicyAssignmentByPolicyResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeletePolicyAssignmentByPolicyResult::BatchDeletePolicyAssignmentByPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

BatchDeletePolicyAssignmentByPolicyResult& BatchDeletePolicyAssignmentByPolicyResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PolicyArn")) {
    m_policyArn = jsonValue.GetString("PolicyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Success")) {
    Aws::Utils::Array<JsonView> successJsonList = jsonValue.GetArray("Success");
    for (unsigned successIndex = 0; successIndex < successJsonList.GetLength(); ++successIndex) {
      m_success.push_back(successJsonList[successIndex].AsObject());
    }
    m_successHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
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
