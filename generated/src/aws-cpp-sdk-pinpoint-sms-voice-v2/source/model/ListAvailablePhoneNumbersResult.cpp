/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/ListAvailablePhoneNumbersResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAvailablePhoneNumbersResult::ListAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAvailablePhoneNumbersResult& ListAvailablePhoneNumbersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AvailablePhoneNumbers")) {
    Aws::Utils::Array<JsonView> availablePhoneNumbersJsonList = jsonValue.GetArray("AvailablePhoneNumbers");
    for (unsigned availablePhoneNumbersIndex = 0; availablePhoneNumbersIndex < availablePhoneNumbersJsonList.GetLength();
         ++availablePhoneNumbersIndex) {
      m_availablePhoneNumbers.push_back(availablePhoneNumbersJsonList[availablePhoneNumbersIndex].AsString());
    }
    m_availablePhoneNumbersHasBeenSet = true;
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
