/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/UpdateTraceSegmentDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTraceSegmentDestinationRequest::UpdateTraceSegmentDestinationRequest() : 
    m_destination(TraceSegmentDestination::NOT_SET),
    m_destinationHasBeenSet(false)
{
}

Aws::String UpdateTraceSegmentDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", TraceSegmentDestinationMapper::GetNameForTraceSegmentDestination(m_destination));
  }

  return payload.View().WriteReadable();
}




