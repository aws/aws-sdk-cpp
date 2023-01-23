/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/SyncState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

SyncState::SyncState() : 
    m_attachmentHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

SyncState::SyncState(JsonView jsonValue) : 
    m_attachmentHasBeenSet(false),
    m_configHasBeenSet(false)
{
  *this = jsonValue;
}

SyncState& SyncState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

    m_attachmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Config"))
  {
    Aws::Map<Aws::String, JsonView> configJsonMap = jsonValue.GetObject("Config").GetAllObjects();
    for(auto& configItem : configJsonMap)
    {
      m_config[configItem.first] = configItem.second.AsObject();
    }
    m_configHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncState::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_configHasBeenSet)
  {
   JsonValue configJsonMap;
   for(auto& configItem : m_config)
   {
     configJsonMap.WithObject(configItem.first, configItem.second.Jsonize());
   }
   payload.WithObject("Config", std::move(configJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
