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
enum class SetupFormat { NOT_SET, BICEP };

namespace SetupFormatMapper {
AWS_OBSERVABILITYADMIN_API SetupFormat GetSetupFormatForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForSetupFormat(SetupFormat value);
}  // namespace SetupFormatMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
