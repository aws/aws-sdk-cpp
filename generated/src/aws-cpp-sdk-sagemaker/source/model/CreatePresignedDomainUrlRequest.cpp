/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreatePresignedDomainUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePresignedDomainUrlRequest::CreatePresignedDomainUrlRequest() : 
    m_domainIdHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_sessionExpirationDurationInSeconds(0),
    m_sessionExpirationDurationInSecondsHasBeenSet(false),
    m_expiresInSeconds(0),
    m_expiresInSecondsHasBeenSet(false),
    m_spaceNameHasBeenSet(false)
{
}

Aws::String CreatePresignedDomainUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_userProfileNameHasBeenSet)
  {
   payload.WithString("UserProfileName", m_userProfileName);

  }

  if(m_sessionExpirationDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("SessionExpirationDurationInSeconds", m_sessionExpirationDurationInSeconds);

  }

  if(m_expiresInSecondsHasBeenSet)
  {
   payload.WithInteger("ExpiresInSeconds", m_expiresInSeconds);

  }

  if(m_spaceNameHasBeenSet)
  {
   payload.WithString("SpaceName", m_spaceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePresignedDomainUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreatePresignedDomainUrl"));
  return headers;

}




