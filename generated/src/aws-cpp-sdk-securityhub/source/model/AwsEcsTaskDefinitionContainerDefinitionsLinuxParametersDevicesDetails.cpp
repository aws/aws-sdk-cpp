/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails::AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails() : 
    m_containerPathHasBeenSet(false),
    m_hostPathHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails::AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails(JsonView jsonValue) : 
    m_containerPathHasBeenSet(false),
    m_hostPathHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerPath"))
  {
    m_containerPath = jsonValue.GetString("ContainerPath");

    m_containerPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostPath"))
  {
    m_hostPath = jsonValue.GetString("HostPath");

    m_hostPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(permissionsJsonList[permissionsIndex].AsString());
    }
    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("ContainerPath", m_containerPath);

  }

  if(m_hostPathHasBeenSet)
  {
   payload.WithString("HostPath", m_hostPath);

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsString(m_permissions[permissionsIndex]);
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
