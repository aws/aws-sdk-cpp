/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/PI_EXPORTS.h>

namespace Aws {
namespace PI {
namespace Model {
enum class ContextType { NOT_SET, CAUSAL, CONTEXTUAL };

namespace ContextTypeMapper {
AWS_PI_API ContextType GetContextTypeForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForContextType(ContextType value);
}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace PI
}  // namespace Aws
