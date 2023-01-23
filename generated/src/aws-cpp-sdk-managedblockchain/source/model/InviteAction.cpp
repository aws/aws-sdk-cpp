/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/InviteAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

InviteAction::InviteAction() : 
    m_principalHasBeenSet(false)
{
}

InviteAction::InviteAction(JsonView jsonValue) : 
    m_principalHasBeenSet(false)
{
  *this = jsonValue;
}

InviteAction& InviteAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Principal"))
  {
    m_principal = jsonValue.GetString("Principal");

    m_principalHasBeenSet = true;
  }

  return *this;
}

JsonValue InviteAction::Jsonize() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithString("Principal", m_principal);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
