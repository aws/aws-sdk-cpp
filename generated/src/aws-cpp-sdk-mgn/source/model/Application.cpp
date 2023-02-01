/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/Application.h>
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

Application::Application() : 
    m_applicationAggregatedStatusHasBeenSet(false),
    m_applicationIDHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_lastModifiedDateTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_waveIDHasBeenSet(false)
{
}

Application::Application(JsonView jsonValue) : 
    m_applicationAggregatedStatusHasBeenSet(false),
    m_applicationIDHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_lastModifiedDateTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_waveIDHasBeenSet(false)
{
  *this = jsonValue;
}

Application& Application::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationAggregatedStatus"))
  {
    m_applicationAggregatedStatus = jsonValue.GetObject("applicationAggregatedStatus");

    m_applicationAggregatedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationID"))
  {
    m_applicationID = jsonValue.GetString("applicationID");

    m_applicationIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetString("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isArchived"))
  {
    m_isArchived = jsonValue.GetBool("isArchived");

    m_isArchivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDateTime"))
  {
    m_lastModifiedDateTime = jsonValue.GetString("lastModifiedDateTime");

    m_lastModifiedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("waveID"))
  {
    m_waveID = jsonValue.GetString("waveID");

    m_waveIDHasBeenSet = true;
  }

  return *this;
}

JsonValue Application::Jsonize() const
{
  JsonValue payload;

  if(m_applicationAggregatedStatusHasBeenSet)
  {
   payload.WithObject("applicationAggregatedStatus", m_applicationAggregatedStatus.Jsonize());

  }

  if(m_applicationIDHasBeenSet)
  {
   payload.WithString("applicationID", m_applicationID);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithString("creationDateTime", m_creationDateTime);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_isArchivedHasBeenSet)
  {
   payload.WithBool("isArchived", m_isArchived);

  }

  if(m_lastModifiedDateTimeHasBeenSet)
  {
   payload.WithString("lastModifiedDateTime", m_lastModifiedDateTime);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_waveIDHasBeenSet)
  {
   payload.WithString("waveID", m_waveID);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
