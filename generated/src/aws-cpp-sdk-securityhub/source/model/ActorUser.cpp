/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ActorUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ActorUser::ActorUser(JsonView jsonValue)
{
  *this = jsonValue;
}

ActorUser& ActorUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = jsonValue.GetString("Uid");
    m_uidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CredentialUid"))
  {
    m_credentialUid = jsonValue.GetString("CredentialUid");
    m_credentialUidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Account"))
  {
    m_account = jsonValue.GetObject("Account");
    m_accountHasBeenSet = true;
  }
  return *this;
}

JsonValue ActorUser::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_uidHasBeenSet)
  {
   payload.WithString("Uid", m_uid);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_credentialUidHasBeenSet)
  {
   payload.WithString("CredentialUid", m_credentialUid);

  }

  if(m_accountHasBeenSet)
  {
   payload.WithObject("Account", m_account.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
