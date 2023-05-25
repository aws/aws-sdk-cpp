/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringSchedule.h>
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

MonitoringSchedule::MonitoringSchedule() : 
    m_monitoringScheduleArnHasBeenSet(false),
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringScheduleStatus(ScheduleStatus::NOT_SET),
    m_monitoringScheduleStatusHasBeenSet(false),
    m_monitoringType(MonitoringType::NOT_SET),
    m_monitoringTypeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringScheduleConfigHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_lastMonitoringExecutionSummaryHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

MonitoringSchedule::MonitoringSchedule(JsonView jsonValue) : 
    m_monitoringScheduleArnHasBeenSet(false),
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringScheduleStatus(ScheduleStatus::NOT_SET),
    m_monitoringScheduleStatusHasBeenSet(false),
    m_monitoringType(MonitoringType::NOT_SET),
    m_monitoringTypeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringScheduleConfigHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_lastMonitoringExecutionSummaryHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringSchedule& MonitoringSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringScheduleArn"))
  {
    m_monitoringScheduleArn = jsonValue.GetString("MonitoringScheduleArn");

    m_monitoringScheduleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringScheduleName"))
  {
    m_monitoringScheduleName = jsonValue.GetString("MonitoringScheduleName");

    m_monitoringScheduleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringScheduleStatus"))
  {
    m_monitoringScheduleStatus = ScheduleStatusMapper::GetScheduleStatusForName(jsonValue.GetString("MonitoringScheduleStatus"));

    m_monitoringScheduleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringType"))
  {
    m_monitoringType = MonitoringTypeMapper::GetMonitoringTypeForName(jsonValue.GetString("MonitoringType"));

    m_monitoringTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
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

  if(jsonValue.ValueExists("MonitoringScheduleConfig"))
  {
    m_monitoringScheduleConfig = jsonValue.GetObject("MonitoringScheduleConfig");

    m_monitoringScheduleConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastMonitoringExecutionSummary"))
  {
    m_lastMonitoringExecutionSummary = jsonValue.GetObject("LastMonitoringExecutionSummary");

    m_lastMonitoringExecutionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringScheduleArnHasBeenSet)
  {
   payload.WithString("MonitoringScheduleArn", m_monitoringScheduleArn);

  }

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_monitoringScheduleStatusHasBeenSet)
  {
   payload.WithString("MonitoringScheduleStatus", ScheduleStatusMapper::GetNameForScheduleStatus(m_monitoringScheduleStatus));
  }

  if(m_monitoringTypeHasBeenSet)
  {
   payload.WithString("MonitoringType", MonitoringTypeMapper::GetNameForMonitoringType(m_monitoringType));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_monitoringScheduleConfigHasBeenSet)
  {
   payload.WithObject("MonitoringScheduleConfig", m_monitoringScheduleConfig.Jsonize());

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_lastMonitoringExecutionSummaryHasBeenSet)
  {
   payload.WithObject("LastMonitoringExecutionSummary", m_lastMonitoringExecutionSummary.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
