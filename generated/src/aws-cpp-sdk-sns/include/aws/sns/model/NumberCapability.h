/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/SNS_EXPORTS.h>

namespace Aws {
namespace SNS {
namespace Model {
enum class NumberCapability { NOT_SET, SMS, MMS, VOICE };

namespace NumberCapabilityMapper {
AWS_SNS_API NumberCapability GetNumberCapabilityForName(const Aws::String& name);

AWS_SNS_API Aws::String GetNameForNumberCapability(NumberCapability value);
}  // namespace NumberCapabilityMapper
}  // namespace Model
}  // namespace SNS
}  // namespace Aws
