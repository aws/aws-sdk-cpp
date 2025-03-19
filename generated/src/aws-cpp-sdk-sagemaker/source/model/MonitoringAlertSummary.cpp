/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringAlertSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringAlertSummary::MonitoringAlertSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitoringAlertSummary& MonitoringAlertSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringAlertName"))
  {
    m_monitoringAlertName = jsonValue.GetString("MonitoringAlertName");
    m_monitoringAlertNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlertStatus"))
  {
    m_alertStatus = MonitoringAlertStatusMapper::GetMonitoringAlertStatusForName(jsonValue.GetString("AlertStatus"));
    m_alertStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatapointsToAlert"))
  {
    m_datapointsToAlert = jsonValue.GetInteger("DatapointsToAlert");
    m_datapointsToAlertHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationPeriod"))
  {
    m_evaluationPeriod = jsonValue.GetInteger("EvaluationPeriod");
    m_evaluationPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Actions"))
  {
    m_actions = jsonValue.GetObject("Actions");
    m_actionsHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitoringAlertSummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringAlertNameHasBeenSet)
  {
   payload.WithString("MonitoringAlertName", m_monitoringAlertName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_alertStatusHasBeenSet)
  {
   payload.WithString("AlertStatus", MonitoringAlertStatusMapper::GetNameForMonitoringAlertStatus(m_alertStatus));
  }

  if(m_datapointsToAlertHasBeenSet)
  {
   payload.WithInteger("DatapointsToAlert", m_datapointsToAlert);

  }

  if(m_evaluationPeriodHasBeenSet)
  {
   payload.WithInteger("EvaluationPeriod", m_evaluationPeriod);

  }

  if(m_actionsHasBeenSet)
  {
   payload.WithObject("Actions", m_actions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
