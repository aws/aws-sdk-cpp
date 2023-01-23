/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeviceJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

DeviceJob::DeviceJob() : 
    m_createdTimeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false)
{
}

DeviceJob::DeviceJob(JsonView jsonValue) : 
    m_createdTimeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceJob& DeviceJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("JobType"));

    m_jobTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceJob::Jsonize() const
{
  JsonValue payload;

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
