/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RelayAuthentication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

RelayAuthentication::RelayAuthentication() : 
    m_noAuthenticationHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

RelayAuthentication::RelayAuthentication(JsonView jsonValue)
  : RelayAuthentication()
{
  *this = jsonValue;
}

RelayAuthentication& RelayAuthentication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NoAuthentication"))
  {
    m_noAuthentication = jsonValue.GetObject("NoAuthentication");

    m_noAuthenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RelayAuthentication::Jsonize() const
{
  JsonValue payload;

  if(m_noAuthenticationHasBeenSet)
  {
   payload.WithObject("NoAuthentication", m_noAuthentication.Jsonize());

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
