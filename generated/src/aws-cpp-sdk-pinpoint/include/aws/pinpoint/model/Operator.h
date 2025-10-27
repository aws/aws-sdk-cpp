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
enum class Operator { NOT_SET, ALL, ANY };

namespace OperatorMapper {
AWS_PINPOINT_API Operator GetOperatorForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForOperator(Operator value);
}  // namespace OperatorMapper
}  // namespace Model
}  // namespace Pinpoint
}  // namespace Aws
