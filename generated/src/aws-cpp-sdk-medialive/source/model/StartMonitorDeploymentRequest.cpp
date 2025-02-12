/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StartMonitorDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMonitorDeploymentRequest::StartMonitorDeploymentRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_requestId(Aws::Utils::UUID::PseudoRandomUUID()),
    m_requestIdHasBeenSet(true)
{
}

Aws::String StartMonitorDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("dryRun", m_dryRun);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  return payload.View().WriteReadable();
}




