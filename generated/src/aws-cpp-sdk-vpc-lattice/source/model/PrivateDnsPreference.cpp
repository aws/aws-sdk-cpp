/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/vpc-lattice/model/PrivateDnsPreference.h>

using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {
namespace PrivateDnsPreferenceMapper {

static const int VERIFIED_DOMAINS_ONLY_HASH = HashingUtils::HashString("VERIFIED_DOMAINS_ONLY");
static const int ALL_DOMAINS_HASH = HashingUtils::HashString("ALL_DOMAINS");
static const int VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS_HASH = HashingUtils::HashString("VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS");
static const int SPECIFIED_DOMAINS_ONLY_HASH = HashingUtils::HashString("SPECIFIED_DOMAINS_ONLY");

PrivateDnsPreference GetPrivateDnsPreferenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VERIFIED_DOMAINS_ONLY_HASH) {
    return PrivateDnsPreference::VERIFIED_DOMAINS_ONLY;
  } else if (hashCode == ALL_DOMAINS_HASH) {
    return PrivateDnsPreference::ALL_DOMAINS;
  } else if (hashCode == VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS_HASH) {
    return PrivateDnsPreference::VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS;
  } else if (hashCode == SPECIFIED_DOMAINS_ONLY_HASH) {
    return PrivateDnsPreference::SPECIFIED_DOMAINS_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PrivateDnsPreference>(hashCode);
  }

  return PrivateDnsPreference::NOT_SET;
}

Aws::String GetNameForPrivateDnsPreference(PrivateDnsPreference enumValue) {
  switch (enumValue) {
    case PrivateDnsPreference::NOT_SET:
      return {};
    case PrivateDnsPreference::VERIFIED_DOMAINS_ONLY:
      return "VERIFIED_DOMAINS_ONLY";
    case PrivateDnsPreference::ALL_DOMAINS:
      return "ALL_DOMAINS";
    case PrivateDnsPreference::VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS:
      return "VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS";
    case PrivateDnsPreference::SPECIFIED_DOMAINS_ONLY:
      return "SPECIFIED_DOMAINS_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PrivateDnsPreferenceMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
