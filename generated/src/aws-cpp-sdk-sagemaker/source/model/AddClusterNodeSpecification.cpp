/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AddClusterNodeSpecification.h>
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

AddClusterNodeSpecification::AddClusterNodeSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

AddClusterNodeSpecification& AddClusterNodeSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceGroupName"))
  {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncrementTargetCountBy"))
  {
    m_incrementTargetCountBy = jsonValue.GetInteger("IncrementTargetCountBy");
    m_incrementTargetCountByHasBeenSet = true;
  }
  return *this;
}

JsonValue AddClusterNodeSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_instanceGroupNameHasBeenSet)
  {
   payload.WithString("InstanceGroupName", m_instanceGroupName);

  }

  if(m_incrementTargetCountByHasBeenSet)
  {
   payload.WithInteger("IncrementTargetCountBy", m_incrementTargetCountBy);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
