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

ComputeQuotaResourceConfig::ComputeQuotaResourceConfig() : 
    m_instanceType(ClusterInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

ComputeQuotaResourceConfig::ComputeQuotaResourceConfig(JsonView jsonValue)
  : ComputeQuotaResourceConfig()
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

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
