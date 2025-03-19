/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/UpdateAppMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAppMonitorRequest::SerializePayload() const
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

  if(m_deobfuscationConfigurationHasBeenSet)
  {
   payload.WithObject("DeobfuscationConfiguration", m_deobfuscationConfiguration.Jsonize());

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_domainListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainListJsonList(m_domainList.size());
   for(unsigned domainListIndex = 0; domainListIndex < domainListJsonList.GetLength(); ++domainListIndex)
   {
     domainListJsonList[domainListIndex].AsString(m_domainList[domainListIndex]);
   }
   payload.WithArray("DomainList", std::move(domainListJsonList));

  }

  return payload.View().WriteReadable();
}




