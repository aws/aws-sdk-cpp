/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ContractMetadata.h>
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

ContractMetadata::ContractMetadata() : 
    m_nameHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_decimals(0),
    m_decimalsHasBeenSet(false)
{
}

ContractMetadata::ContractMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_decimals(0),
    m_decimalsHasBeenSet(false)
{
  *this = jsonValue;
}

ContractMetadata& ContractMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("symbol"))
  {
    m_symbol = jsonValue.GetString("symbol");

    m_symbolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decimals"))
  {
    m_decimals = jsonValue.GetInteger("decimals");

    m_decimalsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContractMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_symbolHasBeenSet)
  {
   payload.WithString("symbol", m_symbol);

  }

  if(m_decimalsHasBeenSet)
  {
   payload.WithInteger("decimals", m_decimals);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
