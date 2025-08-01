/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/IpAccessSettings.h>
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

IpAccessSettings::IpAccessSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

IpAccessSettings& IpAccessSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAccessSettingsArn"))
  {
    m_ipAccessSettingsArn = jsonValue.GetString("ipAccessSettingsArn");
    m_ipAccessSettingsArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("ipRules"))
  {
    Aws::Utils::Array<JsonView> ipRulesJsonList = jsonValue.GetArray("ipRules");
    for(unsigned ipRulesIndex = 0; ipRulesIndex < ipRulesJsonList.GetLength(); ++ipRulesIndex)
    {
      m_ipRules.push_back(ipRulesJsonList[ipRulesIndex].AsObject());
    }
    m_ipRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
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
  return *this;
}

JsonValue IpAccessSettings::Jsonize() const
{
  JsonValue payload;

  if(m_ipAccessSettingsArnHasBeenSet)
  {
   payload.WithString("ipAccessSettingsArn", m_ipAccessSettingsArn);

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

  if(m_ipRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipRulesJsonList(m_ipRules.size());
   for(unsigned ipRulesIndex = 0; ipRulesIndex < ipRulesJsonList.GetLength(); ++ipRulesIndex)
   {
     ipRulesJsonList[ipRulesIndex].AsObject(m_ipRules[ipRulesIndex].Jsonize());
   }
   payload.WithArray("ipRules", std::move(ipRulesJsonList));

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
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

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
