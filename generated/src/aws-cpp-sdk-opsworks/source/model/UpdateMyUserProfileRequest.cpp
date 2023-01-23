/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/UpdateMyUserProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMyUserProfileRequest::UpdateMyUserProfileRequest() : 
    m_sshPublicKeyHasBeenSet(false)
{
}

Aws::String UpdateMyUserProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sshPublicKeyHasBeenSet)
  {
   payload.WithString("SshPublicKey", m_sshPublicKey);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMyUserProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.UpdateMyUserProfile"));
  return headers;

}




