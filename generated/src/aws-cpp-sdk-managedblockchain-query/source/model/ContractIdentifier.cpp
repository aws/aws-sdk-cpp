/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ContractIdentifier.h>
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

ContractIdentifier::ContractIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

ContractIdentifier& ContractIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("network"))
  {
    m_network = QueryNetworkMapper::GetQueryNetworkForName(jsonValue.GetString("network"));
    m_networkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contractAddress"))
  {
    m_contractAddress = jsonValue.GetString("contractAddress");
    m_contractAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue ContractIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_networkHasBeenSet)
  {
   payload.WithString("network", QueryNetworkMapper::GetNameForQueryNetwork(m_network));
  }

  if(m_contractAddressHasBeenSet)
  {
   payload.WithString("contractAddress", m_contractAddress);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
