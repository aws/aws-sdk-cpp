/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AuthChallengeRequestEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AuthChallengeRequestEvent::AuthChallengeRequestEvent() : 
    m_authorizationUrlHasBeenSet(false)
{
}

AuthChallengeRequestEvent::AuthChallengeRequestEvent(JsonView jsonValue) : 
    m_authorizationUrlHasBeenSet(false)
{
  *this = jsonValue;
}

AuthChallengeRequestEvent& AuthChallengeRequestEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizationUrl"))
  {
    m_authorizationUrl = jsonValue.GetString("authorizationUrl");

    m_authorizationUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthChallengeRequestEvent::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationUrlHasBeenSet)
  {
   payload.WithString("authorizationUrl", m_authorizationUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
