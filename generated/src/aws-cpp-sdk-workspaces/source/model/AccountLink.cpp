/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AccountLink.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

AccountLink::AccountLink(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountLink& AccountLink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountLinkId"))
  {
    m_accountLinkId = jsonValue.GetString("AccountLinkId");
    m_accountLinkIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountLinkStatus"))
  {
    m_accountLinkStatus = AccountLinkStatusEnumMapper::GetAccountLinkStatusEnumForName(jsonValue.GetString("AccountLinkStatus"));
    m_accountLinkStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceAccountId"))
  {
    m_sourceAccountId = jsonValue.GetString("SourceAccountId");
    m_sourceAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetAccountId"))
  {
    m_targetAccountId = jsonValue.GetString("TargetAccountId");
    m_targetAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountLink::Jsonize() const
{
  JsonValue payload;

  if(m_accountLinkIdHasBeenSet)
  {
   payload.WithString("AccountLinkId", m_accountLinkId);

  }

  if(m_accountLinkStatusHasBeenSet)
  {
   payload.WithString("AccountLinkStatus", AccountLinkStatusEnumMapper::GetNameForAccountLinkStatusEnum(m_accountLinkStatus));
  }

  if(m_sourceAccountIdHasBeenSet)
  {
   payload.WithString("SourceAccountId", m_sourceAccountId);

  }

  if(m_targetAccountIdHasBeenSet)
  {
   payload.WithString("TargetAccountId", m_targetAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
