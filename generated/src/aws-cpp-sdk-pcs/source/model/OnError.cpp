/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/OnError.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace OnErrorMapper {

static const int TERMINATE_HASH = HashingUtils::HashString("TERMINATE");
static const int STOP_SEQUENCE_HASH = HashingUtils::HashString("STOP_SEQUENCE");
static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");

OnError GetOnErrorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TERMINATE_HASH) {
    return OnError::TERMINATE;
  } else if (hashCode == STOP_SEQUENCE_HASH) {
    return OnError::STOP_SEQUENCE;
  } else if (hashCode == CONTINUE_HASH) {
    return OnError::CONTINUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnError>(hashCode);
  }

  return OnError::NOT_SET;
}

Aws::String GetNameForOnError(OnError enumValue) {
  switch (enumValue) {
    case OnError::NOT_SET:
      return {};
    case OnError::TERMINATE:
      return "TERMINATE";
    case OnError::STOP_SEQUENCE:
      return "STOP_SEQUENCE";
    case OnError::CONTINUE:
      return "CONTINUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnErrorMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
