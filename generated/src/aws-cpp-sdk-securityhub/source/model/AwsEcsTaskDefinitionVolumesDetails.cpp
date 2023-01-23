/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesDetails.h>
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

AwsEcsTaskDefinitionVolumesDetails::AwsEcsTaskDefinitionVolumesDetails() : 
    m_dockerVolumeConfigurationHasBeenSet(false),
    m_efsVolumeConfigurationHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AwsEcsTaskDefinitionVolumesDetails::AwsEcsTaskDefinitionVolumesDetails(JsonView jsonValue) : 
    m_dockerVolumeConfigurationHasBeenSet(false),
    m_efsVolumeConfigurationHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionVolumesDetails& AwsEcsTaskDefinitionVolumesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DockerVolumeConfiguration"))
  {
    m_dockerVolumeConfiguration = jsonValue.GetObject("DockerVolumeConfiguration");

    m_dockerVolumeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EfsVolumeConfiguration"))
  {
    m_efsVolumeConfiguration = jsonValue.GetObject("EfsVolumeConfiguration");

    m_efsVolumeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetObject("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionVolumesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dockerVolumeConfigurationHasBeenSet)
  {
   payload.WithObject("DockerVolumeConfiguration", m_dockerVolumeConfiguration.Jsonize());

  }

  if(m_efsVolumeConfigurationHasBeenSet)
  {
   payload.WithObject("EfsVolumeConfiguration", m_efsVolumeConfiguration.Jsonize());

  }

  if(m_hostHasBeenSet)
  {
   payload.WithObject("Host", m_host.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
