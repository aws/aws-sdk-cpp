/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetDefaultPatchBaselineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDefaultPatchBaselineRequest::GetDefaultPatchBaselineRequest() : 
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false)
{
}

Aws::String GetDefaultPatchBaselineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDefaultPatchBaselineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetDefaultPatchBaseline"));
  return headers;

}




