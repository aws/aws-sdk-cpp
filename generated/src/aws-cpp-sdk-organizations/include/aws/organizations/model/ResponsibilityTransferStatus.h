/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>

namespace Aws {
namespace Organizations {
namespace Model {
enum class ResponsibilityTransferStatus { NOT_SET, REQUESTED, DECLINED, CANCELED, EXPIRED, ACCEPTED, WITHDRAWN };

namespace ResponsibilityTransferStatusMapper {
AWS_ORGANIZATIONS_API ResponsibilityTransferStatus GetResponsibilityTransferStatusForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForResponsibilityTransferStatus(ResponsibilityTransferStatus value);
}  // namespace ResponsibilityTransferStatusMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
