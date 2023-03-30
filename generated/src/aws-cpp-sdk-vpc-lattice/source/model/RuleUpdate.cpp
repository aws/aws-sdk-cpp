/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/RuleUpdate.h>
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

RuleUpdate::RuleUpdate() : 
    m_actionHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false)
{
}

RuleUpdate::RuleUpdate(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

RuleUpdate& RuleUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetObject("match");

    m_matchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleIdentifier"))
  {
    m_ruleIdentifier = jsonValue.GetString("ruleIdentifier");

    m_ruleIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_ruleIdentifierHasBeenSet)
  {
   payload.WithString("ruleIdentifier", m_ruleIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
