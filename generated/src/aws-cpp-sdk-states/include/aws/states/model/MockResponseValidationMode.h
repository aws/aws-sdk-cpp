/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/SFN_EXPORTS.h>

namespace Aws {
namespace SFN {
namespace Model {
enum class MockResponseValidationMode { NOT_SET, STRICT, PRESENT, NONE };

namespace MockResponseValidationModeMapper {
AWS_SFN_API MockResponseValidationMode GetMockResponseValidationModeForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForMockResponseValidationMode(MockResponseValidationMode value);
}  // namespace MockResponseValidationModeMapper
}  // namespace Model
}  // namespace SFN
}  // namespace Aws
