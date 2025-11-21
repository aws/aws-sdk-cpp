/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/ListAttachmentRoutingPolicyAssociationsResult.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAttachmentRoutingPolicyAssociationsResult::ListAttachmentRoutingPolicyAssociationsResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListAttachmentRoutingPolicyAssociationsResult& ListAttachmentRoutingPolicyAssociationsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AttachmentRoutingPolicyAssociations")) {
    Aws::Utils::Array<JsonView> attachmentRoutingPolicyAssociationsJsonList = jsonValue.GetArray("AttachmentRoutingPolicyAssociations");
    for (unsigned attachmentRoutingPolicyAssociationsIndex = 0;
         attachmentRoutingPolicyAssociationsIndex < attachmentRoutingPolicyAssociationsJsonList.GetLength();
         ++attachmentRoutingPolicyAssociationsIndex) {
      m_attachmentRoutingPolicyAssociations.push_back(
          attachmentRoutingPolicyAssociationsJsonList[attachmentRoutingPolicyAssociationsIndex].AsObject());
    }
    m_attachmentRoutingPolicyAssociationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
