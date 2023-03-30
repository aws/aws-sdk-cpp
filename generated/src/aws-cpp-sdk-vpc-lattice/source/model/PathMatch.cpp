/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/PathMatch.h>
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

PathMatch::PathMatch() : 
    m_caseSensitive(false),
    m_caseSensitiveHasBeenSet(false),
    m_matchHasBeenSet(false)
{
}

PathMatch::PathMatch(JsonView jsonValue) : 
    m_caseSensitive(false),
    m_caseSensitiveHasBeenSet(false),
    m_matchHasBeenSet(false)
{
  *this = jsonValue;
}

PathMatch& PathMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseSensitive"))
  {
    m_caseSensitive = jsonValue.GetBool("caseSensitive");

    m_caseSensitiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetObject("match");

    m_matchHasBeenSet = true;
  }

  return *this;
}

JsonValue PathMatch::Jsonize() const
{
  JsonValue payload;

  if(m_caseSensitiveHasBeenSet)
  {
   payload.WithBool("caseSensitive", m_caseSensitive);

  }

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
