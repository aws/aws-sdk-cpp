/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/CreateTargetDomainResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTargetDomainResult::CreateTargetDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateTargetDomainResult& CreateTargetDomainResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("targetDomainId")) {
    m_targetDomainId = jsonValue.GetString("targetDomainId");
    m_targetDomainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("verificationStatus")) {
    m_verificationStatus = TargetDomainStatusMapper::GetTargetDomainStatusForName(jsonValue.GetString("verificationStatus"));
    m_verificationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("verificationDetails")) {
    m_verificationDetails = jsonValue.GetObject("verificationDetails");
    m_verificationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("verifiedAt")) {
    m_verifiedAt = jsonValue.GetString("verifiedAt");
    m_verifiedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
