/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateTargetGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTargetGroupRequest::UpdateTargetGroupRequest() : 
    m_healthCheckHasBeenSet(false),
    m_targetGroupIdentifierHasBeenSet(false)
{
}

Aws::String UpdateTargetGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("healthCheck", m_healthCheck.Jsonize());

  }

  return payload.View().WriteReadable();
}




