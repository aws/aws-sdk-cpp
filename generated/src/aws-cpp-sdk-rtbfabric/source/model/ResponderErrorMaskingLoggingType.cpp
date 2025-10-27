/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/ResponderErrorMaskingLoggingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace ResponderErrorMaskingLoggingTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int METRIC_HASH = HashingUtils::HashString("METRIC");
static const int RESPONSE_HASH = HashingUtils::HashString("RESPONSE");

ResponderErrorMaskingLoggingType GetResponderErrorMaskingLoggingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return ResponderErrorMaskingLoggingType::NONE;
  } else if (hashCode == METRIC_HASH) {
    return ResponderErrorMaskingLoggingType::METRIC;
  } else if (hashCode == RESPONSE_HASH) {
    return ResponderErrorMaskingLoggingType::RESPONSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResponderErrorMaskingLoggingType>(hashCode);
  }

  return ResponderErrorMaskingLoggingType::NOT_SET;
}

Aws::String GetNameForResponderErrorMaskingLoggingType(ResponderErrorMaskingLoggingType enumValue) {
  switch (enumValue) {
    case ResponderErrorMaskingLoggingType::NOT_SET:
      return {};
    case ResponderErrorMaskingLoggingType::NONE:
      return "NONE";
    case ResponderErrorMaskingLoggingType::METRIC:
      return "METRIC";
    case ResponderErrorMaskingLoggingType::RESPONSE:
      return "RESPONSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResponderErrorMaskingLoggingTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
