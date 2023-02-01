/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/UpdateDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDomainRequest::UpdateDomainRequest() : 
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false)
{
}

Aws::String UpdateDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("ServerSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VoiceID.UpdateDomain"));
  return headers;

}




