/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class SourceEnvironment { NOT_SET, NSX, VSPHERE, FORTIGATE_FIREWALL, PALO_ALTO_FIREWALL, CISCO_ACI, LOGICAL_MODEL, MODELIZE_IT };

namespace SourceEnvironmentMapper {
AWS_MGN_API SourceEnvironment GetSourceEnvironmentForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForSourceEnvironment(SourceEnvironment value);
}  // namespace SourceEnvironmentMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
