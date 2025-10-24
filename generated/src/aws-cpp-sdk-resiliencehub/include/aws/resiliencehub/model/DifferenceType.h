﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class DifferenceType { NOT_SET, NotEqual, Added, Removed };

namespace DifferenceTypeMapper {
AWS_RESILIENCEHUB_API DifferenceType GetDifferenceTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForDifferenceType(DifferenceType value);
}  // namespace DifferenceTypeMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
