/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/Proton_EXPORTS.h>

namespace Aws {
namespace Proton {
namespace Model {
enum class EnvironmentAccountConnectionRequesterAccountType { NOT_SET, MANAGEMENT_ACCOUNT, ENVIRONMENT_ACCOUNT };

namespace EnvironmentAccountConnectionRequesterAccountTypeMapper {
AWS_PROTON_API EnvironmentAccountConnectionRequesterAccountType
GetEnvironmentAccountConnectionRequesterAccountTypeForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForEnvironmentAccountConnectionRequesterAccountType(
    EnvironmentAccountConnectionRequesterAccountType value);
}  // namespace EnvironmentAccountConnectionRequesterAccountTypeMapper
}  // namespace Model
}  // namespace Proton
}  // namespace Aws
