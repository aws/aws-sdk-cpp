/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mpa/model/ApproverLastActivity.h>

using namespace Aws::Utils;

namespace Aws {
namespace MPA {
namespace Model {
namespace ApproverLastActivityMapper {

static const int VOTED_HASH = HashingUtils::HashString("VOTED");
static const int BASELINED_HASH = HashingUtils::HashString("BASELINED");
static const int RESPONDED_TO_INVITATION_HASH = HashingUtils::HashString("RESPONDED_TO_INVITATION");

ApproverLastActivity GetApproverLastActivityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VOTED_HASH) {
    return ApproverLastActivity::VOTED;
  } else if (hashCode == BASELINED_HASH) {
    return ApproverLastActivity::BASELINED;
  } else if (hashCode == RESPONDED_TO_INVITATION_HASH) {
    return ApproverLastActivity::RESPONDED_TO_INVITATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApproverLastActivity>(hashCode);
  }

  return ApproverLastActivity::NOT_SET;
}

Aws::String GetNameForApproverLastActivity(ApproverLastActivity enumValue) {
  switch (enumValue) {
    case ApproverLastActivity::NOT_SET:
      return {};
    case ApproverLastActivity::VOTED:
      return "VOTED";
    case ApproverLastActivity::BASELINED:
      return "BASELINED";
    case ApproverLastActivity::RESPONDED_TO_INVITATION:
      return "RESPONDED_TO_INVITATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApproverLastActivityMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
