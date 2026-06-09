/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AdditionalNotes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AdditionalNotes::AdditionalNotes(JsonView jsonValue) { *this = jsonValue; }

AdditionalNotes& AdditionalNotes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalNotes::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("Text", m_text);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
