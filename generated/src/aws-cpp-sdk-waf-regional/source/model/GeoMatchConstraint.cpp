/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GeoMatchConstraint.h>
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

GeoMatchConstraint::GeoMatchConstraint() : 
    m_type(GeoMatchConstraintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(GeoMatchConstraintValue::NOT_SET),
    m_valueHasBeenSet(false)
{
}

GeoMatchConstraint::GeoMatchConstraint(JsonView jsonValue) : 
    m_type(GeoMatchConstraintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(GeoMatchConstraintValue::NOT_SET),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchConstraint& GeoMatchConstraint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = GeoMatchConstraintTypeMapper::GetGeoMatchConstraintTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = GeoMatchConstraintValueMapper::GetGeoMatchConstraintValueForName(jsonValue.GetString("Value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoMatchConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", GeoMatchConstraintTypeMapper::GetNameForGeoMatchConstraintType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", GeoMatchConstraintValueMapper::GetNameForGeoMatchConstraintValue(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
