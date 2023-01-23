/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NetworkPathComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

NetworkPathComponent::NetworkPathComponent() : 
    m_componentIdHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_egressHasBeenSet(false),
    m_ingressHasBeenSet(false)
{
}

NetworkPathComponent::NetworkPathComponent(JsonView jsonValue) : 
    m_componentIdHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_egressHasBeenSet(false),
    m_ingressHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkPathComponent& NetworkPathComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComponentId"))
  {
    m_componentId = jsonValue.GetString("ComponentId");

    m_componentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentType"))
  {
    m_componentType = jsonValue.GetString("ComponentType");

    m_componentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Egress"))
  {
    m_egress = jsonValue.GetObject("Egress");

    m_egressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ingress"))
  {
    m_ingress = jsonValue.GetObject("Ingress");

    m_ingressHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkPathComponent::Jsonize() const
{
  JsonValue payload;

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("ComponentId", m_componentId);

  }

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("ComponentType", m_componentType);

  }

  if(m_egressHasBeenSet)
  {
   payload.WithObject("Egress", m_egress.Jsonize());

  }

  if(m_ingressHasBeenSet)
  {
   payload.WithObject("Ingress", m_ingress.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
