/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeletePatchBaselineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePatchBaselineRequest::DeletePatchBaselineRequest() : 
    m_baselineIdHasBeenSet(false)
{
}

Aws::String DeletePatchBaselineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baselineIdHasBeenSet)
  {
   payload.WithString("BaselineId", m_baselineId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePatchBaselineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeletePatchBaseline"));
  return headers;

}




