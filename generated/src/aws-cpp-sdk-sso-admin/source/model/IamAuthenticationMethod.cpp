/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/IamAuthenticationMethod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

IamAuthenticationMethod::IamAuthenticationMethod() : 
    m_actorPolicyHasBeenSet(false)
{
}

IamAuthenticationMethod::IamAuthenticationMethod(JsonView jsonValue) : 
    m_actorPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

IamAuthenticationMethod& IamAuthenticationMethod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActorPolicy"))
  {
    m_actorPolicy = jsonValue.GetObject("ActorPolicy");

    m_actorPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue IamAuthenticationMethod::Jsonize() const
{
  JsonValue payload;

  if(m_actorPolicyHasBeenSet)
  {
    if(!m_actorPolicy.View().IsNull())
    {
       payload.WithObject("ActorPolicy", JsonValue(m_actorPolicy.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
