/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/VoutFilter.h>
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

VoutFilter::VoutFilter() : 
    m_voutSpent(false),
    m_voutSpentHasBeenSet(false)
{
}

VoutFilter::VoutFilter(JsonView jsonValue) : 
    m_voutSpent(false),
    m_voutSpentHasBeenSet(false)
{
  *this = jsonValue;
}

VoutFilter& VoutFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("voutSpent"))
  {
    m_voutSpent = jsonValue.GetBool("voutSpent");

    m_voutSpentHasBeenSet = true;
  }

  return *this;
}

JsonValue VoutFilter::Jsonize() const
{
  JsonValue payload;

  if(m_voutSpentHasBeenSet)
  {
   payload.WithBool("voutSpent", m_voutSpent);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
