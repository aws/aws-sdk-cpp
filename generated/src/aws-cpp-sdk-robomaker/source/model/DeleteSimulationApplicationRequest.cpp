/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeleteSimulationApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSimulationApplicationRequest::DeleteSimulationApplicationRequest() : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false)
{
}

Aws::String DeleteSimulationApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationHasBeenSet)
  {
   payload.WithString("application", m_application);

  }

  if(m_applicationVersionHasBeenSet)
  {
   payload.WithString("applicationVersion", m_applicationVersion);

  }

  return payload.View().WriteReadable();
}




