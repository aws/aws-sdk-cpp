/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RuleUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

RuleUpdate::RuleUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_predicateHasBeenSet(false)
{
}

RuleUpdate::RuleUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_predicateHasBeenSet(false)
{
  *this = jsonValue;
}

RuleUpdate& RuleUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Predicate"))
  {
    m_predicate = jsonValue.GetObject("Predicate");

    m_predicateHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_predicateHasBeenSet)
  {
   payload.WithObject("Predicate", m_predicate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
