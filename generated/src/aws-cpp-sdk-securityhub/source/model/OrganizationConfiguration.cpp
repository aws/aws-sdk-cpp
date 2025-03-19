/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OrganizationConfiguration.h>
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

OrganizationConfiguration::OrganizationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OrganizationConfiguration& OrganizationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationType"))
  {
    m_configurationType = OrganizationConfigurationConfigurationTypeMapper::GetOrganizationConfigurationConfigurationTypeForName(jsonValue.GetString("ConfigurationType"));
    m_configurationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrganizationConfigurationStatusMapper::GetOrganizationConfigurationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationTypeHasBeenSet)
  {
   payload.WithString("ConfigurationType", OrganizationConfigurationConfigurationTypeMapper::GetNameForOrganizationConfigurationConfigurationType(m_configurationType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrganizationConfigurationStatusMapper::GetNameForOrganizationConfigurationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
