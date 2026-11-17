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
enum class OutpostSnapshotLocation { NOT_SET, OUTPOST, REGION };

namespace OutpostSnapshotLocationMapper {
AWS_MGN_API OutpostSnapshotLocation GetOutpostSnapshotLocationForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForOutpostSnapshotLocation(OutpostSnapshotLocation value);
}  // namespace OutpostSnapshotLocationMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
