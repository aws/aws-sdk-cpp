/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/DeploymentState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

DeploymentState::DeploymentState() : 
    m_componentHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_serviceInstanceHasBeenSet(false),
    m_servicePipelineHasBeenSet(false)
{
}

DeploymentState::DeploymentState(JsonView jsonValue) : 
    m_componentHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_serviceInstanceHasBeenSet(false),
    m_servicePipelineHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentState& DeploymentState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("component"))
  {
    m_component = jsonValue.GetObject("component");

    m_componentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    m_environment = jsonValue.GetObject("environment");

    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceInstance"))
  {
    m_serviceInstance = jsonValue.GetObject("serviceInstance");

    m_serviceInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("servicePipeline"))
  {
    m_servicePipeline = jsonValue.GetObject("servicePipeline");

    m_servicePipelineHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentState::Jsonize() const
{
  JsonValue payload;

  if(m_componentHasBeenSet)
  {
   payload.WithObject("component", m_component.Jsonize());

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("environment", m_environment.Jsonize());

  }

  if(m_serviceInstanceHasBeenSet)
  {
   payload.WithObject("serviceInstance", m_serviceInstance.Jsonize());

  }

  if(m_servicePipelineHasBeenSet)
  {
   payload.WithObject("servicePipeline", m_servicePipeline.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
