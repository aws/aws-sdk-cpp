/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CompilationJobSummary.h>
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

CompilationJobSummary::CompilationJobSummary() : 
    m_compilationJobNameHasBeenSet(false),
    m_compilationJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_compilationStartTimeHasBeenSet(false),
    m_compilationEndTimeHasBeenSet(false),
    m_compilationTargetDevice(TargetDevice::NOT_SET),
    m_compilationTargetDeviceHasBeenSet(false),
    m_compilationTargetPlatformOs(TargetPlatformOs::NOT_SET),
    m_compilationTargetPlatformOsHasBeenSet(false),
    m_compilationTargetPlatformArch(TargetPlatformArch::NOT_SET),
    m_compilationTargetPlatformArchHasBeenSet(false),
    m_compilationTargetPlatformAccelerator(TargetPlatformAccelerator::NOT_SET),
    m_compilationTargetPlatformAcceleratorHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_compilationJobStatus(CompilationJobStatus::NOT_SET),
    m_compilationJobStatusHasBeenSet(false)
{
}

CompilationJobSummary::CompilationJobSummary(JsonView jsonValue) : 
    m_compilationJobNameHasBeenSet(false),
    m_compilationJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_compilationStartTimeHasBeenSet(false),
    m_compilationEndTimeHasBeenSet(false),
    m_compilationTargetDevice(TargetDevice::NOT_SET),
    m_compilationTargetDeviceHasBeenSet(false),
    m_compilationTargetPlatformOs(TargetPlatformOs::NOT_SET),
    m_compilationTargetPlatformOsHasBeenSet(false),
    m_compilationTargetPlatformArch(TargetPlatformArch::NOT_SET),
    m_compilationTargetPlatformArchHasBeenSet(false),
    m_compilationTargetPlatformAccelerator(TargetPlatformAccelerator::NOT_SET),
    m_compilationTargetPlatformAcceleratorHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_compilationJobStatus(CompilationJobStatus::NOT_SET),
    m_compilationJobStatusHasBeenSet(false)
{
  *this = jsonValue;
}

CompilationJobSummary& CompilationJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompilationJobName"))
  {
    m_compilationJobName = jsonValue.GetString("CompilationJobName");

    m_compilationJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationJobArn"))
  {
    m_compilationJobArn = jsonValue.GetString("CompilationJobArn");

    m_compilationJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationStartTime"))
  {
    m_compilationStartTime = jsonValue.GetDouble("CompilationStartTime");

    m_compilationStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationEndTime"))
  {
    m_compilationEndTime = jsonValue.GetDouble("CompilationEndTime");

    m_compilationEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationTargetDevice"))
  {
    m_compilationTargetDevice = TargetDeviceMapper::GetTargetDeviceForName(jsonValue.GetString("CompilationTargetDevice"));

    m_compilationTargetDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationTargetPlatformOs"))
  {
    m_compilationTargetPlatformOs = TargetPlatformOsMapper::GetTargetPlatformOsForName(jsonValue.GetString("CompilationTargetPlatformOs"));

    m_compilationTargetPlatformOsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationTargetPlatformArch"))
  {
    m_compilationTargetPlatformArch = TargetPlatformArchMapper::GetTargetPlatformArchForName(jsonValue.GetString("CompilationTargetPlatformArch"));

    m_compilationTargetPlatformArchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationTargetPlatformAccelerator"))
  {
    m_compilationTargetPlatformAccelerator = TargetPlatformAcceleratorMapper::GetTargetPlatformAcceleratorForName(jsonValue.GetString("CompilationTargetPlatformAccelerator"));

    m_compilationTargetPlatformAcceleratorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilationJobStatus"))
  {
    m_compilationJobStatus = CompilationJobStatusMapper::GetCompilationJobStatusForName(jsonValue.GetString("CompilationJobStatus"));

    m_compilationJobStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue CompilationJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_compilationJobNameHasBeenSet)
  {
   payload.WithString("CompilationJobName", m_compilationJobName);

  }

  if(m_compilationJobArnHasBeenSet)
  {
   payload.WithString("CompilationJobArn", m_compilationJobArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_compilationStartTimeHasBeenSet)
  {
   payload.WithDouble("CompilationStartTime", m_compilationStartTime.SecondsWithMSPrecision());
  }

  if(m_compilationEndTimeHasBeenSet)
  {
   payload.WithDouble("CompilationEndTime", m_compilationEndTime.SecondsWithMSPrecision());
  }

  if(m_compilationTargetDeviceHasBeenSet)
  {
   payload.WithString("CompilationTargetDevice", TargetDeviceMapper::GetNameForTargetDevice(m_compilationTargetDevice));
  }

  if(m_compilationTargetPlatformOsHasBeenSet)
  {
   payload.WithString("CompilationTargetPlatformOs", TargetPlatformOsMapper::GetNameForTargetPlatformOs(m_compilationTargetPlatformOs));
  }

  if(m_compilationTargetPlatformArchHasBeenSet)
  {
   payload.WithString("CompilationTargetPlatformArch", TargetPlatformArchMapper::GetNameForTargetPlatformArch(m_compilationTargetPlatformArch));
  }

  if(m_compilationTargetPlatformAcceleratorHasBeenSet)
  {
   payload.WithString("CompilationTargetPlatformAccelerator", TargetPlatformAcceleratorMapper::GetNameForTargetPlatformAccelerator(m_compilationTargetPlatformAccelerator));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_compilationJobStatusHasBeenSet)
  {
   payload.WithString("CompilationJobStatus", CompilationJobStatusMapper::GetNameForCompilationJobStatus(m_compilationJobStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
