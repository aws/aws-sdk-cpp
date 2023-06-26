/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/SqlParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

SqlParameter::SqlParameter() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHint(TypeHint::NOT_SET),
    m_typeHintHasBeenSet(false)
{
}

SqlParameter::SqlParameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHint(TypeHint::NOT_SET),
    m_typeHintHasBeenSet(false)
{
  *this = jsonValue;
}

SqlParameter& SqlParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("typeHint"))
  {
    m_typeHint = TypeHintMapper::GetTypeHintForName(jsonValue.GetString("typeHint"));

    m_typeHintHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlParameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_typeHintHasBeenSet)
  {
   payload.WithString("typeHint", TypeHintMapper::GetNameForTypeHint(m_typeHint));
  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
