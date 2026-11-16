/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class OrganizationalReportState { NOT_SET, DISCOVERING, SNAPSHOTTING, AGGREGATING, COMPRESSING, COMPLETED, FAILED, DELETING };

namespace OrganizationalReportStateMapper {
AWS_WELLARCHITECTED_API OrganizationalReportState GetOrganizationalReportStateForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForOrganizationalReportState(OrganizationalReportState value);
}  // namespace OrganizationalReportStateMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
