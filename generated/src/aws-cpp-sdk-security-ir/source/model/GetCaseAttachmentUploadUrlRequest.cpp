/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/GetCaseAttachmentUploadUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCaseAttachmentUploadUrlRequest::GetCaseAttachmentUploadUrlRequest() : 
    m_caseIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_contentLength(0),
    m_contentLengthHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String GetCaseAttachmentUploadUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_contentLengthHasBeenSet)
  {
   payload.WithInt64("contentLength", m_contentLength);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




