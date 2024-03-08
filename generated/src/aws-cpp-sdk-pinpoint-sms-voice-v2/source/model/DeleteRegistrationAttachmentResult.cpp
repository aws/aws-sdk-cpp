/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteRegistrationAttachmentResult.h>
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

DeleteRegistrationAttachmentResult::DeleteRegistrationAttachmentResult() : 
    m_attachmentStatus(AttachmentStatus::NOT_SET),
    m_attachmentUploadErrorReason(AttachmentUploadErrorReason::NOT_SET)
{
}

DeleteRegistrationAttachmentResult::DeleteRegistrationAttachmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_attachmentStatus(AttachmentStatus::NOT_SET),
    m_attachmentUploadErrorReason(AttachmentUploadErrorReason::NOT_SET)
{
  *this = result;
}

DeleteRegistrationAttachmentResult& DeleteRegistrationAttachmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistrationAttachmentArn"))
  {
    m_registrationAttachmentArn = jsonValue.GetString("RegistrationAttachmentArn");

  }

  if(jsonValue.ValueExists("RegistrationAttachmentId"))
  {
    m_registrationAttachmentId = jsonValue.GetString("RegistrationAttachmentId");

  }

  if(jsonValue.ValueExists("AttachmentStatus"))
  {
    m_attachmentStatus = AttachmentStatusMapper::GetAttachmentStatusForName(jsonValue.GetString("AttachmentStatus"));

  }

  if(jsonValue.ValueExists("AttachmentUploadErrorReason"))
  {
    m_attachmentUploadErrorReason = AttachmentUploadErrorReasonMapper::GetAttachmentUploadErrorReasonForName(jsonValue.GetString("AttachmentUploadErrorReason"));

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
