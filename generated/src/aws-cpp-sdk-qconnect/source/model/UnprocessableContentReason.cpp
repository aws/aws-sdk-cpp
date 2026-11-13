/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/UnprocessableContentReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace UnprocessableContentReasonMapper {

static const int ORCHESTRATION_ERROR_HASH = HashingUtils::HashString("ORCHESTRATION_ERROR");
static const int AI_INFERENCE_MODEL_UNAVAILABLE_HASH = HashingUtils::HashString("AI_INFERENCE_MODEL_UNAVAILABLE");

UnprocessableContentReason GetUnprocessableContentReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ORCHESTRATION_ERROR_HASH) {
    return UnprocessableContentReason::ORCHESTRATION_ERROR;
  } else if (hashCode == AI_INFERENCE_MODEL_UNAVAILABLE_HASH) {
    return UnprocessableContentReason::AI_INFERENCE_MODEL_UNAVAILABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UnprocessableContentReason>(hashCode);
  }

  return UnprocessableContentReason::NOT_SET;
}

Aws::String GetNameForUnprocessableContentReason(UnprocessableContentReason enumValue) {
  switch (enumValue) {
    case UnprocessableContentReason::NOT_SET:
      return {};
    case UnprocessableContentReason::ORCHESTRATION_ERROR:
      return "ORCHESTRATION_ERROR";
    case UnprocessableContentReason::AI_INFERENCE_MODEL_UNAVAILABLE:
      return "AI_INFERENCE_MODEL_UNAVAILABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UnprocessableContentReasonMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
