/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GeoMatchSetUpdate.h>
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

GeoMatchSetUpdate::GeoMatchSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_geoMatchConstraintHasBeenSet(false)
{
}

GeoMatchSetUpdate::GeoMatchSetUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_geoMatchConstraintHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchSetUpdate& GeoMatchSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeoMatchConstraint"))
  {
    m_geoMatchConstraint = jsonValue.GetObject("GeoMatchConstraint");

    m_geoMatchConstraintHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoMatchSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_geoMatchConstraintHasBeenSet)
  {
   payload.WithObject("GeoMatchConstraint", m_geoMatchConstraint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
