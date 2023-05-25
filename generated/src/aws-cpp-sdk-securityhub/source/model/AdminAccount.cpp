/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AdminAccount.h>
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

AdminAccount::AdminAccount() : 
    m_accountIdHasBeenSet(false),
    m_status(AdminStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AdminAccount::AdminAccount(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_status(AdminStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AdminAccount& AdminAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AdminStatusMapper::GetAdminStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AdminAccount::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AdminStatusMapper::GetNameForAdminStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
