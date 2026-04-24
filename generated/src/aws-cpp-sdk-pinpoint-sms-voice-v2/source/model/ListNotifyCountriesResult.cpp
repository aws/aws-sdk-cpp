/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/ListNotifyCountriesResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNotifyCountriesResult::ListNotifyCountriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListNotifyCountriesResult& ListNotifyCountriesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NotifyCountries")) {
    Aws::Utils::Array<JsonView> notifyCountriesJsonList = jsonValue.GetArray("NotifyCountries");
    for (unsigned notifyCountriesIndex = 0; notifyCountriesIndex < notifyCountriesJsonList.GetLength(); ++notifyCountriesIndex) {
      m_notifyCountries.push_back(notifyCountriesJsonList[notifyCountriesIndex].AsObject());
    }
    m_notifyCountriesHasBeenSet = true;
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
