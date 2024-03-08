/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SecurityControlsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

SecurityControlsConfiguration::SecurityControlsConfiguration() : 
    m_enabledSecurityControlIdentifiersHasBeenSet(false),
    m_disabledSecurityControlIdentifiersHasBeenSet(false),
    m_securityControlCustomParametersHasBeenSet(false)
{
}

SecurityControlsConfiguration::SecurityControlsConfiguration(JsonView jsonValue) : 
    m_enabledSecurityControlIdentifiersHasBeenSet(false),
    m_disabledSecurityControlIdentifiersHasBeenSet(false),
    m_securityControlCustomParametersHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityControlsConfiguration& SecurityControlsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnabledSecurityControlIdentifiers"))
  {
    Aws::Utils::Array<JsonView> enabledSecurityControlIdentifiersJsonList = jsonValue.GetArray("EnabledSecurityControlIdentifiers");
    for(unsigned enabledSecurityControlIdentifiersIndex = 0; enabledSecurityControlIdentifiersIndex < enabledSecurityControlIdentifiersJsonList.GetLength(); ++enabledSecurityControlIdentifiersIndex)
    {
      m_enabledSecurityControlIdentifiers.push_back(enabledSecurityControlIdentifiersJsonList[enabledSecurityControlIdentifiersIndex].AsString());
    }
    m_enabledSecurityControlIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisabledSecurityControlIdentifiers"))
  {
    Aws::Utils::Array<JsonView> disabledSecurityControlIdentifiersJsonList = jsonValue.GetArray("DisabledSecurityControlIdentifiers");
    for(unsigned disabledSecurityControlIdentifiersIndex = 0; disabledSecurityControlIdentifiersIndex < disabledSecurityControlIdentifiersJsonList.GetLength(); ++disabledSecurityControlIdentifiersIndex)
    {
      m_disabledSecurityControlIdentifiers.push_back(disabledSecurityControlIdentifiersJsonList[disabledSecurityControlIdentifiersIndex].AsString());
    }
    m_disabledSecurityControlIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityControlCustomParameters"))
  {
    Aws::Utils::Array<JsonView> securityControlCustomParametersJsonList = jsonValue.GetArray("SecurityControlCustomParameters");
    for(unsigned securityControlCustomParametersIndex = 0; securityControlCustomParametersIndex < securityControlCustomParametersJsonList.GetLength(); ++securityControlCustomParametersIndex)
    {
      m_securityControlCustomParameters.push_back(securityControlCustomParametersJsonList[securityControlCustomParametersIndex].AsObject());
    }
    m_securityControlCustomParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityControlsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledSecurityControlIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledSecurityControlIdentifiersJsonList(m_enabledSecurityControlIdentifiers.size());
   for(unsigned enabledSecurityControlIdentifiersIndex = 0; enabledSecurityControlIdentifiersIndex < enabledSecurityControlIdentifiersJsonList.GetLength(); ++enabledSecurityControlIdentifiersIndex)
   {
     enabledSecurityControlIdentifiersJsonList[enabledSecurityControlIdentifiersIndex].AsString(m_enabledSecurityControlIdentifiers[enabledSecurityControlIdentifiersIndex]);
   }
   payload.WithArray("EnabledSecurityControlIdentifiers", std::move(enabledSecurityControlIdentifiersJsonList));

  }

  if(m_disabledSecurityControlIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> disabledSecurityControlIdentifiersJsonList(m_disabledSecurityControlIdentifiers.size());
   for(unsigned disabledSecurityControlIdentifiersIndex = 0; disabledSecurityControlIdentifiersIndex < disabledSecurityControlIdentifiersJsonList.GetLength(); ++disabledSecurityControlIdentifiersIndex)
   {
     disabledSecurityControlIdentifiersJsonList[disabledSecurityControlIdentifiersIndex].AsString(m_disabledSecurityControlIdentifiers[disabledSecurityControlIdentifiersIndex]);
   }
   payload.WithArray("DisabledSecurityControlIdentifiers", std::move(disabledSecurityControlIdentifiersJsonList));

  }

  if(m_securityControlCustomParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityControlCustomParametersJsonList(m_securityControlCustomParameters.size());
   for(unsigned securityControlCustomParametersIndex = 0; securityControlCustomParametersIndex < securityControlCustomParametersJsonList.GetLength(); ++securityControlCustomParametersIndex)
   {
     securityControlCustomParametersJsonList[securityControlCustomParametersIndex].AsObject(m_securityControlCustomParameters[securityControlCustomParametersIndex].Jsonize());
   }
   payload.WithArray("SecurityControlCustomParameters", std::move(securityControlCustomParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
