/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SubmitRegistrationVersionResult.h>
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

SubmitRegistrationVersionResult::SubmitRegistrationVersionResult() : 
    m_versionNumber(0),
    m_registrationVersionStatus(RegistrationVersionStatus::NOT_SET)
{
}

SubmitRegistrationVersionResult::SubmitRegistrationVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_versionNumber(0),
    m_registrationVersionStatus(RegistrationVersionStatus::NOT_SET)
{
  *this = result;
}

SubmitRegistrationVersionResult& SubmitRegistrationVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("RegistrationVersionStatus"))
  {
    m_registrationVersionStatus = RegistrationVersionStatusMapper::GetRegistrationVersionStatusForName(jsonValue.GetString("RegistrationVersionStatus"));

  }

  if(jsonValue.ValueExists("RegistrationVersionStatusHistory"))
  {
    m_registrationVersionStatusHistory = jsonValue.GetObject("RegistrationVersionStatusHistory");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
