/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/MessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

MessageRequest::MessageRequest() : 
    m_addressesHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
}

MessageRequest::MessageRequest(JsonView jsonValue) : 
    m_addressesHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
  *this = jsonValue;
}

MessageRequest& MessageRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Addresses"))
  {
    Aws::Map<Aws::String, JsonView> addressesJsonMap = jsonValue.GetObject("Addresses").GetAllObjects();
    for(auto& addressesItem : addressesJsonMap)
    {
      m_addresses[addressesItem.first] = addressesItem.second.AsObject();
    }
    m_addressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Context"))
  {
    Aws::Map<Aws::String, JsonView> contextJsonMap = jsonValue.GetObject("Context").GetAllObjects();
    for(auto& contextItem : contextJsonMap)
    {
      m_context[contextItem.first] = contextItem.second.AsString();
    }
    m_contextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Map<Aws::String, JsonView> endpointsJsonMap = jsonValue.GetObject("Endpoints").GetAllObjects();
    for(auto& endpointsItem : endpointsJsonMap)
    {
      m_endpoints[endpointsItem.first] = endpointsItem.second.AsObject();
    }
    m_endpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageConfiguration"))
  {
    m_messageConfiguration = jsonValue.GetObject("MessageConfiguration");

    m_messageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateConfiguration"))
  {
    m_templateConfiguration = jsonValue.GetObject("TemplateConfiguration");

    m_templateConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TraceId"))
  {
    m_traceId = jsonValue.GetString("TraceId");

    m_traceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageRequest::Jsonize() const
{
  JsonValue payload;

  if(m_addressesHasBeenSet)
  {
   JsonValue addressesJsonMap;
   for(auto& addressesItem : m_addresses)
   {
     addressesJsonMap.WithObject(addressesItem.first, addressesItem.second.Jsonize());
   }
   payload.WithObject("Addresses", std::move(addressesJsonMap));

  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("Context", std::move(contextJsonMap));

  }

  if(m_endpointsHasBeenSet)
  {
   JsonValue endpointsJsonMap;
   for(auto& endpointsItem : m_endpoints)
   {
     endpointsJsonMap.WithObject(endpointsItem.first, endpointsItem.second.Jsonize());
   }
   payload.WithObject("Endpoints", std::move(endpointsJsonMap));

  }

  if(m_messageConfigurationHasBeenSet)
  {
   payload.WithObject("MessageConfiguration", m_messageConfiguration.Jsonize());

  }

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("TemplateConfiguration", m_templateConfiguration.Jsonize());

  }

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("TraceId", m_traceId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
