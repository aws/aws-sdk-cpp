/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/CredentialStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace CredentialStatusMapper {

static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
static const int AUTH_FAILED_HASH = HashingUtils::HashString("AUTH_FAILED");
static const int NOT_VERIFIED_HASH = HashingUtils::HashString("NOT_VERIFIED");

CredentialStatus GetCredentialStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONNECTED_HASH) {
    return CredentialStatus::CONNECTED;
  } else if (hashCode == AUTH_FAILED_HASH) {
    return CredentialStatus::AUTH_FAILED;
  } else if (hashCode == NOT_VERIFIED_HASH) {
    return CredentialStatus::NOT_VERIFIED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CredentialStatus>(hashCode);
  }

  return CredentialStatus::NOT_SET;
}

Aws::String GetNameForCredentialStatus(CredentialStatus enumValue) {
  switch (enumValue) {
    case CredentialStatus::NOT_SET:
      return {};
    case CredentialStatus::CONNECTED:
      return "CONNECTED";
    case CredentialStatus::AUTH_FAILED:
      return "AUTH_FAILED";
    case CredentialStatus::NOT_VERIFIED:
      return "NOT_VERIFIED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CredentialStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
