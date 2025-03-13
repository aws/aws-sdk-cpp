/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

PackageConfiguration::PackageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageConfiguration& PackageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LicenseRequirement"))
  {
    m_licenseRequirement = RequirementLevelMapper::GetRequirementLevelForName(jsonValue.GetString("LicenseRequirement"));
    m_licenseRequirementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LicenseFilepath"))
  {
    m_licenseFilepath = jsonValue.GetString("LicenseFilepath");
    m_licenseFilepathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationRequirement"))
  {
    m_configurationRequirement = RequirementLevelMapper::GetRequirementLevelForName(jsonValue.GetString("ConfigurationRequirement"));
    m_configurationRequirementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequiresRestartForConfigurationUpdate"))
  {
    m_requiresRestartForConfigurationUpdate = jsonValue.GetBool("RequiresRestartForConfigurationUpdate");
    m_requiresRestartForConfigurationUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_licenseRequirementHasBeenSet)
  {
   payload.WithString("LicenseRequirement", RequirementLevelMapper::GetNameForRequirementLevel(m_licenseRequirement));
  }

  if(m_licenseFilepathHasBeenSet)
  {
   payload.WithString("LicenseFilepath", m_licenseFilepath);

  }

  if(m_configurationRequirementHasBeenSet)
  {
   payload.WithString("ConfigurationRequirement", RequirementLevelMapper::GetNameForRequirementLevel(m_configurationRequirement));
  }

  if(m_requiresRestartForConfigurationUpdateHasBeenSet)
  {
   payload.WithBool("RequiresRestartForConfigurationUpdate", m_requiresRestartForConfigurationUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
