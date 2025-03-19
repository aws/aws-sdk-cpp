/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/StartDICOMImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDICOMImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("dataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_inputS3UriHasBeenSet)
  {
   payload.WithString("inputS3Uri", m_inputS3Uri);

  }

  if(m_outputS3UriHasBeenSet)
  {
   payload.WithString("outputS3Uri", m_outputS3Uri);

  }

  if(m_inputOwnerAccountIdHasBeenSet)
  {
   payload.WithString("inputOwnerAccountId", m_inputOwnerAccountId);

  }

  return payload.View().WriteReadable();
}




