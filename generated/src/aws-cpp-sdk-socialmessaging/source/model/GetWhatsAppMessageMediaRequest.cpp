/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/GetWhatsAppMessageMediaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetWhatsAppMessageMediaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mediaIdHasBeenSet)
  {
   payload.WithString("mediaId", m_mediaId);

  }

  if(m_originationPhoneNumberIdHasBeenSet)
  {
   payload.WithString("originationPhoneNumberId", m_originationPhoneNumberId);

  }

  if(m_metadataOnlyHasBeenSet)
  {
   payload.WithBool("metadataOnly", m_metadataOnly);

  }

  if(m_destinationS3PresignedUrlHasBeenSet)
  {
   payload.WithObject("destinationS3PresignedUrl", m_destinationS3PresignedUrl.Jsonize());

  }

  if(m_destinationS3FileHasBeenSet)
  {
   payload.WithObject("destinationS3File", m_destinationS3File.Jsonize());

  }

  return payload.View().WriteReadable();
}




