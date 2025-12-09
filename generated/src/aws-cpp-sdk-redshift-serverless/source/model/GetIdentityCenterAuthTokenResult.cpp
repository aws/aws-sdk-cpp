/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/redshift-serverless/model/GetIdentityCenterAuthTokenResult.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIdentityCenterAuthTokenResult::GetIdentityCenterAuthTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetIdentityCenterAuthTokenResult& GetIdentityCenterAuthTokenResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("expirationTime")) {
    m_expirationTime = jsonValue.GetString("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("token")) {
    m_token = jsonValue.GetString("token");
    m_tokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
