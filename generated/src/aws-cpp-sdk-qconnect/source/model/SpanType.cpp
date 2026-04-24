/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/SpanType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace SpanTypeMapper {

static const int CLIENT_HASH = HashingUtils::HashString("CLIENT");
static const int SERVER_HASH = HashingUtils::HashString("SERVER");
static const int INTERNAL_HASH = HashingUtils::HashString("INTERNAL");

SpanType GetSpanTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_HASH) {
    return SpanType::CLIENT;
  } else if (hashCode == SERVER_HASH) {
    return SpanType::SERVER;
  } else if (hashCode == INTERNAL_HASH) {
    return SpanType::INTERNAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpanType>(hashCode);
  }

  return SpanType::NOT_SET;
}

Aws::String GetNameForSpanType(SpanType enumValue) {
  switch (enumValue) {
    case SpanType::NOT_SET:
      return {};
    case SpanType::CLIENT:
      return "CLIENT";
    case SpanType::SERVER:
      return "SERVER";
    case SpanType::INTERNAL:
      return "INTERNAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpanTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
