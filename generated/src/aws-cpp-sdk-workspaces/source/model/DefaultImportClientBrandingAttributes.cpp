/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DefaultImportClientBrandingAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

DefaultImportClientBrandingAttributes::DefaultImportClientBrandingAttributes() : 
    m_logoHasBeenSet(false),
    m_supportEmailHasBeenSet(false),
    m_supportLinkHasBeenSet(false),
    m_forgotPasswordLinkHasBeenSet(false),
    m_loginMessageHasBeenSet(false)
{
}

DefaultImportClientBrandingAttributes::DefaultImportClientBrandingAttributes(JsonView jsonValue) : 
    m_logoHasBeenSet(false),
    m_supportEmailHasBeenSet(false),
    m_supportLinkHasBeenSet(false),
    m_forgotPasswordLinkHasBeenSet(false),
    m_loginMessageHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultImportClientBrandingAttributes& DefaultImportClientBrandingAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Logo"))
  {
    m_logo = HashingUtils::Base64Decode(jsonValue.GetString("Logo"));
    m_logoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportEmail"))
  {
    m_supportEmail = jsonValue.GetString("SupportEmail");

    m_supportEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportLink"))
  {
    m_supportLink = jsonValue.GetString("SupportLink");

    m_supportLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForgotPasswordLink"))
  {
    m_forgotPasswordLink = jsonValue.GetString("ForgotPasswordLink");

    m_forgotPasswordLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoginMessage"))
  {
    Aws::Map<Aws::String, JsonView> loginMessageJsonMap = jsonValue.GetObject("LoginMessage").GetAllObjects();
    for(auto& loginMessageItem : loginMessageJsonMap)
    {
      m_loginMessage[loginMessageItem.first] = loginMessageItem.second.AsString();
    }
    m_loginMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultImportClientBrandingAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_logoHasBeenSet)
  {
   payload.WithString("Logo", HashingUtils::Base64Encode(m_logo));
  }

  if(m_supportEmailHasBeenSet)
  {
   payload.WithString("SupportEmail", m_supportEmail);

  }

  if(m_supportLinkHasBeenSet)
  {
   payload.WithString("SupportLink", m_supportLink);

  }

  if(m_forgotPasswordLinkHasBeenSet)
  {
   payload.WithString("ForgotPasswordLink", m_forgotPasswordLink);

  }

  if(m_loginMessageHasBeenSet)
  {
   JsonValue loginMessageJsonMap;
   for(auto& loginMessageItem : m_loginMessage)
   {
     loginMessageJsonMap.WithString(loginMessageItem.first, loginMessageItem.second);
   }
   payload.WithObject("LoginMessage", std::move(loginMessageJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
