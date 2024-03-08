/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/GetMedicalScribeJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMedicalScribeJobRequest::GetMedicalScribeJobRequest() : 
    m_medicalScribeJobNameHasBeenSet(false)
{
}

Aws::String GetMedicalScribeJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_medicalScribeJobNameHasBeenSet)
  {
   payload.WithString("MedicalScribeJobName", m_medicalScribeJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMedicalScribeJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.GetMedicalScribeJob"));
  return headers;

}




