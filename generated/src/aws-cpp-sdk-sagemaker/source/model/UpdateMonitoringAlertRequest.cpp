/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateMonitoringAlertRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMonitoringAlertRequest::UpdateMonitoringAlertRequest() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringAlertNameHasBeenSet(false),
    m_datapointsToAlert(0),
    m_datapointsToAlertHasBeenSet(false),
    m_evaluationPeriod(0),
    m_evaluationPeriodHasBeenSet(false)
{
}

Aws::String UpdateMonitoringAlertRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_monitoringAlertNameHasBeenSet)
  {
   payload.WithString("MonitoringAlertName", m_monitoringAlertName);

  }

  if(m_datapointsToAlertHasBeenSet)
  {
   payload.WithInteger("DatapointsToAlert", m_datapointsToAlert);

  }

  if(m_evaluationPeriodHasBeenSet)
  {
   payload.WithInteger("EvaluationPeriod", m_evaluationPeriod);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMonitoringAlertRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateMonitoringAlert"));
  return headers;

}




