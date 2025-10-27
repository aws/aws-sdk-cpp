/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/Tnb_EXPORTS.h>

namespace Aws {
namespace tnb {
namespace Model {
enum class OperationalState { NOT_SET, ENABLED, DISABLED };

namespace OperationalStateMapper {
AWS_TNB_API OperationalState GetOperationalStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForOperationalState(OperationalState value);
}  // namespace OperationalStateMapper
}  // namespace Model
}  // namespace tnb
}  // namespace Aws
