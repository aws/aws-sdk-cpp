/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/BlockchainInstant.h>
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

BlockchainInstant::BlockchainInstant() : 
    m_timeHasBeenSet(false)
{
}

BlockchainInstant::BlockchainInstant(JsonView jsonValue) : 
    m_timeHasBeenSet(false)
{
  *this = jsonValue;
}

BlockchainInstant& BlockchainInstant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("time"))
  {
    m_time = jsonValue.GetDouble("time");

    m_timeHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockchainInstant::Jsonize() const
{
  JsonValue payload;

  if(m_timeHasBeenSet)
  {
   payload.WithDouble("time", m_time.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
