/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/Portal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

Portal::Portal(JsonView jsonValue)
{
  *this = jsonValue;
}

Portal& Portal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");
    m_portalArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rendererType"))
  {
    m_rendererType = RendererTypeMapper::GetRendererTypeForName(jsonValue.GetString("rendererType"));
    m_rendererTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("browserType"))
  {
    m_browserType = BrowserTypeMapper::GetBrowserTypeForName(jsonValue.GetString("browserType"));
    m_browserTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalStatus"))
  {
    m_portalStatus = PortalStatusMapper::GetPortalStatusForName(jsonValue.GetString("portalStatus"));
    m_portalStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalEndpoint"))
  {
    m_portalEndpoint = jsonValue.GetString("portalEndpoint");
    m_portalEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("browserSettingsArn"))
  {
    m_browserSettingsArn = jsonValue.GetString("browserSettingsArn");
    m_browserSettingsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataProtectionSettingsArn"))
  {
    m_dataProtectionSettingsArn = jsonValue.GetString("dataProtectionSettingsArn");
    m_dataProtectionSettingsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userSettingsArn"))
  {
    m_userSettingsArn = jsonValue.GetString("userSettingsArn");
    m_userSettingsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkSettingsArn"))
  {
    m_networkSettingsArn = jsonValue.GetString("networkSettingsArn");
    m_networkSettingsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionLoggerArn"))
  {
    m_sessionLoggerArn = jsonValue.GetString("sessionLoggerArn");
    m_sessionLoggerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trustStoreArn"))
  {
    m_trustStoreArn = jsonValue.GetString("trustStoreArn");
    m_trustStoreArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAccessLoggingSettingsArn"))
  {
    m_userAccessLoggingSettingsArn = jsonValue.GetString("userAccessLoggingSettingsArn");
    m_userAccessLoggingSettingsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("authenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipAccessSettingsArn"))
  {
    m_ipAccessSettingsArn = jsonValue.GetString("ipAccessSettingsArn");
    m_ipAccessSettingsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerManagedKey"))
  {
    m_customerManagedKey = jsonValue.GetString("customerManagedKey");
    m_customerManagedKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalEncryptionContext"))
  {
    Aws::Map<Aws::String, JsonView> additionalEncryptionContextJsonMap = jsonValue.GetObject("additionalEncryptionContext").GetAllObjects();
    for(auto& additionalEncryptionContextItem : additionalEncryptionContextJsonMap)
    {
      m_additionalEncryptionContext[additionalEncryptionContextItem.first] = additionalEncryptionContextItem.second.AsString();
    }
    m_additionalEncryptionContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxConcurrentSessions"))
  {
    m_maxConcurrentSessions = jsonValue.GetInteger("maxConcurrentSessions");
    m_maxConcurrentSessionsHasBeenSet = true;
  }
  return *this;
}

JsonValue Portal::Jsonize() const
{
  JsonValue payload;

  if(m_portalArnHasBeenSet)
  {
   payload.WithString("portalArn", m_portalArn);

  }

  if(m_rendererTypeHasBeenSet)
  {
   payload.WithString("rendererType", RendererTypeMapper::GetNameForRendererType(m_rendererType));
  }

  if(m_browserTypeHasBeenSet)
  {
   payload.WithString("browserType", BrowserTypeMapper::GetNameForBrowserType(m_browserType));
  }

  if(m_portalStatusHasBeenSet)
  {
   payload.WithString("portalStatus", PortalStatusMapper::GetNameForPortalStatus(m_portalStatus));
  }

  if(m_portalEndpointHasBeenSet)
  {
   payload.WithString("portalEndpoint", m_portalEndpoint);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_browserSettingsArnHasBeenSet)
  {
   payload.WithString("browserSettingsArn", m_browserSettingsArn);

  }

  if(m_dataProtectionSettingsArnHasBeenSet)
  {
   payload.WithString("dataProtectionSettingsArn", m_dataProtectionSettingsArn);

  }

  if(m_userSettingsArnHasBeenSet)
  {
   payload.WithString("userSettingsArn", m_userSettingsArn);

  }

  if(m_networkSettingsArnHasBeenSet)
  {
   payload.WithString("networkSettingsArn", m_networkSettingsArn);

  }

  if(m_sessionLoggerArnHasBeenSet)
  {
   payload.WithString("sessionLoggerArn", m_sessionLoggerArn);

  }

  if(m_trustStoreArnHasBeenSet)
  {
   payload.WithString("trustStoreArn", m_trustStoreArn);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_userAccessLoggingSettingsArnHasBeenSet)
  {
   payload.WithString("userAccessLoggingSettingsArn", m_userAccessLoggingSettingsArn);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_ipAccessSettingsArnHasBeenSet)
  {
   payload.WithString("ipAccessSettingsArn", m_ipAccessSettingsArn);

  }

  if(m_customerManagedKeyHasBeenSet)
  {
   payload.WithString("customerManagedKey", m_customerManagedKey);

  }

  if(m_additionalEncryptionContextHasBeenSet)
  {
   JsonValue additionalEncryptionContextJsonMap;
   for(auto& additionalEncryptionContextItem : m_additionalEncryptionContext)
   {
     additionalEncryptionContextJsonMap.WithString(additionalEncryptionContextItem.first, additionalEncryptionContextItem.second);
   }
   payload.WithObject("additionalEncryptionContext", std::move(additionalEncryptionContextJsonMap));

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_maxConcurrentSessionsHasBeenSet)
  {
   payload.WithInteger("maxConcurrentSessions", m_maxConcurrentSessions);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
