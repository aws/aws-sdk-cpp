/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/SizeConstraint.h>
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

SizeConstraint::SizeConstraint() : 
    m_fieldToMatchHasBeenSet(false),
    m_textTransformation(TextTransformation::NOT_SET),
    m_textTransformationHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

SizeConstraint::SizeConstraint(JsonView jsonValue) : 
    m_fieldToMatchHasBeenSet(false),
    m_textTransformation(TextTransformation::NOT_SET),
    m_textTransformationHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

SizeConstraint& SizeConstraint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldToMatch"))
  {
    m_fieldToMatch = jsonValue.GetObject("FieldToMatch");

    m_fieldToMatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextTransformation"))
  {
    m_textTransformation = TextTransformationMapper::GetTextTransformationForName(jsonValue.GetString("TextTransformation"));

    m_textTransformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue SizeConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_fieldToMatchHasBeenSet)
  {
   payload.WithObject("FieldToMatch", m_fieldToMatch.Jsonize());

  }

  if(m_textTransformationHasBeenSet)
  {
   payload.WithString("TextTransformation", TextTransformationMapper::GetNameForTextTransformation(m_textTransformation));
  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
