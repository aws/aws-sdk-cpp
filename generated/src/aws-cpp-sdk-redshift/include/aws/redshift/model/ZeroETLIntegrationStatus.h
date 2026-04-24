/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/Redshift_EXPORTS.h>

namespace Aws {
namespace Redshift {
namespace Model {
enum class ZeroETLIntegrationStatus { NOT_SET, creating, active, modifying, failed, deleting, syncing, needs_attention };

namespace ZeroETLIntegrationStatusMapper {
AWS_REDSHIFT_API ZeroETLIntegrationStatus GetZeroETLIntegrationStatusForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForZeroETLIntegrationStatus(ZeroETLIntegrationStatus value);
}  // namespace ZeroETLIntegrationStatusMapper
}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
