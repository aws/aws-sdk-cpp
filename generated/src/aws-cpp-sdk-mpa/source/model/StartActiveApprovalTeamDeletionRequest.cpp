/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/StartActiveApprovalTeamDeletionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MPA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartActiveApprovalTeamDeletionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pendingWindowDaysHasBeenSet)
  {
   payload.WithInteger("PendingWindowDays", m_pendingWindowDays);

  }

  return payload.View().WriteReadable();
}




