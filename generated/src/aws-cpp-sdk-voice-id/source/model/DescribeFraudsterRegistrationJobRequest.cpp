/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/DescribeFraudsterRegistrationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFraudsterRegistrationJobRequest::DescribeFraudsterRegistrationJobRequest() : 
    m_domainIdHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

Aws::String DescribeFraudsterRegistrationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFraudsterRegistrationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VoiceID.DescribeFraudsterRegistrationJob"));
  return headers;

}




