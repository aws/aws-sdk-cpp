/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/StopClockRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopClockRequest::StopClockRequest() : 
    m_simulationHasBeenSet(false)
{
}

Aws::String StopClockRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_simulationHasBeenSet)
  {
   payload.WithString("Simulation", m_simulation);

  }

  return payload.View().WriteReadable();
}




