/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class Confidence { NOT_SET, LOW, MEDIUM, HIGH };

namespace ConfidenceMapper {
AWS_WAFV2_API Confidence GetConfidenceForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForConfidence(Confidence value);
}  // namespace ConfidenceMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
