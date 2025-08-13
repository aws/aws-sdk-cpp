/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ComputeQuotaResourceConfig.h>
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

ComputeQuotaResourceConfig::ComputeQuotaResourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeQuotaResourceConfig& ComputeQuotaResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ClusterInstanceTypeMapper::GetClusterInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Accelerators"))
  {
    m_accelerators = jsonValue.GetInteger("Accelerators");
    m_acceleratorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VCpu"))
  {
    m_vCpu = jsonValue.GetDouble("VCpu");
    m_vCpuHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MemoryInGiB"))
  {
    m_memoryInGiB = jsonValue.GetDouble("MemoryInGiB");
    m_memoryInGiBHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeQuotaResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_instanceType));
  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_acceleratorsHasBeenSet)
  {
   payload.WithInteger("Accelerators", m_accelerators);

  }

  if(m_vCpuHasBeenSet)
  {
   payload.WithDouble("VCpu", m_vCpu);

  }

  if(m_memoryInGiBHasBeenSet)
  {
   payload.WithDouble("MemoryInGiB", m_memoryInGiB);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
