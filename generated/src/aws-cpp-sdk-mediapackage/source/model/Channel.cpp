/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/Channel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

Channel::Channel() : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_egressAccessLogsHasBeenSet(false),
    m_hlsIngestHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ingressAccessLogsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Channel::Channel(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_egressAccessLogsHasBeenSet(false),
    m_hlsIngestHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ingressAccessLogsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Channel& Channel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("egressAccessLogs"))
  {
    m_egressAccessLogs = jsonValue.GetObject("egressAccessLogs");

    m_egressAccessLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsIngest"))
  {
    m_hlsIngest = jsonValue.GetObject("hlsIngest");

    m_hlsIngestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingressAccessLogs"))
  {
    m_ingressAccessLogs = jsonValue.GetObject("ingressAccessLogs");

    m_ingressAccessLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_egressAccessLogsHasBeenSet)
  {
   payload.WithObject("egressAccessLogs", m_egressAccessLogs.Jsonize());

  }

  if(m_hlsIngestHasBeenSet)
  {
   payload.WithObject("hlsIngest", m_hlsIngest.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_ingressAccessLogsHasBeenSet)
  {
   payload.WithObject("ingressAccessLogs", m_ingressAccessLogs.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
