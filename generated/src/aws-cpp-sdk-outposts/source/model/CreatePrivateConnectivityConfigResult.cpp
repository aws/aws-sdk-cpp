/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/outposts/model/CreatePrivateConnectivityConfigResult.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePrivateConnectivityConfigResult::CreatePrivateConnectivityConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

CreatePrivateConnectivityConfigResult& CreatePrivateConnectivityConfigResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PrivateConnectivityConfig")) {
    m_privateConnectivityConfig = jsonValue.GetObject("PrivateConnectivityConfig");
    m_privateConnectivityConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutpostId")) {
    m_outpostId = jsonValue.GetString("OutpostId");
    m_outpostIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
