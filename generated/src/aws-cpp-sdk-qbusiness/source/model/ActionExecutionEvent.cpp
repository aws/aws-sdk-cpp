﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionExecutionEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ActionExecutionEvent::ActionExecutionEvent() : 
    m_pluginIdHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_payloadFieldNameSeparatorHasBeenSet(false)
{
}

ActionExecutionEvent::ActionExecutionEvent(JsonView jsonValue)
  : ActionExecutionEvent()
{
  *this = jsonValue;
}

ActionExecutionEvent& ActionExecutionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");

    m_pluginIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    Aws::Map<Aws::String, JsonView> payloadJsonMap = jsonValue.GetObject("payload").GetAllObjects();
    for(auto& payloadItem : payloadJsonMap)
    {
      m_payload[payloadItem.first] = payloadItem.second.AsObject();
    }
    m_payloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payloadFieldNameSeparator"))
  {
    m_payloadFieldNameSeparator = jsonValue.GetString("payloadFieldNameSeparator");

    m_payloadFieldNameSeparatorHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecutionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_pluginIdHasBeenSet)
  {
   payload.WithString("pluginId", m_pluginId);

  }

  if(m_payloadHasBeenSet)
  {
   JsonValue payloadJsonMap;
   for(auto& payloadItem : m_payload)
   {
     payloadJsonMap.WithObject(payloadItem.first, payloadItem.second.Jsonize());
   }
   payload.WithObject("payload", std::move(payloadJsonMap));

  }

  if(m_payloadFieldNameSeparatorHasBeenSet)
  {
   payload.WithString("payloadFieldNameSeparator", m_payloadFieldNameSeparator);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
