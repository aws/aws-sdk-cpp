/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateCustomLogSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomLogSourceRequest::CreateCustomLogSourceRequest() : 
    m_configurationHasBeenSet(false),
    m_eventClassesHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
}

Aws::String CreateCustomLogSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_eventClassesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventClassesJsonList(m_eventClasses.size());
   for(unsigned eventClassesIndex = 0; eventClassesIndex < eventClassesJsonList.GetLength(); ++eventClassesIndex)
   {
     eventClassesJsonList[eventClassesIndex].AsString(m_eventClasses[eventClassesIndex]);
   }
   payload.WithArray("eventClasses", std::move(eventClassesJsonList));

  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", m_sourceName);

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  return payload.View().WriteReadable();
}




