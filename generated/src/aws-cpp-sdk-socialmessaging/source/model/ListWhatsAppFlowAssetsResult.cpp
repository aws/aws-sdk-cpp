/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/socialmessaging/model/ListWhatsAppFlowAssetsResult.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWhatsAppFlowAssetsResult::ListWhatsAppFlowAssetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListWhatsAppFlowAssetsResult& ListWhatsAppFlowAssetsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("flowAssets")) {
    Aws::Utils::Array<JsonView> flowAssetsJsonList = jsonValue.GetArray("flowAssets");
    for (unsigned flowAssetsIndex = 0; flowAssetsIndex < flowAssetsJsonList.GetLength(); ++flowAssetsIndex) {
      m_flowAssets.push_back(flowAssetsJsonList[flowAssetsIndex].AsObject());
    }
    m_flowAssetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
