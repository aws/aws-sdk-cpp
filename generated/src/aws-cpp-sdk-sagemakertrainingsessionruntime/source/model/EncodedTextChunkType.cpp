/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemakertrainingsessionruntime/model/EncodedTextChunkType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {
namespace EncodedTextChunkTypeMapper {

static const int encoded_text_HASH = HashingUtils::HashString("encoded_text");

EncodedTextChunkType GetEncodedTextChunkTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == encoded_text_HASH) {
    return EncodedTextChunkType::encoded_text;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncodedTextChunkType>(hashCode);
  }

  return EncodedTextChunkType::NOT_SET;
}

Aws::String GetNameForEncodedTextChunkType(EncodedTextChunkType enumValue) {
  switch (enumValue) {
    case EncodedTextChunkType::NOT_SET:
      return {};
    case EncodedTextChunkType::encoded_text:
      return "encoded_text";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncodedTextChunkTypeMapper
}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
