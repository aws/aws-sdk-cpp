/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

namespace Aws {
namespace Pinpoint {
namespace Model {
enum class __TimezoneEstimationMethodsElement { NOT_SET, PHONE_NUMBER, POSTAL_CODE };

namespace __TimezoneEstimationMethodsElementMapper {
AWS_PINPOINT_API __TimezoneEstimationMethodsElement Get__TimezoneEstimationMethodsElementForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameFor__TimezoneEstimationMethodsElement(__TimezoneEstimationMethodsElement value);
}  // namespace __TimezoneEstimationMethodsElementMapper
}  // namespace Model
}  // namespace Pinpoint
}  // namespace Aws
