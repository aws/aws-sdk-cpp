/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldDefinitionsResult.h>
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

DescribeRegistrationFieldDefinitionsResult::DescribeRegistrationFieldDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRegistrationFieldDefinitionsResult& DescribeRegistrationFieldDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistrationType"))
  {
    m_registrationType = jsonValue.GetString("RegistrationType");
    m_registrationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistrationFieldDefinitions"))
  {
    Aws::Utils::Array<JsonView> registrationFieldDefinitionsJsonList = jsonValue.GetArray("RegistrationFieldDefinitions");
    for(unsigned registrationFieldDefinitionsIndex = 0; registrationFieldDefinitionsIndex < registrationFieldDefinitionsJsonList.GetLength(); ++registrationFieldDefinitionsIndex)
    {
      m_registrationFieldDefinitions.push_back(registrationFieldDefinitionsJsonList[registrationFieldDefinitionsIndex].AsObject());
    }
    m_registrationFieldDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
