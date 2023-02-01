/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails::AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails() : 
    m_containerPathHasBeenSet(false),
    m_mountOptionsHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails::AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails(JsonView jsonValue) : 
    m_containerPathHasBeenSet(false),
    m_mountOptionsHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerPath"))
  {
    m_containerPath = jsonValue.GetString("ContainerPath");

    m_containerPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountOptions"))
  {
    Aws::Utils::Array<JsonView> mountOptionsJsonList = jsonValue.GetArray("MountOptions");
    for(unsigned mountOptionsIndex = 0; mountOptionsIndex < mountOptionsJsonList.GetLength(); ++mountOptionsIndex)
    {
      m_mountOptions.push_back(mountOptionsJsonList[mountOptionsIndex].AsString());
    }
    m_mountOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInteger("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("ContainerPath", m_containerPath);

  }

  if(m_mountOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mountOptionsJsonList(m_mountOptions.size());
   for(unsigned mountOptionsIndex = 0; mountOptionsIndex < mountOptionsJsonList.GetLength(); ++mountOptionsIndex)
   {
     mountOptionsJsonList[mountOptionsIndex].AsString(m_mountOptions[mountOptionsIndex]);
   }
   payload.WithArray("MountOptions", std::move(mountOptionsJsonList));

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
