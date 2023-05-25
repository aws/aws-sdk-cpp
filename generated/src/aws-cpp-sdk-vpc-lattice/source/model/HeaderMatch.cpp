/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/HeaderMatch.h>
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

HeaderMatch::HeaderMatch() : 
    m_caseSensitive(false),
    m_caseSensitiveHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

HeaderMatch::HeaderMatch(JsonView jsonValue) : 
    m_caseSensitive(false),
    m_caseSensitiveHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

HeaderMatch& HeaderMatch::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue HeaderMatch::Jsonize() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
