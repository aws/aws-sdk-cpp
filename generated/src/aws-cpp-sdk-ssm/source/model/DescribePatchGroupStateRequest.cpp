/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribePatchGroupStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePatchGroupStateRequest::DescribePatchGroupStateRequest() : 
    m_patchGroupHasBeenSet(false)
{
}

Aws::String DescribePatchGroupStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_patchGroupHasBeenSet)
  {
   payload.WithString("PatchGroup", m_patchGroup);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePatchGroupStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DescribePatchGroupState"));
  return headers;

}




