/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-firewall/model/DeleteProxyResult.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteProxyResult::DeleteProxyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DeleteProxyResult& DeleteProxyResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NatGatewayId")) {
    m_natGatewayId = jsonValue.GetString("NatGatewayId");
    m_natGatewayIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyName")) {
    m_proxyName = jsonValue.GetString("ProxyName");
    m_proxyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyArn")) {
    m_proxyArn = jsonValue.GetString("ProxyArn");
    m_proxyArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
