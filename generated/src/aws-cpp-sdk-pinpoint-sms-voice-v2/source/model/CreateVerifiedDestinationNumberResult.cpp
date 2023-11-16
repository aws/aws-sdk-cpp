/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/CreateVerifiedDestinationNumberResult.h>
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

CreateVerifiedDestinationNumberResult::CreateVerifiedDestinationNumberResult() : 
    m_status(VerificationStatus::NOT_SET)
{
}

CreateVerifiedDestinationNumberResult::CreateVerifiedDestinationNumberResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(VerificationStatus::NOT_SET)
{
  *this = result;
}

CreateVerifiedDestinationNumberResult& CreateVerifiedDestinationNumberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VerifiedDestinationNumberArn"))
  {
    m_verifiedDestinationNumberArn = jsonValue.GetString("VerifiedDestinationNumberArn");

  }

  if(jsonValue.ValueExists("VerifiedDestinationNumberId"))
  {
    m_verifiedDestinationNumberId = jsonValue.GetString("VerifiedDestinationNumberId");

  }

  if(jsonValue.ValueExists("DestinationPhoneNumber"))
  {
    m_destinationPhoneNumber = jsonValue.GetString("DestinationPhoneNumber");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = VerificationStatusMapper::GetVerificationStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
