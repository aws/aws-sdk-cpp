/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartMediaAnalysisJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMediaAnalysisJobRequest::StartMediaAnalysisJobRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_jobNameHasBeenSet(false),
    m_operationsConfigHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String StartMediaAnalysisJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_operationsConfigHasBeenSet)
  {
   payload.WithObject("OperationsConfig", m_operationsConfig.Jsonize());

  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("Input", m_input.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMediaAnalysisJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.StartMediaAnalysisJob"));
  return headers;

}




