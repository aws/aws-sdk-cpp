/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/QuoteConstraint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

QuoteConstraint::QuoteConstraint(JsonView jsonValue) { *this = jsonValue; }

QuoteConstraint& QuoteConstraint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuoteConstraintType")) {
    m_quoteConstraintType = QuoteConstraintTypeMapper::GetQuoteConstraintTypeForName(jsonValue.GetString("QuoteConstraintType"));
    m_quoteConstraintTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue QuoteConstraint::Jsonize() const {
  JsonValue payload;

  if (m_quoteConstraintTypeHasBeenSet) {
    payload.WithString("QuoteConstraintType", QuoteConstraintTypeMapper::GetNameForQuoteConstraintType(m_quoteConstraintType));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
