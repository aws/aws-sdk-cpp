/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SpanTextValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SpanTextValue::SpanTextValue(JsonView jsonValue) { *this = jsonValue; }

SpanTextValue& SpanTextValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("citations")) {
    Aws::Utils::Array<JsonView> citationsJsonList = jsonValue.GetArray("citations");
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      m_citations.push_back(citationsJsonList[citationsIndex].AsObject());
    }
    m_citationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiGuardrailAssessment")) {
    m_aiGuardrailAssessment = jsonValue.GetObject("aiGuardrailAssessment");
    m_aiGuardrailAssessmentHasBeenSet = true;
  }
  return *this;
}

JsonValue SpanTextValue::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_citationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> citationsJsonList(m_citations.size());
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      citationsJsonList[citationsIndex].AsObject(m_citations[citationsIndex].Jsonize());
    }
    payload.WithArray("citations", std::move(citationsJsonList));
  }

  if (m_aiGuardrailAssessmentHasBeenSet) {
    payload.WithObject("aiGuardrailAssessment", m_aiGuardrailAssessment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
