/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/Version.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

Version::Version() : 
    m_applicationIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_parameterDefinitionsHasBeenSet(false),
    m_requiredCapabilitiesHasBeenSet(false),
    m_resourcesSupported(false),
    m_resourcesSupportedHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeArchiveUrlHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false),
    m_templateUrlHasBeenSet(false)
{
}

Version::Version(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_parameterDefinitionsHasBeenSet(false),
    m_requiredCapabilitiesHasBeenSet(false),
    m_resourcesSupported(false),
    m_resourcesSupportedHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeArchiveUrlHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false),
    m_templateUrlHasBeenSet(false)
{
  *this = jsonValue;
}

Version& Version::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterDefinitions"))
  {
    Aws::Utils::Array<JsonView> parameterDefinitionsJsonList = jsonValue.GetArray("parameterDefinitions");
    for(unsigned parameterDefinitionsIndex = 0; parameterDefinitionsIndex < parameterDefinitionsJsonList.GetLength(); ++parameterDefinitionsIndex)
    {
      m_parameterDefinitions.push_back(parameterDefinitionsJsonList[parameterDefinitionsIndex].AsObject());
    }
    m_parameterDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requiredCapabilities"))
  {
    Aws::Utils::Array<JsonView> requiredCapabilitiesJsonList = jsonValue.GetArray("requiredCapabilities");
    for(unsigned requiredCapabilitiesIndex = 0; requiredCapabilitiesIndex < requiredCapabilitiesJsonList.GetLength(); ++requiredCapabilitiesIndex)
    {
      m_requiredCapabilities.push_back(CapabilityMapper::GetCapabilityForName(requiredCapabilitiesJsonList[requiredCapabilitiesIndex].AsString()));
    }
    m_requiredCapabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesSupported"))
  {
    m_resourcesSupported = jsonValue.GetBool("resourcesSupported");

    m_resourcesSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("semanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("semanticVersion");

    m_semanticVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceCodeArchiveUrl"))
  {
    m_sourceCodeArchiveUrl = jsonValue.GetString("sourceCodeArchiveUrl");

    m_sourceCodeArchiveUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceCodeUrl"))
  {
    m_sourceCodeUrl = jsonValue.GetString("sourceCodeUrl");

    m_sourceCodeUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateUrl"))
  {
    m_templateUrl = jsonValue.GetString("templateUrl");

    m_templateUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue Version::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime);

  }

  if(m_parameterDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterDefinitionsJsonList(m_parameterDefinitions.size());
   for(unsigned parameterDefinitionsIndex = 0; parameterDefinitionsIndex < parameterDefinitionsJsonList.GetLength(); ++parameterDefinitionsIndex)
   {
     parameterDefinitionsJsonList[parameterDefinitionsIndex].AsObject(m_parameterDefinitions[parameterDefinitionsIndex].Jsonize());
   }
   payload.WithArray("parameterDefinitions", std::move(parameterDefinitionsJsonList));

  }

  if(m_requiredCapabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredCapabilitiesJsonList(m_requiredCapabilities.size());
   for(unsigned requiredCapabilitiesIndex = 0; requiredCapabilitiesIndex < requiredCapabilitiesJsonList.GetLength(); ++requiredCapabilitiesIndex)
   {
     requiredCapabilitiesJsonList[requiredCapabilitiesIndex].AsString(CapabilityMapper::GetNameForCapability(m_requiredCapabilities[requiredCapabilitiesIndex]));
   }
   payload.WithArray("requiredCapabilities", std::move(requiredCapabilitiesJsonList));

  }

  if(m_resourcesSupportedHasBeenSet)
  {
   payload.WithBool("resourcesSupported", m_resourcesSupported);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_sourceCodeArchiveUrlHasBeenSet)
  {
   payload.WithString("sourceCodeArchiveUrl", m_sourceCodeArchiveUrl);

  }

  if(m_sourceCodeUrlHasBeenSet)
  {
   payload.WithString("sourceCodeUrl", m_sourceCodeUrl);

  }

  if(m_templateUrlHasBeenSet)
  {
   payload.WithString("templateUrl", m_templateUrl);

  }

  return payload;
}

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
