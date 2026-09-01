/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/IdentityCertificateStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace IdentityCertificateStatusMapper {

static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int DEPROVISIONING_HASH = HashingUtils::HashString("DEPROVISIONING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

IdentityCertificateStatus GetIdentityCertificateStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROVISIONING_HASH) {
    return IdentityCertificateStatus::PROVISIONING;
  } else if (hashCode == INACTIVE_HASH) {
    return IdentityCertificateStatus::INACTIVE;
  } else if (hashCode == DEPROVISIONING_HASH) {
    return IdentityCertificateStatus::DEPROVISIONING;
  } else if (hashCode == ACTIVE_HASH) {
    return IdentityCertificateStatus::ACTIVE;
  } else if (hashCode == FAILED_HASH) {
    return IdentityCertificateStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdentityCertificateStatus>(hashCode);
  }

  return IdentityCertificateStatus::NOT_SET;
}

Aws::String GetNameForIdentityCertificateStatus(IdentityCertificateStatus enumValue) {
  switch (enumValue) {
    case IdentityCertificateStatus::NOT_SET:
      return {};
    case IdentityCertificateStatus::PROVISIONING:
      return "PROVISIONING";
    case IdentityCertificateStatus::INACTIVE:
      return "INACTIVE";
    case IdentityCertificateStatus::DEPROVISIONING:
      return "DEPROVISIONING";
    case IdentityCertificateStatus::ACTIVE:
      return "ACTIVE";
    case IdentityCertificateStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdentityCertificateStatusMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
