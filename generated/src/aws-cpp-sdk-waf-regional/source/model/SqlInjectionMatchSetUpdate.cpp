/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/SqlInjectionMatchSetUpdate.h>
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

SqlInjectionMatchSetUpdate::SqlInjectionMatchSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_sqlInjectionMatchTupleHasBeenSet(false)
{
}

SqlInjectionMatchSetUpdate::SqlInjectionMatchSetUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_sqlInjectionMatchTupleHasBeenSet(false)
{
  *this = jsonValue;
}

SqlInjectionMatchSetUpdate& SqlInjectionMatchSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlInjectionMatchTuple"))
  {
    m_sqlInjectionMatchTuple = jsonValue.GetObject("SqlInjectionMatchTuple");

    m_sqlInjectionMatchTupleHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlInjectionMatchSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_sqlInjectionMatchTupleHasBeenSet)
  {
   payload.WithObject("SqlInjectionMatchTuple", m_sqlInjectionMatchTuple.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
