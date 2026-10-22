/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/ListAttachmentNatConfigurationsResult.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAttachmentNatConfigurationsResult::ListAttachmentNatConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListAttachmentNatConfigurationsResult& ListAttachmentNatConfigurationsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AttachmentNatConfigurations")) {
    Aws::Utils::Array<JsonView> attachmentNatConfigurationsJsonList = jsonValue.GetArray("AttachmentNatConfigurations");
    for (unsigned attachmentNatConfigurationsIndex = 0; attachmentNatConfigurationsIndex < attachmentNatConfigurationsJsonList.GetLength();
         ++attachmentNatConfigurationsIndex) {
      m_attachmentNatConfigurations.push_back(attachmentNatConfigurationsJsonList[attachmentNatConfigurationsIndex].AsObject());
    }
    m_attachmentNatConfigurationsHasBeenSet = true;
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
