/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NetworkEthereumAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NetworkEthereumAttributes::NetworkEthereumAttributes() : 
    m_chainIdHasBeenSet(false)
{
}

NetworkEthereumAttributes::NetworkEthereumAttributes(JsonView jsonValue) : 
    m_chainIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkEthereumAttributes& NetworkEthereumAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChainId"))
  {
    m_chainId = jsonValue.GetString("ChainId");

    m_chainIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkEthereumAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_chainIdHasBeenSet)
  {
   payload.WithString("ChainId", m_chainId);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
