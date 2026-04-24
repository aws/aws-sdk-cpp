/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeNotifyConfigurationsResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNotifyConfigurationsResult::DescribeNotifyConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DescribeNotifyConfigurationsResult& DescribeNotifyConfigurationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NotifyConfigurations")) {
    Aws::Utils::Array<JsonView> notifyConfigurationsJsonList = jsonValue.GetArray("NotifyConfigurations");
    for (unsigned notifyConfigurationsIndex = 0; notifyConfigurationsIndex < notifyConfigurationsJsonList.GetLength();
         ++notifyConfigurationsIndex) {
      m_notifyConfigurations.push_back(notifyConfigurationsJsonList[notifyConfigurationsIndex].AsObject());
    }
    m_notifyConfigurationsHasBeenSet = true;
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
