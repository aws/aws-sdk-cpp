/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class EmailAddressInsightsConfidenceVerdict { NOT_SET, LOW, MEDIUM, HIGH };

namespace EmailAddressInsightsConfidenceVerdictMapper {
AWS_SESV2_API EmailAddressInsightsConfidenceVerdict GetEmailAddressInsightsConfidenceVerdictForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForEmailAddressInsightsConfidenceVerdict(EmailAddressInsightsConfidenceVerdict value);
}  // namespace EmailAddressInsightsConfidenceVerdictMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
