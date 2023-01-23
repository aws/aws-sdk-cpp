/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StudioComponentConfiguration::StudioComponentConfiguration() : 
    m_activeDirectoryConfigurationHasBeenSet(false),
    m_computeFarmConfigurationHasBeenSet(false),
    m_licenseServiceConfigurationHasBeenSet(false),
    m_sharedFileSystemConfigurationHasBeenSet(false)
{
}

StudioComponentConfiguration::StudioComponentConfiguration(JsonView jsonValue) : 
    m_activeDirectoryConfigurationHasBeenSet(false),
    m_computeFarmConfigurationHasBeenSet(false),
    m_licenseServiceConfigurationHasBeenSet(false),
    m_sharedFileSystemConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

StudioComponentConfiguration& StudioComponentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeDirectoryConfiguration"))
  {
    m_activeDirectoryConfiguration = jsonValue.GetObject("activeDirectoryConfiguration");

    m_activeDirectoryConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeFarmConfiguration"))
  {
    m_computeFarmConfiguration = jsonValue.GetObject("computeFarmConfiguration");

    m_computeFarmConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseServiceConfiguration"))
  {
    m_licenseServiceConfiguration = jsonValue.GetObject("licenseServiceConfiguration");

    m_licenseServiceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharedFileSystemConfiguration"))
  {
    m_sharedFileSystemConfiguration = jsonValue.GetObject("sharedFileSystemConfiguration");

    m_sharedFileSystemConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue StudioComponentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectoryConfigurationHasBeenSet)
  {
   payload.WithObject("activeDirectoryConfiguration", m_activeDirectoryConfiguration.Jsonize());

  }

  if(m_computeFarmConfigurationHasBeenSet)
  {
   payload.WithObject("computeFarmConfiguration", m_computeFarmConfiguration.Jsonize());

  }

  if(m_licenseServiceConfigurationHasBeenSet)
  {
   payload.WithObject("licenseServiceConfiguration", m_licenseServiceConfiguration.Jsonize());

  }

  if(m_sharedFileSystemConfigurationHasBeenSet)
  {
   payload.WithObject("sharedFileSystemConfiguration", m_sharedFileSystemConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
