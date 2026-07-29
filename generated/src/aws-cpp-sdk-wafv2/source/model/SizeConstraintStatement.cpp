/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/SizeConstraintStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

SizeConstraintStatement::SizeConstraintStatement(JsonView jsonValue) { *this = jsonValue; }

SizeConstraintStatement& SizeConstraintStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldToMatch")) {
    m_fieldToMatch = jsonValue.GetObject("FieldToMatch");
    m_fieldToMatchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComparisonOperator")) {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));
    m_comparisonOperatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Size")) {
    m_size = jsonValue.GetInt64("Size");
    m_sizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextTransformations")) {
    Aws::Utils::Array<JsonView> textTransformationsJsonList = jsonValue.GetArray("TextTransformations");
    for (unsigned textTransformationsIndex = 0; textTransformationsIndex < textTransformationsJsonList.GetLength();
         ++textTransformationsIndex) {
      m_textTransformations.push_back(textTransformationsJsonList[textTransformationsIndex].AsObject());
    }
    m_textTransformationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PreParseTextTransformations")) {
    Aws::Utils::Array<JsonView> preParseTextTransformationsJsonList = jsonValue.GetArray("PreParseTextTransformations");
    for (unsigned preParseTextTransformationsIndex = 0; preParseTextTransformationsIndex < preParseTextTransformationsJsonList.GetLength();
         ++preParseTextTransformationsIndex) {
      m_preParseTextTransformations.push_back(preParseTextTransformationsJsonList[preParseTextTransformationsIndex].AsObject());
    }
    m_preParseTextTransformationsHasBeenSet = true;
  }
  return *this;
}

JsonValue SizeConstraintStatement::Jsonize() const {
  JsonValue payload;

  if (m_fieldToMatchHasBeenSet) {
    payload.WithObject("FieldToMatch", m_fieldToMatch.Jsonize());
  }

  if (m_comparisonOperatorHasBeenSet) {
    payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if (m_sizeHasBeenSet) {
    payload.WithInt64("Size", m_size);
  }

  if (m_textTransformationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> textTransformationsJsonList(m_textTransformations.size());
    for (unsigned textTransformationsIndex = 0; textTransformationsIndex < textTransformationsJsonList.GetLength();
         ++textTransformationsIndex) {
      textTransformationsJsonList[textTransformationsIndex].AsObject(m_textTransformations[textTransformationsIndex].Jsonize());
    }
    payload.WithArray("TextTransformations", std::move(textTransformationsJsonList));
  }

  if (m_preParseTextTransformationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> preParseTextTransformationsJsonList(m_preParseTextTransformations.size());
    for (unsigned preParseTextTransformationsIndex = 0; preParseTextTransformationsIndex < preParseTextTransformationsJsonList.GetLength();
         ++preParseTextTransformationsIndex) {
      preParseTextTransformationsJsonList[preParseTextTransformationsIndex].AsObject(
          m_preParseTextTransformations[preParseTextTransformationsIndex].Jsonize());
    }
    payload.WithArray("PreParseTextTransformations", std::move(preParseTextTransformationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
