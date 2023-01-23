/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SignatureValidityPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SignatureValidityPeriod::SignatureValidityPeriod() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_type(ValidityType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SignatureValidityPeriod::SignatureValidityPeriod(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_type(ValidityType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SignatureValidityPeriod& SignatureValidityPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ValidityTypeMapper::GetValidityTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SignatureValidityPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ValidityTypeMapper::GetNameForValidityType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
