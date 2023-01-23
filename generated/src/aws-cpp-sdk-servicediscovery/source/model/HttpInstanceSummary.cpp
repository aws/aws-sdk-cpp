/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/HttpInstanceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

HttpInstanceSummary::HttpInstanceSummary() : 
    m_instanceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_healthStatus(HealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

HttpInstanceSummary::HttpInstanceSummary(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_healthStatus(HealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

HttpInstanceSummary& HttpInstanceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NamespaceName"))
  {
    m_namespaceName = jsonValue.GetString("NamespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthStatus"))
  {
    m_healthStatus = HealthStatusMapper::GetHealthStatusForName(jsonValue.GetString("HealthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpInstanceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("NamespaceName", m_namespaceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("HealthStatus", HealthStatusMapper::GetNameForHealthStatus(m_healthStatus));
  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
