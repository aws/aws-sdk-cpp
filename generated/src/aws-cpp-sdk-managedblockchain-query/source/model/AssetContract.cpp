/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/AssetContract.h>
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

AssetContract::AssetContract(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetContract& AssetContract::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contractIdentifier"))
  {
    m_contractIdentifier = jsonValue.GetObject("contractIdentifier");
    m_contractIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenStandard"))
  {
    m_tokenStandard = QueryTokenStandardMapper::GetQueryTokenStandardForName(jsonValue.GetString("tokenStandard"));
    m_tokenStandardHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deployerAddress"))
  {
    m_deployerAddress = jsonValue.GetString("deployerAddress");
    m_deployerAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetContract::Jsonize() const
{
  JsonValue payload;

  if(m_contractIdentifierHasBeenSet)
  {
   payload.WithObject("contractIdentifier", m_contractIdentifier.Jsonize());

  }

  if(m_tokenStandardHasBeenSet)
  {
   payload.WithString("tokenStandard", QueryTokenStandardMapper::GetNameForQueryTokenStandard(m_tokenStandard));
  }

  if(m_deployerAddressHasBeenSet)
  {
   payload.WithString("deployerAddress", m_deployerAddress);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
