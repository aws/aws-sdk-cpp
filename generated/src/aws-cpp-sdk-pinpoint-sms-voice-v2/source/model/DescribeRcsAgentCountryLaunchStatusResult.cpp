/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRcsAgentCountryLaunchStatusResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRcsAgentCountryLaunchStatusResult::DescribeRcsAgentCountryLaunchStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DescribeRcsAgentCountryLaunchStatusResult& DescribeRcsAgentCountryLaunchStatusResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RcsAgentId")) {
    m_rcsAgentId = jsonValue.GetString("RcsAgentId");
    m_rcsAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RcsAgentArn")) {
    m_rcsAgentArn = jsonValue.GetString("RcsAgentArn");
    m_rcsAgentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CountryLaunchStatus")) {
    Aws::Utils::Array<JsonView> countryLaunchStatusJsonList = jsonValue.GetArray("CountryLaunchStatus");
    for (unsigned countryLaunchStatusIndex = 0; countryLaunchStatusIndex < countryLaunchStatusJsonList.GetLength();
         ++countryLaunchStatusIndex) {
      m_countryLaunchStatus.push_back(countryLaunchStatusJsonList[countryLaunchStatusIndex].AsObject());
    }
    m_countryLaunchStatusHasBeenSet = true;
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
