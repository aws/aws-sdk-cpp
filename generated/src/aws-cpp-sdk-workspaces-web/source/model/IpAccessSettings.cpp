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

IpAccessSettings::IpAccessSettings() : 
    m_associatedPortalArnsHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_ipAccessSettingsArnHasBeenSet(false),
    m_ipRulesHasBeenSet(false)
{
}

IpAccessSettings::IpAccessSettings(JsonView jsonValue) : 
    m_associatedPortalArnsHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_ipAccessSettingsArnHasBeenSet(false),
    m_ipRulesHasBeenSet(false)
{
  *this = jsonValue;
}

IpAccessSettings& IpAccessSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associatedPortalArns"))
  {
    Aws::Utils::Array<JsonView> associatedPortalArnsJsonList = jsonValue.GetArray("associatedPortalArns");
    for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
    {
      m_associatedPortalArns.push_back(associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString());
    }
    m_associatedPortalArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAccessSettingsArn"))
  {
    m_ipAccessSettingsArn = jsonValue.GetString("ipAccessSettingsArn");

    m_ipAccessSettingsArnHasBeenSet = true;
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

  return *this;
}

JsonValue IpAccessSettings::Jsonize() const
{
  JsonValue payload;

  if(m_associatedPortalArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedPortalArnsJsonList(m_associatedPortalArns.size());
   for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
   {
     associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString(m_associatedPortalArns[associatedPortalArnsIndex]);
   }
   payload.WithArray("associatedPortalArns", std::move(associatedPortalArnsJsonList));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_ipAccessSettingsArnHasBeenSet)
  {
   payload.WithString("ipAccessSettingsArn", m_ipAccessSettingsArn);

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

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
