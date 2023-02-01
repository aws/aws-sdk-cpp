/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ByteMatchTuple.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

ByteMatchTuple::ByteMatchTuple() : 
    m_fieldToMatchHasBeenSet(false),
    m_targetStringHasBeenSet(false),
    m_textTransformation(TextTransformation::NOT_SET),
    m_textTransformationHasBeenSet(false),
    m_positionalConstraint(PositionalConstraint::NOT_SET),
    m_positionalConstraintHasBeenSet(false)
{
}

ByteMatchTuple::ByteMatchTuple(JsonView jsonValue) : 
    m_fieldToMatchHasBeenSet(false),
    m_targetStringHasBeenSet(false),
    m_textTransformation(TextTransformation::NOT_SET),
    m_textTransformationHasBeenSet(false),
    m_positionalConstraint(PositionalConstraint::NOT_SET),
    m_positionalConstraintHasBeenSet(false)
{
  *this = jsonValue;
}

ByteMatchTuple& ByteMatchTuple::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldToMatch"))
  {
    m_fieldToMatch = jsonValue.GetObject("FieldToMatch");

    m_fieldToMatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetString"))
  {
    m_targetString = HashingUtils::Base64Decode(jsonValue.GetString("TargetString"));
    m_targetStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextTransformation"))
  {
    m_textTransformation = TextTransformationMapper::GetTextTransformationForName(jsonValue.GetString("TextTransformation"));

    m_textTransformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PositionalConstraint"))
  {
    m_positionalConstraint = PositionalConstraintMapper::GetPositionalConstraintForName(jsonValue.GetString("PositionalConstraint"));

    m_positionalConstraintHasBeenSet = true;
  }

  return *this;
}

JsonValue ByteMatchTuple::Jsonize() const
{
  JsonValue payload;

  if(m_fieldToMatchHasBeenSet)
  {
   payload.WithObject("FieldToMatch", m_fieldToMatch.Jsonize());

  }

  if(m_targetStringHasBeenSet)
  {
   payload.WithString("TargetString", HashingUtils::Base64Encode(m_targetString));
  }

  if(m_textTransformationHasBeenSet)
  {
   payload.WithString("TextTransformation", TextTransformationMapper::GetNameForTextTransformation(m_textTransformation));
  }

  if(m_positionalConstraintHasBeenSet)
  {
   payload.WithString("PositionalConstraint", PositionalConstraintMapper::GetNameForPositionalConstraint(m_positionalConstraint));
  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
