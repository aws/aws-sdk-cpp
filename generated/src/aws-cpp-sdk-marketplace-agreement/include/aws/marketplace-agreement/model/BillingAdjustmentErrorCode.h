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
enum class BillingAdjustmentErrorCode { NOT_SET, CONFLICT_EXCEPTION, VALIDATION_EXCEPTION, RESOURCE_NOT_FOUND_EXCEPTION, INTERNAL_FAILURE };

namespace BillingAdjustmentErrorCodeMapper {
AWS_AGREEMENTSERVICE_API BillingAdjustmentErrorCode GetBillingAdjustmentErrorCodeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForBillingAdjustmentErrorCode(BillingAdjustmentErrorCode value);
}  // namespace BillingAdjustmentErrorCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
