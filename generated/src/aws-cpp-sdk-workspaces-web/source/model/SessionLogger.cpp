/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/SessionLogger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

SessionLogger::SessionLogger(JsonView jsonValue)
{
  *this = jsonValue;
}

SessionLogger& SessionLogger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionLoggerArn"))
  {
    m_sessionLoggerArn = jsonValue.GetString("sessionLoggerArn");
    m_sessionLoggerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventFilter"))
  {
    m_eventFilter = jsonValue.GetObject("eventFilter");
    m_eventFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerManagedKey"))
  {
    m_customerManagedKey = jsonValue.GetString("customerManagedKey");
    m_customerManagedKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalEncryptionContext"))
  {
    Aws::Map<Aws::String, JsonView> additionalEncryptionContextJsonMap = jsonValue.GetObject("additionalEncryptionContext").GetAllObjects();
    for(auto& additionalEncryptionContextItem : additionalEncryptionContextJsonMap)
    {
      m_additionalEncryptionContext[additionalEncryptionContextItem.first] = additionalEncryptionContextItem.second.AsString();
    }
    m_additionalEncryptionContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associatedPortalArns"))
  {
    Aws::Utils::Array<JsonView> associatedPortalArnsJsonList = jsonValue.GetArray("associatedPortalArns");
    for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
    {
      m_associatedPortalArns.push_back(associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString());
    }
    m_associatedPortalArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionLogger::Jsonize() const
{
  JsonValue payload;

  if(m_sessionLoggerArnHasBeenSet)
  {
   payload.WithString("sessionLoggerArn", m_sessionLoggerArn);

  }

  if(m_eventFilterHasBeenSet)
  {
   payload.WithObject("eventFilter", m_eventFilter.Jsonize());

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_customerManagedKeyHasBeenSet)
  {
   payload.WithString("customerManagedKey", m_customerManagedKey);

  }

  if(m_additionalEncryptionContextHasBeenSet)
  {
   JsonValue additionalEncryptionContextJsonMap;
   for(auto& additionalEncryptionContextItem : m_additionalEncryptionContext)
   {
     additionalEncryptionContextJsonMap.WithString(additionalEncryptionContextItem.first, additionalEncryptionContextItem.second);
   }
   payload.WithObject("additionalEncryptionContext", std::move(additionalEncryptionContextJsonMap));

  }

  if(m_associatedPortalArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedPortalArnsJsonList(m_associatedPortalArns.size());
   for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
   {
     associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString(m_associatedPortalArns[associatedPortalArnsIndex]);
   }
   payload.WithArray("associatedPortalArns", std::move(associatedPortalArnsJsonList));

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
