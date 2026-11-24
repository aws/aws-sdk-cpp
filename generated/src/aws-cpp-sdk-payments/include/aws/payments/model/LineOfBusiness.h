/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
namespace Model {
enum class LineOfBusiness { NOT_SET, AWS_CLOUD_SERVICES, PROSERVE_MARKETING_AND_TRAINING, AWS_MARKETPLACE };

namespace LineOfBusinessMapper {
AWS_PAYMENTS_API LineOfBusiness GetLineOfBusinessForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForLineOfBusiness(LineOfBusiness value);
}  // namespace LineOfBusinessMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
