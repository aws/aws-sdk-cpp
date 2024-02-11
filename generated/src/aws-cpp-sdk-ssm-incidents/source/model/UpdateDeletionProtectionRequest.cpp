/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/UpdateDeletionProtectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDeletionProtectionRequest::UpdateDeletionProtectionRequest() : 
    m_arnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_deletionProtected(false),
    m_deletionProtectedHasBeenSet(false)
{
}

Aws::String UpdateDeletionProtectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_deletionProtectedHasBeenSet)
  {
   payload.WithBool("deletionProtected", m_deletionProtected);

  }

  return payload.View().WriteReadable();
}




