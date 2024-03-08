/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldValuesResult.h>
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

DescribeRegistrationFieldValuesResult::DescribeRegistrationFieldValuesResult() : 
    m_versionNumber(0)
{
}

DescribeRegistrationFieldValuesResult::DescribeRegistrationFieldValuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_versionNumber(0)
{
  *this = result;
}

DescribeRegistrationFieldValuesResult& DescribeRegistrationFieldValuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistrationArn"))
  {
    m_registrationArn = jsonValue.GetString("RegistrationArn");

  }

  if(jsonValue.ValueExists("RegistrationId"))
  {
    m_registrationId = jsonValue.GetString("RegistrationId");

  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

  }

  if(jsonValue.ValueExists("RegistrationFieldValues"))
  {
    Aws::Utils::Array<JsonView> registrationFieldValuesJsonList = jsonValue.GetArray("RegistrationFieldValues");
    for(unsigned registrationFieldValuesIndex = 0; registrationFieldValuesIndex < registrationFieldValuesJsonList.GetLength(); ++registrationFieldValuesIndex)
    {
      m_registrationFieldValues.push_back(registrationFieldValuesJsonList[registrationFieldValuesIndex].AsObject());
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
