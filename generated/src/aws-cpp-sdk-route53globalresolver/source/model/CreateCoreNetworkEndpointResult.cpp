/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/CreateCoreNetworkEndpointResult.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCoreNetworkEndpointResult::CreateCoreNetworkEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateCoreNetworkEndpointResult& CreateCoreNetworkEndpointResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableRegions")) {
    Aws::Utils::Array<JsonView> availableRegionsJsonList = jsonValue.GetArray("availableRegions");
    for (unsigned availableRegionsIndex = 0; availableRegionsIndex < availableRegionsJsonList.GetLength(); ++availableRegionsIndex) {
      m_availableRegions.push_back(availableRegionsJsonList[availableRegionsIndex].AsString());
    }
    m_availableRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("coreNetworkArn")) {
    m_coreNetworkArn = jsonValue.GetString("coreNetworkArn");
    m_coreNetworkArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("globalResolverId")) {
    m_globalResolverId = jsonValue.GetString("globalResolverId");
    m_globalResolverIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAddresses")) {
    Aws::Utils::Array<JsonView> ipAddressesJsonList = jsonValue.GetArray("ipAddresses");
    for (unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex) {
      m_ipAddresses.push_back(ipAddressesJsonList[ipAddressesIndex].AsObject());
    }
    m_ipAddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CRResourceStatusMapper::GetCRResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
