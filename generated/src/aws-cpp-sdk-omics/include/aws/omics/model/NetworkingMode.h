/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>

namespace Aws {
namespace Omics {
namespace Model {
enum class NetworkingMode { NOT_SET, RESTRICTED, VPC };

namespace NetworkingModeMapper {
AWS_OMICS_API NetworkingMode GetNetworkingModeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForNetworkingMode(NetworkingMode value);
}  // namespace NetworkingModeMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
