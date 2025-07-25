/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/LibraryTemplateButtonInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

LibraryTemplateButtonInput::LibraryTemplateButtonInput(JsonView jsonValue)
{
  *this = jsonValue;
}

LibraryTemplateButtonInput& LibraryTemplateButtonInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("phoneNumber");
    m_phoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    Aws::Map<Aws::String, JsonView> urlJsonMap = jsonValue.GetObject("url").GetAllObjects();
    for(auto& urlItem : urlJsonMap)
    {
      m_url[urlItem.first] = urlItem.second.AsString();
    }
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("otpType"))
  {
    m_otpType = jsonValue.GetString("otpType");
    m_otpTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("zeroTapTermsAccepted"))
  {
    m_zeroTapTermsAccepted = jsonValue.GetBool("zeroTapTermsAccepted");
    m_zeroTapTermsAcceptedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportedApps"))
  {
    Aws::Utils::Array<JsonView> supportedAppsJsonList = jsonValue.GetArray("supportedApps");
    for(unsigned supportedAppsIndex = 0; supportedAppsIndex < supportedAppsJsonList.GetLength(); ++supportedAppsIndex)
    {
      Aws::Map<Aws::String, JsonView> supportedAppJsonMap = supportedAppsJsonList[supportedAppsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> supportedAppMap;
      for(auto& supportedAppItem : supportedAppJsonMap)
      {
        supportedAppMap[supportedAppItem.first] = supportedAppItem.second.AsString();
      }
      m_supportedApps.push_back(std::move(supportedAppMap));
    }
    m_supportedAppsHasBeenSet = true;
  }
  return *this;
}

JsonValue LibraryTemplateButtonInput::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("phoneNumber", m_phoneNumber);

  }

  if(m_urlHasBeenSet)
  {
   JsonValue urlJsonMap;
   for(auto& urlItem : m_url)
   {
     urlJsonMap.WithString(urlItem.first, urlItem.second);
   }
   payload.WithObject("url", std::move(urlJsonMap));

  }

  if(m_otpTypeHasBeenSet)
  {
   payload.WithString("otpType", m_otpType);

  }

  if(m_zeroTapTermsAcceptedHasBeenSet)
  {
   payload.WithBool("zeroTapTermsAccepted", m_zeroTapTermsAccepted);

  }

  if(m_supportedAppsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedAppsJsonList(m_supportedApps.size());
   for(unsigned supportedAppsIndex = 0; supportedAppsIndex < supportedAppsJsonList.GetLength(); ++supportedAppsIndex)
   {
     JsonValue supportedAppJsonMap;
     for(auto& supportedAppItem : m_supportedApps[supportedAppsIndex])
     {
       supportedAppJsonMap.WithString(supportedAppItem.first, supportedAppItem.second);
     }
     supportedAppsJsonList[supportedAppsIndex].AsObject(std::move(supportedAppJsonMap));
   }
   payload.WithArray("supportedApps", std::move(supportedAppsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
