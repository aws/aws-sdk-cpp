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
enum class EndTimeBehaviorType { NOT_SET, RENEW, REPLACE, EXPIRE };

namespace EndTimeBehaviorTypeMapper {
AWS_AGREEMENTSERVICE_API EndTimeBehaviorType GetEndTimeBehaviorTypeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForEndTimeBehaviorType(EndTimeBehaviorType value);
}  // namespace EndTimeBehaviorTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
