/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AccountDetails.h>
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

AccountDetails::AccountDetails() : 
    m_accountIdHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

AccountDetails::AccountDetails(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_emailHasBeenSet(false)
{
  *this = jsonValue;
}

AccountDetails& AccountDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
