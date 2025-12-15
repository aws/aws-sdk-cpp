/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class Method { NOT_SET, GET_, POST };

namespace MethodMapper {
AWS_MEDIATAILOR_API Method GetMethodForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForMethod(Method value);
}  // namespace MethodMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
