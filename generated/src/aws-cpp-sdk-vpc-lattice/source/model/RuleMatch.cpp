/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/RuleMatch.h>
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

RuleMatch::RuleMatch() : 
    m_httpMatchHasBeenSet(false)
{
}

RuleMatch::RuleMatch(JsonView jsonValue) : 
    m_httpMatchHasBeenSet(false)
{
  *this = jsonValue;
}

RuleMatch& RuleMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpMatch"))
  {
    m_httpMatch = jsonValue.GetObject("httpMatch");

    m_httpMatchHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleMatch::Jsonize() const
{
  JsonValue payload;

  if(m_httpMatchHasBeenSet)
  {
   payload.WithObject("httpMatch", m_httpMatch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
