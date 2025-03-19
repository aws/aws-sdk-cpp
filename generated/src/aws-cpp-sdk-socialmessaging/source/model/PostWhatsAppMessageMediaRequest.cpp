/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/PostWhatsAppMessageMediaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PostWhatsAppMessageMediaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_originationPhoneNumberIdHasBeenSet)
  {
   payload.WithString("originationPhoneNumberId", m_originationPhoneNumberId);

  }

  if(m_sourceS3PresignedUrlHasBeenSet)
  {
   payload.WithObject("sourceS3PresignedUrl", m_sourceS3PresignedUrl.Jsonize());

  }

  if(m_sourceS3FileHasBeenSet)
  {
   payload.WithObject("sourceS3File", m_sourceS3File.Jsonize());

  }

  return payload.View().WriteReadable();
}




