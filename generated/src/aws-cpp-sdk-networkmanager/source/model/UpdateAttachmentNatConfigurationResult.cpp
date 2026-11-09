/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/UpdateAttachmentNatConfigurationResult.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAttachmentNatConfigurationResult::UpdateAttachmentNatConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateAttachmentNatConfigurationResult& UpdateAttachmentNatConfigurationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AttachmentId")) {
    m_attachmentId = jsonValue.GetString("AttachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NatGatewaySupport")) {
    m_natGatewaySupport = NatGatewaySupportStateMapper::GetNatGatewaySupportStateForName(jsonValue.GetString("NatGatewaySupport"));
    m_natGatewaySupportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NatSystemRouteSupport")) {
    m_natSystemRouteSupport = jsonValue.GetBool("NatSystemRouteSupport");
    m_natSystemRouteSupportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NatGatewayRules")) {
    Aws::Utils::Array<JsonView> natGatewayRulesJsonList = jsonValue.GetArray("NatGatewayRules");
    for (unsigned natGatewayRulesIndex = 0; natGatewayRulesIndex < natGatewayRulesJsonList.GetLength(); ++natGatewayRulesIndex) {
      m_natGatewayRules.push_back(natGatewayRulesJsonList[natGatewayRulesIndex].AsObject());
    }
    m_natGatewayRulesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
