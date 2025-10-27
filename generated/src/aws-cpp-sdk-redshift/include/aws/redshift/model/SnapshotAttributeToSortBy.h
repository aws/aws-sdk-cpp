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
enum class SnapshotAttributeToSortBy { NOT_SET, SOURCE_TYPE, TOTAL_SIZE, CREATE_TIME };

namespace SnapshotAttributeToSortByMapper {
AWS_REDSHIFT_API SnapshotAttributeToSortBy GetSnapshotAttributeToSortByForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForSnapshotAttributeToSortBy(SnapshotAttributeToSortBy value);
}  // namespace SnapshotAttributeToSortByMapper
}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
