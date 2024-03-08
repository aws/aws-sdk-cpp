/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationSectionDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRegistrationSectionDefinitionsResult::DescribeRegistrationSectionDefinitionsResult()
{
}

DescribeRegistrationSectionDefinitionsResult::DescribeRegistrationSectionDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRegistrationSectionDefinitionsResult& DescribeRegistrationSectionDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistrationType"))
  {
    m_registrationType = jsonValue.GetString("RegistrationType");

  }

  if(jsonValue.ValueExists("RegistrationSectionDefinitions"))
  {
    Aws::Utils::Array<JsonView> registrationSectionDefinitionsJsonList = jsonValue.GetArray("RegistrationSectionDefinitions");
    for(unsigned registrationSectionDefinitionsIndex = 0; registrationSectionDefinitionsIndex < registrationSectionDefinitionsJsonList.GetLength(); ++registrationSectionDefinitionsIndex)
    {
      m_registrationSectionDefinitions.push_back(registrationSectionDefinitionsJsonList[registrationSectionDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
