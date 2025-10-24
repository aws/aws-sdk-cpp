/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class ResponderErrorMaskingLoggingType { NOT_SET, NONE, METRIC, RESPONSE };

namespace ResponderErrorMaskingLoggingTypeMapper {
AWS_RTBFABRIC_API ResponderErrorMaskingLoggingType GetResponderErrorMaskingLoggingTypeForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForResponderErrorMaskingLoggingType(ResponderErrorMaskingLoggingType value);
}  // namespace ResponderErrorMaskingLoggingTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
