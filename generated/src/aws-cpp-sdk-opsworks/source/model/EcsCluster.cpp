/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/EcsCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

EcsCluster::EcsCluster() : 
    m_ecsClusterArnHasBeenSet(false),
    m_ecsClusterNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_registeredAtHasBeenSet(false)
{
}

EcsCluster::EcsCluster(JsonView jsonValue) : 
    m_ecsClusterArnHasBeenSet(false),
    m_ecsClusterNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_registeredAtHasBeenSet(false)
{
  *this = jsonValue;
}

EcsCluster& EcsCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EcsClusterArn"))
  {
    m_ecsClusterArn = jsonValue.GetString("EcsClusterArn");

    m_ecsClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EcsClusterName"))
  {
    m_ecsClusterName = jsonValue.GetString("EcsClusterName");

    m_ecsClusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisteredAt"))
  {
    m_registeredAt = jsonValue.GetString("RegisteredAt");

    m_registeredAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsCluster::Jsonize() const
{
  JsonValue payload;

  if(m_ecsClusterArnHasBeenSet)
  {
   payload.WithString("EcsClusterArn", m_ecsClusterArn);

  }

  if(m_ecsClusterNameHasBeenSet)
  {
   payload.WithString("EcsClusterName", m_ecsClusterName);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_registeredAtHasBeenSet)
  {
   payload.WithString("RegisteredAt", m_registeredAt);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
