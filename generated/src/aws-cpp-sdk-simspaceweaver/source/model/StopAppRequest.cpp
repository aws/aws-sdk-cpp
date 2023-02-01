/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/StopAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopAppRequest::StopAppRequest() : 
    m_appHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_simulationHasBeenSet(false)
{
}

Aws::String StopAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appHasBeenSet)
  {
   payload.WithString("App", m_app);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_simulationHasBeenSet)
  {
   payload.WithString("Simulation", m_simulation);

  }

  return payload.View().WriteReadable();
}




