/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class RefreshableStatus { NOT_SET, REFRESHING, NOT_REFRESHING };

namespace RefreshableStatusMapper {
AWS_ODB_API RefreshableStatus GetRefreshableStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForRefreshableStatus(RefreshableStatus value);
}  // namespace RefreshableStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
