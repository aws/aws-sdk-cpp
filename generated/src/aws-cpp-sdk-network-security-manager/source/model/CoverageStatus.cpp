/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/CoverageStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace CoverageStatusMapper {

static const int IN_EFFECT_HASH = HashingUtils::HashString("IN_EFFECT");
static const int SUPERSEDED_HASH = HashingUtils::HashString("SUPERSEDED");

CoverageStatus GetCoverageStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_EFFECT_HASH) {
    return CoverageStatus::IN_EFFECT;
  } else if (hashCode == SUPERSEDED_HASH) {
    return CoverageStatus::SUPERSEDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CoverageStatus>(hashCode);
  }

  return CoverageStatus::NOT_SET;
}

Aws::String GetNameForCoverageStatus(CoverageStatus enumValue) {
  switch (enumValue) {
    case CoverageStatus::NOT_SET:
      return {};
    case CoverageStatus::IN_EFFECT:
      return "IN_EFFECT";
    case CoverageStatus::SUPERSEDED:
      return "SUPERSEDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CoverageStatusMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
