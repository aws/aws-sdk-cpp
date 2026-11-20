/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-gateway-runtime/model/StreamErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {
namespace StreamErrorCodeMapper {

static const int StreamBroken_HASH = HashingUtils::HashString("StreamBroken");
static const int ModelInvocationTimeExceeded_HASH = HashingUtils::HashString("ModelInvocationTimeExceeded");

StreamErrorCode GetStreamErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == StreamBroken_HASH) {
    return StreamErrorCode::StreamBroken;
  } else if (hashCode == ModelInvocationTimeExceeded_HASH) {
    return StreamErrorCode::ModelInvocationTimeExceeded;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamErrorCode>(hashCode);
  }

  return StreamErrorCode::NOT_SET;
}

Aws::String GetNameForStreamErrorCode(StreamErrorCode enumValue) {
  switch (enumValue) {
    case StreamErrorCode::NOT_SET:
      return {};
    case StreamErrorCode::StreamBroken:
      return "StreamBroken";
    case StreamErrorCode::ModelInvocationTimeExceeded:
      return "ModelInvocationTimeExceeded";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamErrorCodeMapper
}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
