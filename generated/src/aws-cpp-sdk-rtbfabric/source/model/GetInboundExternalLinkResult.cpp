/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rtbfabric/model/GetInboundExternalLinkResult.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInboundExternalLinkResult::GetInboundExternalLinkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetInboundExternalLinkResult& GetInboundExternalLinkResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
  if (jsonValue.ValueExists("flowModules")) {
    Aws::Utils::Array<JsonView> flowModulesJsonList = jsonValue.GetArray("flowModules");
    for (unsigned flowModulesIndex = 0; flowModulesIndex < flowModulesJsonList.GetLength(); ++flowModulesIndex) {
      m_flowModules.push_back(flowModulesJsonList[flowModulesIndex].AsObject());
    }
    m_flowModulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pendingFlowModules")) {
    Aws::Utils::Array<JsonView> pendingFlowModulesJsonList = jsonValue.GetArray("pendingFlowModules");
    for (unsigned pendingFlowModulesIndex = 0; pendingFlowModulesIndex < pendingFlowModulesJsonList.GetLength();
         ++pendingFlowModulesIndex) {
      m_pendingFlowModules.push_back(pendingFlowModulesJsonList[pendingFlowModulesIndex].AsObject());
    }
    m_pendingFlowModulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributes")) {
    m_attributes = jsonValue.GetObject("attributes");
    m_attributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logSettings")) {
    m_logSettings = jsonValue.GetObject("logSettings");
    m_logSettingsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
