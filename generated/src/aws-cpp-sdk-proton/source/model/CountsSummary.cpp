/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CountsSummary.h>
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

CountsSummary::CountsSummary() : 
    m_componentsHasBeenSet(false),
    m_environmentTemplatesHasBeenSet(false),
    m_environmentsHasBeenSet(false),
    m_pipelinesHasBeenSet(false),
    m_serviceInstancesHasBeenSet(false),
    m_serviceTemplatesHasBeenSet(false),
    m_servicesHasBeenSet(false)
{
}

CountsSummary::CountsSummary(JsonView jsonValue) : 
    m_componentsHasBeenSet(false),
    m_environmentTemplatesHasBeenSet(false),
    m_environmentsHasBeenSet(false),
    m_pipelinesHasBeenSet(false),
    m_serviceInstancesHasBeenSet(false),
    m_serviceTemplatesHasBeenSet(false),
    m_servicesHasBeenSet(false)
{
  *this = jsonValue;
}

CountsSummary& CountsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("components"))
  {
    m_components = jsonValue.GetObject("components");

    m_componentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentTemplates"))
  {
    m_environmentTemplates = jsonValue.GetObject("environmentTemplates");

    m_environmentTemplatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environments"))
  {
    m_environments = jsonValue.GetObject("environments");

    m_environmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelines"))
  {
    m_pipelines = jsonValue.GetObject("pipelines");

    m_pipelinesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceInstances"))
  {
    m_serviceInstances = jsonValue.GetObject("serviceInstances");

    m_serviceInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceTemplates"))
  {
    m_serviceTemplates = jsonValue.GetObject("serviceTemplates");

    m_serviceTemplatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("services"))
  {
    m_services = jsonValue.GetObject("services");

    m_servicesHasBeenSet = true;
  }

  return *this;
}

JsonValue CountsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_componentsHasBeenSet)
  {
   payload.WithObject("components", m_components.Jsonize());

  }

  if(m_environmentTemplatesHasBeenSet)
  {
   payload.WithObject("environmentTemplates", m_environmentTemplates.Jsonize());

  }

  if(m_environmentsHasBeenSet)
  {
   payload.WithObject("environments", m_environments.Jsonize());

  }

  if(m_pipelinesHasBeenSet)
  {
   payload.WithObject("pipelines", m_pipelines.Jsonize());

  }

  if(m_serviceInstancesHasBeenSet)
  {
   payload.WithObject("serviceInstances", m_serviceInstances.Jsonize());

  }

  if(m_serviceTemplatesHasBeenSet)
  {
   payload.WithObject("serviceTemplates", m_serviceTemplates.Jsonize());

  }

  if(m_servicesHasBeenSet)
  {
   payload.WithObject("services", m_services.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
