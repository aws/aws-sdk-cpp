/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/HeaderMatchType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

HeaderMatchType::HeaderMatchType() : 
    m_containsHasBeenSet(false),
    m_exactHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

HeaderMatchType::HeaderMatchType(JsonView jsonValue) : 
    m_containsHasBeenSet(false),
    m_exactHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

HeaderMatchType& HeaderMatchType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contains"))
  {
    m_contains = jsonValue.GetString("contains");

    m_containsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exact"))
  {
    m_exact = jsonValue.GetString("exact");

    m_exactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue HeaderMatchType::Jsonize() const
{
  JsonValue payload;

  if(m_containsHasBeenSet)
  {
   payload.WithString("contains", m_contains);

  }

  if(m_exactHasBeenSet)
  {
   payload.WithString("exact", m_exact);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
