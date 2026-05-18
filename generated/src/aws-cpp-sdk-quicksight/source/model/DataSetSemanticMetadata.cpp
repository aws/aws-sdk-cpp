/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetSemanticMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetSemanticMetadata::DataSetSemanticMetadata(JsonView jsonValue) { *this = jsonValue; }

DataSetSemanticMetadata& DataSetSemanticMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetObject("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomInstructions")) {
    Aws::Utils::Array<JsonView> customInstructionsJsonList = jsonValue.GetArray("CustomInstructions");
    for (unsigned customInstructionsIndex = 0; customInstructionsIndex < customInstructionsJsonList.GetLength();
         ++customInstructionsIndex) {
      m_customInstructions.push_back(customInstructionsJsonList[customInstructionsIndex].AsObject());
    }
    m_customInstructionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetSemanticMetadata::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithObject("Description", m_description.Jsonize());
  }

  if (m_customInstructionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> customInstructionsJsonList(m_customInstructions.size());
    for (unsigned customInstructionsIndex = 0; customInstructionsIndex < customInstructionsJsonList.GetLength();
         ++customInstructionsIndex) {
      customInstructionsJsonList[customInstructionsIndex].AsObject(m_customInstructions[customInstructionsIndex].Jsonize());
    }
    payload.WithArray("CustomInstructions", std::move(customInstructionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
