/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/Predicate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

Predicate::Predicate(JsonView jsonValue)
{
  *this = jsonValue;
}

Predicate& Predicate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Negated"))
  {
    m_negated = jsonValue.GetBool("Negated");
    m_negatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = PredicateTypeMapper::GetPredicateTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataId"))
  {
    m_dataId = jsonValue.GetString("DataId");
    m_dataIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Predicate::Jsonize() const
{
  JsonValue payload;

  if(m_negatedHasBeenSet)
  {
   payload.WithBool("Negated", m_negated);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PredicateTypeMapper::GetNameForPredicateType(m_type));
  }

  if(m_dataIdHasBeenSet)
  {
   payload.WithString("DataId", m_dataId);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
