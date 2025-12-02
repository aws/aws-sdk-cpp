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
enum class OutputFormat { NOT_SET, plain, json };

namespace OutputFormatMapper {
AWS_OBSERVABILITYADMIN_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForOutputFormat(OutputFormat value);
}  // namespace OutputFormatMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
