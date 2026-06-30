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
enum class SignalType { NOT_SET, LOG, METRIC };

namespace SignalTypeMapper {
AWS_OBSERVABILITYADMIN_API SignalType GetSignalTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForSignalType(SignalType value);
}  // namespace SignalTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
