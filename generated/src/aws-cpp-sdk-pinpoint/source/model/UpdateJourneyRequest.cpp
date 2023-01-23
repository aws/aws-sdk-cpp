/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateJourneyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateJourneyRequest::UpdateJourneyRequest() : 
    m_applicationIdHasBeenSet(false),
    m_journeyIdHasBeenSet(false),
    m_writeJourneyRequestHasBeenSet(false)
{
}

Aws::String UpdateJourneyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_writeJourneyRequestHasBeenSet)
  {
   payload = m_writeJourneyRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




