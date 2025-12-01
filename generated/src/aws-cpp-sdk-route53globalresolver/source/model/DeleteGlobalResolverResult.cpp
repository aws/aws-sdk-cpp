/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/DeleteGlobalResolverResult.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteGlobalResolverResult::DeleteGlobalResolverResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DeleteGlobalResolverResult& DeleteGlobalResolverResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsName")) {
    m_dnsName = jsonValue.GetString("dnsName");
    m_dnsNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("observabilityRegion")) {
    m_observabilityRegion = jsonValue.GetString("observabilityRegion");
    m_observabilityRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CRResourceStatusMapper::GetCRResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv4Addresses")) {
    Aws::Utils::Array<JsonView> ipv4AddressesJsonList = jsonValue.GetArray("ipv4Addresses");
    for (unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex) {
      m_ipv4Addresses.push_back(ipv4AddressesJsonList[ipv4AddressesIndex].AsString());
    }
    m_ipv4AddressesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
