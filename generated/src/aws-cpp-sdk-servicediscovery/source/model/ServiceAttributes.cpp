/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/ServiceAttributes.h>
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

ServiceAttributes::ServiceAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceAttributes& ServiceAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceArn"))
  {
    m_serviceArn = jsonValue.GetString("ServiceArn");
    m_serviceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceOwner"))
  {
    m_resourceOwner = jsonValue.GetString("ResourceOwner");
    m_resourceOwnerHasBeenSet = true;
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

JsonValue ServiceAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_resourceOwnerHasBeenSet)
  {
   payload.WithString("ResourceOwner", m_resourceOwner);

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
