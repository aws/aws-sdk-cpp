/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/TokenBalance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

TokenBalance::TokenBalance() : 
    m_ownerIdentifierHasBeenSet(false),
    m_tokenIdentifierHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_atBlockchainInstantHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

TokenBalance::TokenBalance(JsonView jsonValue) : 
    m_ownerIdentifierHasBeenSet(false),
    m_tokenIdentifierHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_atBlockchainInstantHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TokenBalance& TokenBalance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ownerIdentifier"))
  {
    m_ownerIdentifier = jsonValue.GetObject("ownerIdentifier");

    m_ownerIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenIdentifier"))
  {
    m_tokenIdentifier = jsonValue.GetObject("tokenIdentifier");

    m_tokenIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("balance"))
  {
    m_balance = jsonValue.GetString("balance");

    m_balanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("atBlockchainInstant"))
  {
    m_atBlockchainInstant = jsonValue.GetObject("atBlockchainInstant");

    m_atBlockchainInstantHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetObject("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TokenBalance::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdentifierHasBeenSet)
  {
   payload.WithObject("ownerIdentifier", m_ownerIdentifier.Jsonize());

  }

  if(m_tokenIdentifierHasBeenSet)
  {
   payload.WithObject("tokenIdentifier", m_tokenIdentifier.Jsonize());

  }

  if(m_balanceHasBeenSet)
  {
   payload.WithString("balance", m_balance);

  }

  if(m_atBlockchainInstantHasBeenSet)
  {
   payload.WithObject("atBlockchainInstant", m_atBlockchainInstant.Jsonize());

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithObject("lastUpdatedTime", m_lastUpdatedTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
