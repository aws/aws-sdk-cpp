/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/InlineCustomInstruction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

InlineCustomInstruction::InlineCustomInstruction(JsonView jsonValue) { *this = jsonValue; }

InlineCustomInstruction& InlineCustomInstruction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstructionText")) {
    m_instructionText = jsonValue.GetString("InstructionText");
    m_instructionTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UploadedDocumentMetadata")) {
    m_uploadedDocumentMetadata = jsonValue.GetObject("UploadedDocumentMetadata");
    m_uploadedDocumentMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineCustomInstruction::Jsonize() const {
  JsonValue payload;

  if (m_instructionTextHasBeenSet) {
    payload.WithString("InstructionText", m_instructionText);
  }

  if (m_uploadedDocumentMetadataHasBeenSet) {
    payload.WithObject("UploadedDocumentMetadata", m_uploadedDocumentMetadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
