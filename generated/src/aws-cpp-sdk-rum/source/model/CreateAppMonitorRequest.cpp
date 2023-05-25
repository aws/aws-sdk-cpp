/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/CreateAppMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppMonitorRequest::CreateAppMonitorRequest() : 
    m_appMonitorConfigurationHasBeenSet(false),
    m_customEventsHasBeenSet(false),
    m_cwLogEnabled(false),
    m_cwLogEnabledHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAppMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appMonitorConfigurationHasBeenSet)
  {
   payload.WithObject("AppMonitorConfiguration", m_appMonitorConfiguration.Jsonize());

  }

  if(m_customEventsHasBeenSet)
  {
   payload.WithObject("CustomEvents", m_customEvents.Jsonize());

  }

  if(m_cwLogEnabledHasBeenSet)
  {
   payload.WithBool("CwLogEnabled", m_cwLogEnabled);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




