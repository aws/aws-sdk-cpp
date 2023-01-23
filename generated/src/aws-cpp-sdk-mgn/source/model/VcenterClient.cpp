/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/VcenterClient.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

VcenterClient::VcenterClient() : 
    m_arnHasBeenSet(false),
    m_datacenterNameHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_lastSeenDatetimeHasBeenSet(false),
    m_sourceServerTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vcenterClientIDHasBeenSet(false),
    m_vcenterUUIDHasBeenSet(false)
{
}

VcenterClient::VcenterClient(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_datacenterNameHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_lastSeenDatetimeHasBeenSet(false),
    m_sourceServerTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vcenterClientIDHasBeenSet(false),
    m_vcenterUUIDHasBeenSet(false)
{
  *this = jsonValue;
}

VcenterClient& VcenterClient::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datacenterName"))
  {
    m_datacenterName = jsonValue.GetString("datacenterName");

    m_datacenterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSeenDatetime"))
  {
    m_lastSeenDatetime = jsonValue.GetString("lastSeenDatetime");

    m_lastSeenDatetimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerTags"))
  {
    Aws::Map<Aws::String, JsonView> sourceServerTagsJsonMap = jsonValue.GetObject("sourceServerTags").GetAllObjects();
    for(auto& sourceServerTagsItem : sourceServerTagsJsonMap)
    {
      m_sourceServerTags[sourceServerTagsItem.first] = sourceServerTagsItem.second.AsString();
    }
    m_sourceServerTagsHasBeenSet = true;
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

  if(jsonValue.ValueExists("vcenterClientID"))
  {
    m_vcenterClientID = jsonValue.GetString("vcenterClientID");

    m_vcenterClientIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vcenterUUID"))
  {
    m_vcenterUUID = jsonValue.GetString("vcenterUUID");

    m_vcenterUUIDHasBeenSet = true;
  }

  return *this;
}

JsonValue VcenterClient::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_datacenterNameHasBeenSet)
  {
   payload.WithString("datacenterName", m_datacenterName);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_lastSeenDatetimeHasBeenSet)
  {
   payload.WithString("lastSeenDatetime", m_lastSeenDatetime);

  }

  if(m_sourceServerTagsHasBeenSet)
  {
   JsonValue sourceServerTagsJsonMap;
   for(auto& sourceServerTagsItem : m_sourceServerTags)
   {
     sourceServerTagsJsonMap.WithString(sourceServerTagsItem.first, sourceServerTagsItem.second);
   }
   payload.WithObject("sourceServerTags", std::move(sourceServerTagsJsonMap));

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

  if(m_vcenterClientIDHasBeenSet)
  {
   payload.WithString("vcenterClientID", m_vcenterClientID);

  }

  if(m_vcenterUUIDHasBeenSet)
  {
   payload.WithString("vcenterUUID", m_vcenterUUID);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
