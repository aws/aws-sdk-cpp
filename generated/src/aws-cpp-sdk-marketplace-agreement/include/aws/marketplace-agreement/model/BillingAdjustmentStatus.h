/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Model {
enum class BillingAdjustmentStatus { NOT_SET, PENDING, VALIDATION_FAILED, COMPLETED };

namespace BillingAdjustmentStatusMapper {
AWS_AGREEMENTSERVICE_API BillingAdjustmentStatus GetBillingAdjustmentStatusForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForBillingAdjustmentStatus(BillingAdjustmentStatus value);
}  // namespace BillingAdjustmentStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
