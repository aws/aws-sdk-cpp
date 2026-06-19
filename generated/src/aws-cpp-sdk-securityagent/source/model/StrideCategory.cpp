/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/StrideCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace StrideCategoryMapper {

static const int SPOOFING_HASH = HashingUtils::HashString("SPOOFING");
static const int TAMPERING_HASH = HashingUtils::HashString("TAMPERING");
static const int REPUDIATION_HASH = HashingUtils::HashString("REPUDIATION");
static const int INFORMATION_DISCLOSURE_HASH = HashingUtils::HashString("INFORMATION_DISCLOSURE");
static const int DENIAL_OF_SERVICE_HASH = HashingUtils::HashString("DENIAL_OF_SERVICE");
static const int ELEVATION_OF_PRIVILEGE_HASH = HashingUtils::HashString("ELEVATION_OF_PRIVILEGE");

StrideCategory GetStrideCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SPOOFING_HASH) {
    return StrideCategory::SPOOFING;
  } else if (hashCode == TAMPERING_HASH) {
    return StrideCategory::TAMPERING;
  } else if (hashCode == REPUDIATION_HASH) {
    return StrideCategory::REPUDIATION;
  } else if (hashCode == INFORMATION_DISCLOSURE_HASH) {
    return StrideCategory::INFORMATION_DISCLOSURE;
  } else if (hashCode == DENIAL_OF_SERVICE_HASH) {
    return StrideCategory::DENIAL_OF_SERVICE;
  } else if (hashCode == ELEVATION_OF_PRIVILEGE_HASH) {
    return StrideCategory::ELEVATION_OF_PRIVILEGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StrideCategory>(hashCode);
  }

  return StrideCategory::NOT_SET;
}

Aws::String GetNameForStrideCategory(StrideCategory enumValue) {
  switch (enumValue) {
    case StrideCategory::NOT_SET:
      return {};
    case StrideCategory::SPOOFING:
      return "SPOOFING";
    case StrideCategory::TAMPERING:
      return "TAMPERING";
    case StrideCategory::REPUDIATION:
      return "REPUDIATION";
    case StrideCategory::INFORMATION_DISCLOSURE:
      return "INFORMATION_DISCLOSURE";
    case StrideCategory::DENIAL_OF_SERVICE:
      return "DENIAL_OF_SERVICE";
    case StrideCategory::ELEVATION_OF_PRIVILEGE:
      return "ELEVATION_OF_PRIVILEGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StrideCategoryMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
