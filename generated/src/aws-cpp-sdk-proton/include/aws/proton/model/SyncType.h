/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/Proton_EXPORTS.h>

namespace Aws {
namespace Proton {
namespace Model {
enum class SyncType { NOT_SET, TEMPLATE_SYNC, SERVICE_SYNC };

namespace SyncTypeMapper {
AWS_PROTON_API SyncType GetSyncTypeForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForSyncType(SyncType value);
}  // namespace SyncTypeMapper
}  // namespace Model
}  // namespace Proton
}  // namespace Aws
