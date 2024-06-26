﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionReview.h>
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

ActionReview::ActionReview() : 
    m_pluginIdHasBeenSet(false),
    m_pluginType(PluginType::NOT_SET),
    m_pluginTypeHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_payloadFieldNameSeparatorHasBeenSet(false)
{
}

ActionReview::ActionReview(JsonView jsonValue)
  : ActionReview()
{
  *this = jsonValue;
}

ActionReview& ActionReview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");

    m_pluginIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pluginType"))
  {
    m_pluginType = PluginTypeMapper::GetPluginTypeForName(jsonValue.GetString("pluginType"));

    m_pluginTypeHasBeenSet = true;
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

JsonValue ActionReview::Jsonize() const
{
  JsonValue payload;

  if(m_pluginIdHasBeenSet)
  {
   payload.WithString("pluginId", m_pluginId);

  }

  if(m_pluginTypeHasBeenSet)
  {
   payload.WithString("pluginType", PluginTypeMapper::GetNameForPluginType(m_pluginType));
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
