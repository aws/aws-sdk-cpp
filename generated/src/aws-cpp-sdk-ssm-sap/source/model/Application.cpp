﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/Application.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

Application::Application(JsonView jsonValue)
{
  *this = jsonValue;
}

Application& Application::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ApplicationTypeMapper::GetApplicationTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppRegistryArn"))
  {
    m_appRegistryArn = jsonValue.GetString("AppRegistryArn");
    m_appRegistryArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiscoveryStatus"))
  {
    m_discoveryStatus = ApplicationDiscoveryStatusMapper::GetApplicationDiscoveryStatusForName(jsonValue.GetString("DiscoveryStatus"));
    m_discoveryStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Components"))
  {
    Aws::Utils::Array<JsonView> componentsJsonList = jsonValue.GetArray("Components");
    for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
    {
      m_components.push_back(componentsJsonList[componentsIndex].AsString());
    }
    m_componentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");
    m_lastUpdatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociatedApplicationArns"))
  {
    Aws::Utils::Array<JsonView> associatedApplicationArnsJsonList = jsonValue.GetArray("AssociatedApplicationArns");
    for(unsigned associatedApplicationArnsIndex = 0; associatedApplicationArnsIndex < associatedApplicationArnsJsonList.GetLength(); ++associatedApplicationArnsIndex)
    {
      m_associatedApplicationArns.push_back(associatedApplicationArnsJsonList[associatedApplicationArnsIndex].AsString());
    }
    m_associatedApplicationArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue Application::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ApplicationTypeMapper::GetNameForApplicationType(m_type));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_appRegistryArnHasBeenSet)
  {
   payload.WithString("AppRegistryArn", m_appRegistryArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ApplicationStatusMapper::GetNameForApplicationStatus(m_status));
  }

  if(m_discoveryStatusHasBeenSet)
  {
   payload.WithString("DiscoveryStatus", ApplicationDiscoveryStatusMapper::GetNameForApplicationDiscoveryStatus(m_discoveryStatus));
  }

  if(m_componentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentsJsonList(m_components.size());
   for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
   {
     componentsJsonList[componentsIndex].AsString(m_components[componentsIndex]);
   }
   payload.WithArray("Components", std::move(componentsJsonList));

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_associatedApplicationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedApplicationArnsJsonList(m_associatedApplicationArns.size());
   for(unsigned associatedApplicationArnsIndex = 0; associatedApplicationArnsIndex < associatedApplicationArnsJsonList.GetLength(); ++associatedApplicationArnsIndex)
   {
     associatedApplicationArnsJsonList[associatedApplicationArnsIndex].AsString(m_associatedApplicationArns[associatedApplicationArnsIndex]);
   }
   payload.WithArray("AssociatedApplicationArns", std::move(associatedApplicationArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
