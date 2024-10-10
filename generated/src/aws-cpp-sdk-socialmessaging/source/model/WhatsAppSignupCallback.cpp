/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/WhatsAppSignupCallback.h>
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

WhatsAppSignupCallback::WhatsAppSignupCallback() : 
    m_accessTokenHasBeenSet(false)
{
}

WhatsAppSignupCallback::WhatsAppSignupCallback(JsonView jsonValue)
  : WhatsAppSignupCallback()
{
  *this = jsonValue;
}

WhatsAppSignupCallback& WhatsAppSignupCallback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessToken"))
  {
    m_accessToken = jsonValue.GetString("accessToken");

    m_accessTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue WhatsAppSignupCallback::Jsonize() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("accessToken", m_accessToken);

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
