/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteRegistrationFieldValueResult.h>
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

DeleteRegistrationFieldValueResult::DeleteRegistrationFieldValueResult() : 
    m_versionNumber(0)
{
}

DeleteRegistrationFieldValueResult::DeleteRegistrationFieldValueResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_versionNumber(0)
{
  *this = result;
}

DeleteRegistrationFieldValueResult& DeleteRegistrationFieldValueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("FieldPath"))
  {
    m_fieldPath = jsonValue.GetString("FieldPath");

  }

  if(jsonValue.ValueExists("SelectChoices"))
  {
    Aws::Utils::Array<JsonView> selectChoicesJsonList = jsonValue.GetArray("SelectChoices");
    for(unsigned selectChoicesIndex = 0; selectChoicesIndex < selectChoicesJsonList.GetLength(); ++selectChoicesIndex)
    {
      m_selectChoices.push_back(selectChoicesJsonList[selectChoicesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("TextValue"))
  {
    m_textValue = jsonValue.GetString("TextValue");

  }

  if(jsonValue.ValueExists("RegistrationAttachmentId"))
  {
    m_registrationAttachmentId = jsonValue.GetString("RegistrationAttachmentId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
