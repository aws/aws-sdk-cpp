/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/secretsmanager/model/StatusType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecretsManager {
namespace Model {
namespace StatusTypeMapper {

static const int InSync_HASH = HashingUtils::HashString("InSync");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Detached_HASH = HashingUtils::HashString("Detached");

StatusType GetStatusTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InSync_HASH) {
    return StatusType::InSync;
  } else if (hashCode == Failed_HASH) {
    return StatusType::Failed;
  } else if (hashCode == InProgress_HASH) {
    return StatusType::InProgress;
  } else if (hashCode == Pending_HASH) {
    return StatusType::Pending;
  } else if (hashCode == Detached_HASH) {
    return StatusType::Detached;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StatusType>(hashCode);
  }

  return StatusType::NOT_SET;
}

Aws::String GetNameForStatusType(StatusType enumValue) {
  switch (enumValue) {
    case StatusType::NOT_SET:
      return {};
    case StatusType::InSync:
      return "InSync";
    case StatusType::Failed:
      return "Failed";
    case StatusType::InProgress:
      return "InProgress";
    case StatusType::Pending:
      return "Pending";
    case StatusType::Detached:
      return "Detached";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatusTypeMapper
}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
