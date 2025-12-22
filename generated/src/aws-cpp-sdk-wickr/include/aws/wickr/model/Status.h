/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Wickr {
namespace Model {
enum class Status { NOT_SET, DISABLED, ENABLED, FORCE_ENABLED };

namespace StatusMapper {
AWS_WICKR_API Status GetStatusForName(const Aws::String& name);

AWS_WICKR_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
