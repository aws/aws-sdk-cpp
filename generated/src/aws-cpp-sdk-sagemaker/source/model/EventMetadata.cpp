/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EventMetadata.h>
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

EventMetadata::EventMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

EventMetadata& EventMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cluster"))
  {
    m_cluster = jsonValue.GetObject("Cluster");
    m_clusterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceGroup"))
  {
    m_instanceGroup = jsonValue.GetObject("InstanceGroup");
    m_instanceGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceGroupScaling"))
  {
    m_instanceGroupScaling = jsonValue.GetObject("InstanceGroupScaling");
    m_instanceGroupScalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Instance"))
  {
    m_instance = jsonValue.GetObject("Instance");
    m_instanceHasBeenSet = true;
  }
  return *this;
}

JsonValue EventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithObject("Cluster", m_cluster.Jsonize());

  }

  if(m_instanceGroupHasBeenSet)
  {
   payload.WithObject("InstanceGroup", m_instanceGroup.Jsonize());

  }

  if(m_instanceGroupScalingHasBeenSet)
  {
   payload.WithObject("InstanceGroupScaling", m_instanceGroupScaling.Jsonize());

  }

  if(m_instanceHasBeenSet)
  {
   payload.WithObject("Instance", m_instance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
