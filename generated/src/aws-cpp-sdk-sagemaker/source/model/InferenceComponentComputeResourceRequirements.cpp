/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentComputeResourceRequirements.h>
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

InferenceComponentComputeResourceRequirements::InferenceComponentComputeResourceRequirements() : 
    m_numberOfCpuCoresRequired(0.0),
    m_numberOfCpuCoresRequiredHasBeenSet(false),
    m_numberOfAcceleratorDevicesRequired(0.0),
    m_numberOfAcceleratorDevicesRequiredHasBeenSet(false),
    m_minMemoryRequiredInMb(0),
    m_minMemoryRequiredInMbHasBeenSet(false),
    m_maxMemoryRequiredInMb(0),
    m_maxMemoryRequiredInMbHasBeenSet(false)
{
}

InferenceComponentComputeResourceRequirements::InferenceComponentComputeResourceRequirements(JsonView jsonValue) : 
    m_numberOfCpuCoresRequired(0.0),
    m_numberOfCpuCoresRequiredHasBeenSet(false),
    m_numberOfAcceleratorDevicesRequired(0.0),
    m_numberOfAcceleratorDevicesRequiredHasBeenSet(false),
    m_minMemoryRequiredInMb(0),
    m_minMemoryRequiredInMbHasBeenSet(false),
    m_maxMemoryRequiredInMb(0),
    m_maxMemoryRequiredInMbHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceComponentComputeResourceRequirements& InferenceComponentComputeResourceRequirements::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfCpuCoresRequired"))
  {
    m_numberOfCpuCoresRequired = jsonValue.GetDouble("NumberOfCpuCoresRequired");

    m_numberOfCpuCoresRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfAcceleratorDevicesRequired"))
  {
    m_numberOfAcceleratorDevicesRequired = jsonValue.GetDouble("NumberOfAcceleratorDevicesRequired");

    m_numberOfAcceleratorDevicesRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinMemoryRequiredInMb"))
  {
    m_minMemoryRequiredInMb = jsonValue.GetInteger("MinMemoryRequiredInMb");

    m_minMemoryRequiredInMbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxMemoryRequiredInMb"))
  {
    m_maxMemoryRequiredInMb = jsonValue.GetInteger("MaxMemoryRequiredInMb");

    m_maxMemoryRequiredInMbHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceComponentComputeResourceRequirements::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfCpuCoresRequiredHasBeenSet)
  {
   payload.WithDouble("NumberOfCpuCoresRequired", m_numberOfCpuCoresRequired);

  }

  if(m_numberOfAcceleratorDevicesRequiredHasBeenSet)
  {
   payload.WithDouble("NumberOfAcceleratorDevicesRequired", m_numberOfAcceleratorDevicesRequired);

  }

  if(m_minMemoryRequiredInMbHasBeenSet)
  {
   payload.WithInteger("MinMemoryRequiredInMb", m_minMemoryRequiredInMb);

  }

  if(m_maxMemoryRequiredInMbHasBeenSet)
  {
   payload.WithInteger("MaxMemoryRequiredInMb", m_maxMemoryRequiredInMb);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
