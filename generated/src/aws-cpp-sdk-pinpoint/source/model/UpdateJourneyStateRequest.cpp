/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateJourneyStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateJourneyStateRequest::UpdateJourneyStateRequest() : 
    m_applicationIdHasBeenSet(false),
    m_journeyIdHasBeenSet(false),
    m_journeyStateRequestHasBeenSet(false)
{
}

Aws::String UpdateJourneyStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_journeyStateRequestHasBeenSet)
  {
   payload = m_journeyStateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




