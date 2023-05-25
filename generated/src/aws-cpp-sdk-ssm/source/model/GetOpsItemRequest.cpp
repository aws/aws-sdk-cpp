/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetOpsItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetOpsItemRequest::GetOpsItemRequest() : 
    m_opsItemIdHasBeenSet(false),
    m_opsItemArnHasBeenSet(false)
{
}

Aws::String GetOpsItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  if(m_opsItemArnHasBeenSet)
  {
   payload.WithString("OpsItemArn", m_opsItemArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetOpsItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetOpsItem"));
  return headers;

}




