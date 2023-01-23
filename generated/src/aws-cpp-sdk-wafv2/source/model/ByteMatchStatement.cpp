/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ByteMatchStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ByteMatchStatement::ByteMatchStatement() : 
    m_searchStringHasBeenSet(false),
    m_fieldToMatchHasBeenSet(false),
    m_textTransformationsHasBeenSet(false),
    m_positionalConstraint(PositionalConstraint::NOT_SET),
    m_positionalConstraintHasBeenSet(false)
{
}

ByteMatchStatement::ByteMatchStatement(JsonView jsonValue) : 
    m_searchStringHasBeenSet(false),
    m_fieldToMatchHasBeenSet(false),
    m_textTransformationsHasBeenSet(false),
    m_positionalConstraint(PositionalConstraint::NOT_SET),
    m_positionalConstraintHasBeenSet(false)
{
  *this = jsonValue;
}

ByteMatchStatement& ByteMatchStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SearchString"))
  {
    m_searchString = HashingUtils::Base64Decode(jsonValue.GetString("SearchString"));
    m_searchStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldToMatch"))
  {
    m_fieldToMatch = jsonValue.GetObject("FieldToMatch");

    m_fieldToMatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextTransformations"))
  {
    Aws::Utils::Array<JsonView> textTransformationsJsonList = jsonValue.GetArray("TextTransformations");
    for(unsigned textTransformationsIndex = 0; textTransformationsIndex < textTransformationsJsonList.GetLength(); ++textTransformationsIndex)
    {
      m_textTransformations.push_back(textTransformationsJsonList[textTransformationsIndex].AsObject());
    }
    m_textTransformationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PositionalConstraint"))
  {
    m_positionalConstraint = PositionalConstraintMapper::GetPositionalConstraintForName(jsonValue.GetString("PositionalConstraint"));

    m_positionalConstraintHasBeenSet = true;
  }

  return *this;
}

JsonValue ByteMatchStatement::Jsonize() const
{
  JsonValue payload;

  if(m_searchStringHasBeenSet)
  {
   payload.WithString("SearchString", HashingUtils::Base64Encode(m_searchString));
  }

  if(m_fieldToMatchHasBeenSet)
  {
   payload.WithObject("FieldToMatch", m_fieldToMatch.Jsonize());

  }

  if(m_textTransformationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textTransformationsJsonList(m_textTransformations.size());
   for(unsigned textTransformationsIndex = 0; textTransformationsIndex < textTransformationsJsonList.GetLength(); ++textTransformationsIndex)
   {
     textTransformationsJsonList[textTransformationsIndex].AsObject(m_textTransformations[textTransformationsIndex].Jsonize());
   }
   payload.WithArray("TextTransformations", std::move(textTransformationsJsonList));

  }

  if(m_positionalConstraintHasBeenSet)
  {
   payload.WithString("PositionalConstraint", PositionalConstraintMapper::GetNameForPositionalConstraint(m_positionalConstraint));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
