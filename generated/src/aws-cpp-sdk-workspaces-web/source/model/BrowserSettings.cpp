/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/BrowserSettings.h>
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

BrowserSettings::BrowserSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

BrowserSettings& BrowserSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("browserSettingsArn"))
  {
    m_browserSettingsArn = jsonValue.GetString("browserSettingsArn");
    m_browserSettingsArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("browserPolicy"))
  {
    m_browserPolicy = jsonValue.GetString("browserPolicy");
    m_browserPolicyHasBeenSet = true;
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

JsonValue BrowserSettings::Jsonize() const
{
  JsonValue payload;

  if(m_browserSettingsArnHasBeenSet)
  {
   payload.WithString("browserSettingsArn", m_browserSettingsArn);

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

  if(m_browserPolicyHasBeenSet)
  {
   payload.WithString("browserPolicy", m_browserPolicy);

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
