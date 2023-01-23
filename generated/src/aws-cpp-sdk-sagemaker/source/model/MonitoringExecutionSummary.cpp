/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringExecutionSummary.h>
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

MonitoringExecutionSummary::MonitoringExecutionSummary() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringExecutionStatus(ExecutionStatus::NOT_SET),
    m_monitoringExecutionStatusHasBeenSet(false),
    m_processingJobArnHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_monitoringJobDefinitionNameHasBeenSet(false),
    m_monitoringType(MonitoringType::NOT_SET),
    m_monitoringTypeHasBeenSet(false)
{
}

MonitoringExecutionSummary::MonitoringExecutionSummary(JsonView jsonValue) : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringExecutionStatus(ExecutionStatus::NOT_SET),
    m_monitoringExecutionStatusHasBeenSet(false),
    m_processingJobArnHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_monitoringJobDefinitionNameHasBeenSet(false),
    m_monitoringType(MonitoringType::NOT_SET),
    m_monitoringTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringExecutionSummary& MonitoringExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringScheduleName"))
  {
    m_monitoringScheduleName = jsonValue.GetString("MonitoringScheduleName");

    m_monitoringScheduleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledTime"))
  {
    m_scheduledTime = jsonValue.GetDouble("ScheduledTime");

    m_scheduledTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("MonitoringExecutionStatus"))
  {
    m_monitoringExecutionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("MonitoringExecutionStatus"));

    m_monitoringExecutionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJobArn"))
  {
    m_processingJobArn = jsonValue.GetString("ProcessingJobArn");

    m_processingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringJobDefinitionName"))
  {
    m_monitoringJobDefinitionName = jsonValue.GetString("MonitoringJobDefinitionName");

    m_monitoringJobDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringType"))
  {
    m_monitoringType = MonitoringTypeMapper::GetMonitoringTypeForName(jsonValue.GetString("MonitoringType"));

    m_monitoringTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_scheduledTimeHasBeenSet)
  {
   payload.WithDouble("ScheduledTime", m_scheduledTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_monitoringExecutionStatusHasBeenSet)
  {
   payload.WithString("MonitoringExecutionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_monitoringExecutionStatus));
  }

  if(m_processingJobArnHasBeenSet)
  {
   payload.WithString("ProcessingJobArn", m_processingJobArn);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_monitoringJobDefinitionNameHasBeenSet)
  {
   payload.WithString("MonitoringJobDefinitionName", m_monitoringJobDefinitionName);

  }

  if(m_monitoringTypeHasBeenSet)
  {
   payload.WithString("MonitoringType", MonitoringTypeMapper::GetNameForMonitoringType(m_monitoringType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
