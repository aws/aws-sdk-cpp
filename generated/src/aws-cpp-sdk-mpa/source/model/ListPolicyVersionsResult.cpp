﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mpa/model/ListPolicyVersionsResult.h>

#include <utility>

using namespace Aws::MPA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPolicyVersionsResult::ListPolicyVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListPolicyVersionsResult& ListPolicyVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyVersions")) {
    Aws::Utils::Array<JsonView> policyVersionsJsonList = jsonValue.GetArray("PolicyVersions");
    for (unsigned policyVersionsIndex = 0; policyVersionsIndex < policyVersionsJsonList.GetLength(); ++policyVersionsIndex) {
      m_policyVersions.push_back(policyVersionsJsonList[policyVersionsIndex].AsObject());
    }
    m_policyVersionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
