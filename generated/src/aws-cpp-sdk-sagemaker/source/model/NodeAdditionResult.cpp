/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NodeAdditionResult.h>
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

NodeAdditionResult::NodeAdditionResult(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeAdditionResult& NodeAdditionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NodeLogicalId"))
  {
    m_nodeLogicalId = jsonValue.GetString("NodeLogicalId");
    m_nodeLogicalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceGroupName"))
  {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ClusterInstanceStatusMapper::GetClusterInstanceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeAdditionResult::Jsonize() const
{
  JsonValue payload;

  if(m_nodeLogicalIdHasBeenSet)
  {
   payload.WithString("NodeLogicalId", m_nodeLogicalId);

  }

  if(m_instanceGroupNameHasBeenSet)
  {
   payload.WithString("InstanceGroupName", m_instanceGroupName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ClusterInstanceStatusMapper::GetNameForClusterInstanceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
