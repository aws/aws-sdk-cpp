/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeNotifyTemplatesResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNotifyTemplatesResult::DescribeNotifyTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeNotifyTemplatesResult& DescribeNotifyTemplatesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NotifyTemplates")) {
    Aws::Utils::Array<JsonView> notifyTemplatesJsonList = jsonValue.GetArray("NotifyTemplates");
    for (unsigned notifyTemplatesIndex = 0; notifyTemplatesIndex < notifyTemplatesJsonList.GetLength(); ++notifyTemplatesIndex) {
      m_notifyTemplates.push_back(notifyTemplatesJsonList[notifyTemplatesIndex].AsObject());
    }
    m_notifyTemplatesHasBeenSet = true;
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
