/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails::AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails() : 
    m_containerPathHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_sourceVolumeHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails::AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails(JsonView jsonValue) : 
    m_containerPathHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_sourceVolumeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails& AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerPath"))
  {
    m_containerPath = jsonValue.GetString("ContainerPath");

    m_containerPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadOnly"))
  {
    m_readOnly = jsonValue.GetBool("ReadOnly");

    m_readOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceVolume"))
  {
    m_sourceVolume = jsonValue.GetString("SourceVolume");

    m_sourceVolumeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("ContainerPath", m_containerPath);

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("ReadOnly", m_readOnly);

  }

  if(m_sourceVolumeHasBeenSet)
  {
   payload.WithString("SourceVolume", m_sourceVolume);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
