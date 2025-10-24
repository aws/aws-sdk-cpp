﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/Status.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace StatusMapper {

static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

Status GetStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_IN_PROGRESS_HASH) {
    return Status::CREATE_IN_PROGRESS;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return Status::CREATE_FAILED;
  } else if (hashCode == ACTIVE_HASH) {
    return Status::ACTIVE;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return Status::DELETE_IN_PROGRESS;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return Status::DELETE_FAILED;
  } else if (hashCode == DELETED_HASH) {
    return Status::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Status>(hashCode);
  }

  return Status::NOT_SET;
}

Aws::String GetNameForStatus(Status enumValue) {
  switch (enumValue) {
    case Status::NOT_SET:
      return {};
    case Status::CREATE_IN_PROGRESS:
      return "CREATE_IN_PROGRESS";
    case Status::CREATE_FAILED:
      return "CREATE_FAILED";
    case Status::ACTIVE:
      return "ACTIVE";
    case Status::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    case Status::DELETE_FAILED:
      return "DELETE_FAILED";
    case Status::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
