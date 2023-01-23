/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/SizeConstraintSetUpdate.h>
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

SizeConstraintSetUpdate::SizeConstraintSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_sizeConstraintHasBeenSet(false)
{
}

SizeConstraintSetUpdate::SizeConstraintSetUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_sizeConstraintHasBeenSet(false)
{
  *this = jsonValue;
}

SizeConstraintSetUpdate& SizeConstraintSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeConstraint"))
  {
    m_sizeConstraint = jsonValue.GetObject("SizeConstraint");

    m_sizeConstraintHasBeenSet = true;
  }

  return *this;
}

JsonValue SizeConstraintSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_sizeConstraintHasBeenSet)
  {
   payload.WithObject("SizeConstraint", m_sizeConstraint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
