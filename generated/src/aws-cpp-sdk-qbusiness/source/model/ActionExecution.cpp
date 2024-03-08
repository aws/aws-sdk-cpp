/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionExecution.h>
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

ActionExecution::ActionExecution() : 
    m_payloadHasBeenSet(false),
    m_payloadFieldNameSeparatorHasBeenSet(false),
    m_pluginIdHasBeenSet(false)
{
}

ActionExecution::ActionExecution(JsonView jsonValue) : 
    m_payloadHasBeenSet(false),
    m_payloadFieldNameSeparatorHasBeenSet(false),
    m_pluginIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecution& ActionExecution::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");

    m_pluginIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecution::Jsonize() const
{
  JsonValue payload;

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

  if(m_pluginIdHasBeenSet)
  {
   payload.WithString("pluginId", m_pluginId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
