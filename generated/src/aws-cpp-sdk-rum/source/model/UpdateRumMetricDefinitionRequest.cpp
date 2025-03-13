/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/UpdateRumMetricDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRumMetricDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", MetricDestinationMapper::GetNameForMetricDestination(m_destination));
  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  if(m_metricDefinitionHasBeenSet)
  {
   payload.WithObject("MetricDefinition", m_metricDefinition.Jsonize());

  }

  if(m_metricDefinitionIdHasBeenSet)
  {
   payload.WithString("MetricDefinitionId", m_metricDefinitionId);

  }

  return payload.View().WriteReadable();
}




