/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/BatchGetTargetDomainsResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetTargetDomainsResult::BatchGetTargetDomainsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchGetTargetDomainsResult& BatchGetTargetDomainsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("targetDomains")) {
    Aws::Utils::Array<JsonView> targetDomainsJsonList = jsonValue.GetArray("targetDomains");
    for (unsigned targetDomainsIndex = 0; targetDomainsIndex < targetDomainsJsonList.GetLength(); ++targetDomainsIndex) {
      m_targetDomains.push_back(targetDomainsJsonList[targetDomainsIndex].AsObject());
    }
    m_targetDomainsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notFound")) {
    Aws::Utils::Array<JsonView> notFoundJsonList = jsonValue.GetArray("notFound");
    for (unsigned notFoundIndex = 0; notFoundIndex < notFoundJsonList.GetLength(); ++notFoundIndex) {
      m_notFound.push_back(notFoundJsonList[notFoundIndex].AsString());
    }
    m_notFoundHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
