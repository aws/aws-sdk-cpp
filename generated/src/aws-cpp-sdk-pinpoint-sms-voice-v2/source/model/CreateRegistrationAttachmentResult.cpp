/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/CreateRegistrationAttachmentResult.h>
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

CreateRegistrationAttachmentResult::CreateRegistrationAttachmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateRegistrationAttachmentResult& CreateRegistrationAttachmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistrationAttachmentArn"))
  {
    m_registrationAttachmentArn = jsonValue.GetString("RegistrationAttachmentArn");
    m_registrationAttachmentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistrationAttachmentId"))
  {
    m_registrationAttachmentId = jsonValue.GetString("RegistrationAttachmentId");
    m_registrationAttachmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttachmentStatus"))
  {
    m_attachmentStatus = AttachmentStatusMapper::GetAttachmentStatusForName(jsonValue.GetString("AttachmentStatus"));
    m_attachmentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
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
