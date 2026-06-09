/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ColumnSemanticProperty.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ColumnSemanticProperty::ColumnSemanticProperty(JsonView jsonValue) { *this = jsonValue; }

ColumnSemanticProperty& ColumnSemanticProperty::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetObject("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalNotes")) {
    m_additionalNotes = jsonValue.GetObject("AdditionalNotes");
    m_additionalNotesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SemanticType")) {
    m_semanticType = jsonValue.GetObject("SemanticType");
    m_semanticTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ColumnSemanticProperty::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithObject("Description", m_description.Jsonize());
  }

  if (m_additionalNotesHasBeenSet) {
    payload.WithObject("AdditionalNotes", m_additionalNotes.Jsonize());
  }

  if (m_semanticTypeHasBeenSet) {
    payload.WithObject("SemanticType", m_semanticType.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
