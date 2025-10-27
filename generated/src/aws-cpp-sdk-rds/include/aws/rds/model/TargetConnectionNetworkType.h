/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class TargetConnectionNetworkType { NOT_SET, IPV4, IPV6 };

namespace TargetConnectionNetworkTypeMapper {
AWS_RDS_API TargetConnectionNetworkType GetTargetConnectionNetworkTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForTargetConnectionNetworkType(TargetConnectionNetworkType value);
}  // namespace TargetConnectionNetworkTypeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
