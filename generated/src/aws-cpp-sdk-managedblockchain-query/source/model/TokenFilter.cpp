/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/TokenFilter.h>
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

TokenFilter::TokenFilter() : 
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_contractAddressHasBeenSet(false),
    m_tokenIdHasBeenSet(false)
{
}

TokenFilter::TokenFilter(JsonView jsonValue) : 
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_contractAddressHasBeenSet(false),
    m_tokenIdHasBeenSet(false)
{
  *this = jsonValue;
}

TokenFilter& TokenFilter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("tokenId"))
  {
    m_tokenId = jsonValue.GetString("tokenId");

    m_tokenIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TokenFilter::Jsonize() const
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

  if(m_tokenIdHasBeenSet)
  {
   payload.WithString("tokenId", m_tokenId);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
