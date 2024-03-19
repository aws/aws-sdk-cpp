/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/TimeFilter.h>
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

TimeFilter::TimeFilter() : 
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

TimeFilter::TimeFilter(JsonView jsonValue) : 
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

TimeFilter& TimeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetObject("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetObject("to");

    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithObject("from", m_from.Jsonize());

  }

  if(m_toHasBeenSet)
  {
   payload.WithObject("to", m_to.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
