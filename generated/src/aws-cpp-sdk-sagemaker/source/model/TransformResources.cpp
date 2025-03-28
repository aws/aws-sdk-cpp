/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformResources.h>
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

TransformResources::TransformResources(JsonView jsonValue)
{
  *this = jsonValue;
}

TransformResources& TransformResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = TransformInstanceTypeMapper::GetTransformInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeKmsKeyId"))
  {
    m_volumeKmsKeyId = jsonValue.GetString("VolumeKmsKeyId");
    m_volumeKmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformAmiVersion"))
  {
    m_transformAmiVersion = jsonValue.GetString("TransformAmiVersion");
    m_transformAmiVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformResources::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", TransformInstanceTypeMapper::GetNameForTransformInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  if(m_transformAmiVersionHasBeenSet)
  {
   payload.WithString("TransformAmiVersion", m_transformAmiVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
