/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/BatchGetTokenBalanceInputItem.h>
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

BatchGetTokenBalanceInputItem::BatchGetTokenBalanceInputItem() : 
    m_tokenIdentifierHasBeenSet(false),
    m_ownerIdentifierHasBeenSet(false),
    m_atBlockchainInstantHasBeenSet(false)
{
}

BatchGetTokenBalanceInputItem::BatchGetTokenBalanceInputItem(JsonView jsonValue) : 
    m_tokenIdentifierHasBeenSet(false),
    m_ownerIdentifierHasBeenSet(false),
    m_atBlockchainInstantHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetTokenBalanceInputItem& BatchGetTokenBalanceInputItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tokenIdentifier"))
  {
    m_tokenIdentifier = jsonValue.GetObject("tokenIdentifier");

    m_tokenIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerIdentifier"))
  {
    m_ownerIdentifier = jsonValue.GetObject("ownerIdentifier");

    m_ownerIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("atBlockchainInstant"))
  {
    m_atBlockchainInstant = jsonValue.GetObject("atBlockchainInstant");

    m_atBlockchainInstantHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetTokenBalanceInputItem::Jsonize() const
{
  JsonValue payload;

  if(m_tokenIdentifierHasBeenSet)
  {
   payload.WithObject("tokenIdentifier", m_tokenIdentifier.Jsonize());

  }

  if(m_ownerIdentifierHasBeenSet)
  {
   payload.WithObject("ownerIdentifier", m_ownerIdentifier.Jsonize());

  }

  if(m_atBlockchainInstantHasBeenSet)
  {
   payload.WithObject("atBlockchainInstant", m_atBlockchainInstant.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
