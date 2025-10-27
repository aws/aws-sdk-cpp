/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rtbfabric/model/CreateInboundExternalLinkResult.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateInboundExternalLinkResult::CreateInboundExternalLinkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateInboundExternalLinkResult& CreateInboundExternalLinkResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("gatewayId")) {
    m_gatewayId = jsonValue.GetString("gatewayId");
    m_gatewayIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkId")) {
    m_linkId = jsonValue.GetString("linkId");
    m_linkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = LinkStatusMapper::GetLinkStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
