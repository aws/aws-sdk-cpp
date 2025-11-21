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
enum class ResponsibilityTransferType { NOT_SET, BILLING };

namespace ResponsibilityTransferTypeMapper {
AWS_ORGANIZATIONS_API ResponsibilityTransferType GetResponsibilityTransferTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForResponsibilityTransferType(ResponsibilityTransferType value);
}  // namespace ResponsibilityTransferTypeMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
