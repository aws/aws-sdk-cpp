/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/PutAttachmentRoutingPolicyLabelResult.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutAttachmentRoutingPolicyLabelResult::PutAttachmentRoutingPolicyLabelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

PutAttachmentRoutingPolicyLabelResult& PutAttachmentRoutingPolicyLabelResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("CoreNetworkId")) {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");
    m_coreNetworkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttachmentId")) {
    m_attachmentId = jsonValue.GetString("AttachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingPolicyLabel")) {
    m_routingPolicyLabel = jsonValue.GetString("RoutingPolicyLabel");
    m_routingPolicyLabelHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
