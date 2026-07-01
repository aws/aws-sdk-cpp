/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/SignalType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace SignalTypeMapper {

static const int LOG_HASH = HashingUtils::HashString("LOG");
static const int METRIC_HASH = HashingUtils::HashString("METRIC");

SignalType GetSignalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOG_HASH) {
    return SignalType::LOG;
  } else if (hashCode == METRIC_HASH) {
    return SignalType::METRIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalType>(hashCode);
  }

  return SignalType::NOT_SET;
}

Aws::String GetNameForSignalType(SignalType enumValue) {
  switch (enumValue) {
    case SignalType::NOT_SET:
      return {};
    case SignalType::LOG:
      return "LOG";
    case SignalType::METRIC:
      return "METRIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
