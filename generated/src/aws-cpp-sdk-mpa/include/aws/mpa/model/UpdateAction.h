/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/MPA_EXPORTS.h>

namespace Aws {
namespace MPA {
namespace Model {
enum class UpdateAction { NOT_SET, SYNCHRONIZE_MFA_DEVICES };

namespace UpdateActionMapper {
AWS_MPA_API UpdateAction GetUpdateActionForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForUpdateAction(UpdateAction value);
}  // namespace UpdateActionMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
