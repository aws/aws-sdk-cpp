/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/BatchDeleteSecurityRequirementsResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteSecurityRequirementsResult::BatchDeleteSecurityRequirementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

BatchDeleteSecurityRequirementsResult& BatchDeleteSecurityRequirementsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("deletedSecurityRequirementNames")) {
    Aws::Utils::Array<JsonView> deletedSecurityRequirementNamesJsonList = jsonValue.GetArray("deletedSecurityRequirementNames");
    for (unsigned deletedSecurityRequirementNamesIndex = 0;
         deletedSecurityRequirementNamesIndex < deletedSecurityRequirementNamesJsonList.GetLength();
         ++deletedSecurityRequirementNamesIndex) {
      m_deletedSecurityRequirementNames.push_back(deletedSecurityRequirementNamesJsonList[deletedSecurityRequirementNamesIndex].AsString());
    }
    m_deletedSecurityRequirementNamesHasBeenSet = true;
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
