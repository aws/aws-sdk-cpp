/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/GetMedicalTranscriptionJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMedicalTranscriptionJobRequest::GetMedicalTranscriptionJobRequest() : 
    m_medicalTranscriptionJobNameHasBeenSet(false)
{
}

Aws::String GetMedicalTranscriptionJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_medicalTranscriptionJobNameHasBeenSet)
  {
   payload.WithString("MedicalTranscriptionJobName", m_medicalTranscriptionJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMedicalTranscriptionJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.GetMedicalTranscriptionJob"));
  return headers;

}




