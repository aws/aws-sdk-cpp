/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/model/SubmissionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {
namespace SubmissionStatusMapper {

static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCEL_SUCCESS_HASH = HashingUtils::HashString("CANCEL_SUCCESS");
static const int CANCEL_FAILED_HASH = HashingUtils::HashString("CANCEL_FAILED");
static const int DELETE_SUCCESS_HASH = HashingUtils::HashString("DELETE_SUCCESS");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

SubmissionStatus GetSubmissionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCESS_HASH) {
    return SubmissionStatus::SUCCESS;
  } else if (hashCode == FAILED_HASH) {
    return SubmissionStatus::FAILED;
  } else if (hashCode == CANCEL_SUCCESS_HASH) {
    return SubmissionStatus::CANCEL_SUCCESS;
  } else if (hashCode == CANCEL_FAILED_HASH) {
    return SubmissionStatus::CANCEL_FAILED;
  } else if (hashCode == DELETE_SUCCESS_HASH) {
    return SubmissionStatus::DELETE_SUCCESS;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return SubmissionStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubmissionStatus>(hashCode);
  }

  return SubmissionStatus::NOT_SET;
}

Aws::String GetNameForSubmissionStatus(SubmissionStatus enumValue) {
  switch (enumValue) {
    case SubmissionStatus::NOT_SET:
      return {};
    case SubmissionStatus::SUCCESS:
      return "SUCCESS";
    case SubmissionStatus::FAILED:
      return "FAILED";
    case SubmissionStatus::CANCEL_SUCCESS:
      return "CANCEL_SUCCESS";
    case SubmissionStatus::CANCEL_FAILED:
      return "CANCEL_FAILED";
    case SubmissionStatus::DELETE_SUCCESS:
      return "DELETE_SUCCESS";
    case SubmissionStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubmissionStatusMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
