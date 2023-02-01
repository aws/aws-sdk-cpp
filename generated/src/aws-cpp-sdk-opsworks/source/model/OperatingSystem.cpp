/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/OperatingSystem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

OperatingSystem::OperatingSystem() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_configurationManagersHasBeenSet(false),
    m_reportedNameHasBeenSet(false),
    m_reportedVersionHasBeenSet(false),
    m_supported(false),
    m_supportedHasBeenSet(false)
{
}

OperatingSystem::OperatingSystem(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_configurationManagersHasBeenSet(false),
    m_reportedNameHasBeenSet(false),
    m_reportedVersionHasBeenSet(false),
    m_supported(false),
    m_supportedHasBeenSet(false)
{
  *this = jsonValue;
}

OperatingSystem& OperatingSystem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationManagers"))
  {
    Aws::Utils::Array<JsonView> configurationManagersJsonList = jsonValue.GetArray("ConfigurationManagers");
    for(unsigned configurationManagersIndex = 0; configurationManagersIndex < configurationManagersJsonList.GetLength(); ++configurationManagersIndex)
    {
      m_configurationManagers.push_back(configurationManagersJsonList[configurationManagersIndex].AsObject());
    }
    m_configurationManagersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportedName"))
  {
    m_reportedName = jsonValue.GetString("ReportedName");

    m_reportedNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportedVersion"))
  {
    m_reportedVersion = jsonValue.GetString("ReportedVersion");

    m_reportedVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Supported"))
  {
    m_supported = jsonValue.GetBool("Supported");

    m_supportedHasBeenSet = true;
  }

  return *this;
}

JsonValue OperatingSystem::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_configurationManagersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationManagersJsonList(m_configurationManagers.size());
   for(unsigned configurationManagersIndex = 0; configurationManagersIndex < configurationManagersJsonList.GetLength(); ++configurationManagersIndex)
   {
     configurationManagersJsonList[configurationManagersIndex].AsObject(m_configurationManagers[configurationManagersIndex].Jsonize());
   }
   payload.WithArray("ConfigurationManagers", std::move(configurationManagersJsonList));

  }

  if(m_reportedNameHasBeenSet)
  {
   payload.WithString("ReportedName", m_reportedName);

  }

  if(m_reportedVersionHasBeenSet)
  {
   payload.WithString("ReportedVersion", m_reportedVersion);

  }

  if(m_supportedHasBeenSet)
  {
   payload.WithBool("Supported", m_supported);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
