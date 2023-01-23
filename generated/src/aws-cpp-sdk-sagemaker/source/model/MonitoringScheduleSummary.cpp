/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringScheduleSummary.h>
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

MonitoringScheduleSummary::MonitoringScheduleSummary() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringScheduleArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringScheduleStatus(ScheduleStatus::NOT_SET),
    m_monitoringScheduleStatusHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_monitoringJobDefinitionNameHasBeenSet(false),
    m_monitoringType(MonitoringType::NOT_SET),
    m_monitoringTypeHasBeenSet(false)
{
}

MonitoringScheduleSummary::MonitoringScheduleSummary(JsonView jsonValue) : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringScheduleArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringScheduleStatus(ScheduleStatus::NOT_SET),
    m_monitoringScheduleStatusHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_monitoringJobDefinitionNameHasBeenSet(false),
    m_monitoringType(MonitoringType::NOT_SET),
    m_monitoringTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringScheduleSummary& MonitoringScheduleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringScheduleName"))
  {
    m_monitoringScheduleName = jsonValue.GetString("MonitoringScheduleName");

    m_monitoringScheduleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringScheduleArn"))
  {
    m_monitoringScheduleArn = jsonValue.GetString("MonitoringScheduleArn");

    m_monitoringScheduleArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("MonitoringScheduleStatus"))
  {
    m_monitoringScheduleStatus = ScheduleStatusMapper::GetScheduleStatusForName(jsonValue.GetString("MonitoringScheduleStatus"));

    m_monitoringScheduleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
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

JsonValue MonitoringScheduleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_monitoringScheduleArnHasBeenSet)
  {
   payload.WithString("MonitoringScheduleArn", m_monitoringScheduleArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_monitoringScheduleStatusHasBeenSet)
  {
   payload.WithString("MonitoringScheduleStatus", ScheduleStatusMapper::GetNameForScheduleStatus(m_monitoringScheduleStatus));
  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

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
