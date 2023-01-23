/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails.h>
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

AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails::AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails() : 
    m_autoprovision(false),
    m_autoprovisionHasBeenSet(false),
    m_driverHasBeenSet(false),
    m_driverOptsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails::AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails(JsonView jsonValue) : 
    m_autoprovision(false),
    m_autoprovisionHasBeenSet(false),
    m_driverHasBeenSet(false),
    m_driverOptsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Autoprovision"))
  {
    m_autoprovision = jsonValue.GetBool("Autoprovision");

    m_autoprovisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Driver"))
  {
    m_driver = jsonValue.GetString("Driver");

    m_driverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DriverOpts"))
  {
    Aws::Map<Aws::String, JsonView> driverOptsJsonMap = jsonValue.GetObject("DriverOpts").GetAllObjects();
    for(auto& driverOptsItem : driverOptsJsonMap)
    {
      m_driverOpts[driverOptsItem.first] = driverOptsItem.second.AsString();
    }
    m_driverOptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Map<Aws::String, JsonView> labelsJsonMap = jsonValue.GetObject("Labels").GetAllObjects();
    for(auto& labelsItem : labelsJsonMap)
    {
      m_labels[labelsItem.first] = labelsItem.second.AsString();
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetString("Scope");

    m_scopeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_autoprovisionHasBeenSet)
  {
   payload.WithBool("Autoprovision", m_autoprovision);

  }

  if(m_driverHasBeenSet)
  {
   payload.WithString("Driver", m_driver);

  }

  if(m_driverOptsHasBeenSet)
  {
   JsonValue driverOptsJsonMap;
   for(auto& driverOptsItem : m_driverOpts)
   {
     driverOptsJsonMap.WithString(driverOptsItem.first, driverOptsItem.second);
   }
   payload.WithObject("DriverOpts", std::move(driverOptsJsonMap));

  }

  if(m_labelsHasBeenSet)
  {
   JsonValue labelsJsonMap;
   for(auto& labelsItem : m_labels)
   {
     labelsJsonMap.WithString(labelsItem.first, labelsItem.second);
   }
   payload.WithObject("Labels", std::move(labelsJsonMap));

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
