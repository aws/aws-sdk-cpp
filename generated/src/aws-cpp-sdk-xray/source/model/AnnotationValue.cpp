/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/AnnotationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

AnnotationValue::AnnotationValue() : 
    m_numberValue(0.0),
    m_numberValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
}

AnnotationValue::AnnotationValue(JsonView jsonValue) : 
    m_numberValue(0.0),
    m_numberValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
  *this = jsonValue;
}

AnnotationValue& AnnotationValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberValue"))
  {
    m_numberValue = jsonValue.GetDouble("NumberValue");

    m_numberValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BooleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("BooleanValue");

    m_booleanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringValue"))
  {
    m_stringValue = jsonValue.GetString("StringValue");

    m_stringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue AnnotationValue::Jsonize() const
{
  JsonValue payload;

  if(m_numberValueHasBeenSet)
  {
   payload.WithDouble("NumberValue", m_numberValue);

  }

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("BooleanValue", m_booleanValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("StringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
