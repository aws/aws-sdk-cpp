/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SecurityHubPolicy.h>
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

SecurityHubPolicy::SecurityHubPolicy() : 
    m_serviceEnabled(false),
    m_serviceEnabledHasBeenSet(false),
    m_enabledStandardIdentifiersHasBeenSet(false),
    m_securityControlsConfigurationHasBeenSet(false)
{
}

SecurityHubPolicy::SecurityHubPolicy(JsonView jsonValue) : 
    m_serviceEnabled(false),
    m_serviceEnabledHasBeenSet(false),
    m_enabledStandardIdentifiersHasBeenSet(false),
    m_securityControlsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityHubPolicy& SecurityHubPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceEnabled"))
  {
    m_serviceEnabled = jsonValue.GetBool("ServiceEnabled");

    m_serviceEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnabledStandardIdentifiers"))
  {
    Aws::Utils::Array<JsonView> enabledStandardIdentifiersJsonList = jsonValue.GetArray("EnabledStandardIdentifiers");
    for(unsigned enabledStandardIdentifiersIndex = 0; enabledStandardIdentifiersIndex < enabledStandardIdentifiersJsonList.GetLength(); ++enabledStandardIdentifiersIndex)
    {
      m_enabledStandardIdentifiers.push_back(enabledStandardIdentifiersJsonList[enabledStandardIdentifiersIndex].AsString());
    }
    m_enabledStandardIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityControlsConfiguration"))
  {
    m_securityControlsConfiguration = jsonValue.GetObject("SecurityControlsConfiguration");

    m_securityControlsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityHubPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_serviceEnabledHasBeenSet)
  {
   payload.WithBool("ServiceEnabled", m_serviceEnabled);

  }

  if(m_enabledStandardIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledStandardIdentifiersJsonList(m_enabledStandardIdentifiers.size());
   for(unsigned enabledStandardIdentifiersIndex = 0; enabledStandardIdentifiersIndex < enabledStandardIdentifiersJsonList.GetLength(); ++enabledStandardIdentifiersIndex)
   {
     enabledStandardIdentifiersJsonList[enabledStandardIdentifiersIndex].AsString(m_enabledStandardIdentifiers[enabledStandardIdentifiersIndex]);
   }
   payload.WithArray("EnabledStandardIdentifiers", std::move(enabledStandardIdentifiersJsonList));

  }

  if(m_securityControlsConfigurationHasBeenSet)
  {
   payload.WithObject("SecurityControlsConfiguration", m_securityControlsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
