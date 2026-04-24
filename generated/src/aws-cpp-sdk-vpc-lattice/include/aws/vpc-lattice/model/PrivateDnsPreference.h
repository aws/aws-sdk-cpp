/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

namespace Aws {
namespace VPCLattice {
namespace Model {
enum class PrivateDnsPreference {
  NOT_SET,
  VERIFIED_DOMAINS_ONLY,
  ALL_DOMAINS,
  VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS,
  SPECIFIED_DOMAINS_ONLY
};

namespace PrivateDnsPreferenceMapper {
AWS_VPCLATTICE_API PrivateDnsPreference GetPrivateDnsPreferenceForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForPrivateDnsPreference(PrivateDnsPreference value);
}  // namespace PrivateDnsPreferenceMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
