/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ContractFilter.h>
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

ContractFilter::ContractFilter() : 
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_tokenStandard(QueryTokenStandard::NOT_SET),
    m_tokenStandardHasBeenSet(false),
    m_deployerAddressHasBeenSet(false)
{
}

ContractFilter::ContractFilter(JsonView jsonValue) : 
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_tokenStandard(QueryTokenStandard::NOT_SET),
    m_tokenStandardHasBeenSet(false),
    m_deployerAddressHasBeenSet(false)
{
  *this = jsonValue;
}

ContractFilter& ContractFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("network"))
  {
    m_network = QueryNetworkMapper::GetQueryNetworkForName(jsonValue.GetString("network"));

    m_networkHasBeenSet = true;
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

JsonValue ContractFilter::Jsonize() const
{
  JsonValue payload;

  if(m_networkHasBeenSet)
  {
   payload.WithString("network", QueryNetworkMapper::GetNameForQueryNetwork(m_network));
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
