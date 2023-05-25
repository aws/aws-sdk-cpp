/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/Field.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

Field::Field() : 
    m_isNull(false),
    m_isNullHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_blobValueHasBeenSet(false),
    m_arrayValueHasBeenSet(false)
{
}

Field::Field(JsonView jsonValue) : 
    m_isNull(false),
    m_isNullHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_blobValueHasBeenSet(false),
    m_arrayValueHasBeenSet(false)
{
  *this = jsonValue;
}

Field& Field::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isNull"))
  {
    m_isNull = jsonValue.GetBool("isNull");

    m_isNullHasBeenSet = true;
  }

  if(jsonValue.ValueExists("booleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("booleanValue");

    m_booleanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longValue"))
  {
    m_longValue = jsonValue.GetInt64("longValue");

    m_longValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("doubleValue");

    m_doubleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blobValue"))
  {
    m_blobValue = HashingUtils::Base64Decode(jsonValue.GetString("blobValue"));
    m_blobValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arrayValue"))
  {
    m_arrayValue = jsonValue.GetObject("arrayValue");

    m_arrayValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Field::Jsonize() const
{
  JsonValue payload;

  if(m_isNullHasBeenSet)
  {
   payload.WithBool("isNull", m_isNull);

  }

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("booleanValue", m_booleanValue);

  }

  if(m_longValueHasBeenSet)
  {
   payload.WithInt64("longValue", m_longValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_blobValueHasBeenSet)
  {
   payload.WithString("blobValue", HashingUtils::Base64Encode(m_blobValue));
  }

  if(m_arrayValueHasBeenSet)
  {
   payload.WithObject("arrayValue", m_arrayValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
