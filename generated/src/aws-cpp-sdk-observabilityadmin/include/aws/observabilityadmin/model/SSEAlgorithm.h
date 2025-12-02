/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class SSEAlgorithm { NOT_SET, aws_kms, AES256 };

namespace SSEAlgorithmMapper {
AWS_OBSERVABILITYADMIN_API SSEAlgorithm GetSSEAlgorithmForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForSSEAlgorithm(SSEAlgorithm value);
}  // namespace SSEAlgorithmMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
