/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nova-act/model/TraceLocationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {
namespace TraceLocationTypeMapper {

static const int S3_HASH = HashingUtils::HashString("S3");

TraceLocationType GetTraceLocationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == S3_HASH) {
    return TraceLocationType::S3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TraceLocationType>(hashCode);
  }

  return TraceLocationType::NOT_SET;
}

Aws::String GetNameForTraceLocationType(TraceLocationType enumValue) {
  switch (enumValue) {
    case TraceLocationType::NOT_SET:
      return {};
    case TraceLocationType::S3:
      return "S3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TraceLocationTypeMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
