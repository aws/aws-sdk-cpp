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
enum class Timing { NOT_SET, ON_ACCEPTANCE, SCHEDULED, BILLING_PERIOD, NOT_APPLICABLE };

namespace TimingMapper {
AWS_AGREEMENTSERVICE_API Timing GetTimingForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForTiming(Timing value);
}  // namespace TimingMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
