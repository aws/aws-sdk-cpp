/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/Account.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Account::Account(JsonView jsonValue)
{
  *this = jsonValue;
}

Account& Account::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = AccountStatusMapper::GetAccountStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = AccountStateMapper::GetAccountStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JoinedMethod"))
  {
    m_joinedMethod = AccountJoinedMethodMapper::GetAccountJoinedMethodForName(jsonValue.GetString("JoinedMethod"));
    m_joinedMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JoinedTimestamp"))
  {
    m_joinedTimestamp = jsonValue.GetDouble("JoinedTimestamp");
    m_joinedTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue Account::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AccountStatusMapper::GetNameForAccountStatus(m_status));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AccountStateMapper::GetNameForAccountState(m_state));
  }

  if(m_joinedMethodHasBeenSet)
  {
   payload.WithString("JoinedMethod", AccountJoinedMethodMapper::GetNameForAccountJoinedMethod(m_joinedMethod));
  }

  if(m_joinedTimestampHasBeenSet)
  {
   payload.WithDouble("JoinedTimestamp", m_joinedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
