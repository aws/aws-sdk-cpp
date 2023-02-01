/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/PutRumMetricsDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRumMetricsDestinationRequest::PutRumMetricsDestinationRequest() : 
    m_appMonitorNameHasBeenSet(false),
    m_destination(MetricDestination::NOT_SET),
    m_destinationHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
}

Aws::String PutRumMetricsDestinationRequest::SerializePayload() const
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

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  return payload.View().WriteReadable();
}




