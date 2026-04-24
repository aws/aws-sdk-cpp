/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>

namespace Aws {
namespace Organizations {
namespace Model {
enum class CreateAccountState { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace CreateAccountStateMapper {
AWS_ORGANIZATIONS_API CreateAccountState GetCreateAccountStateForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForCreateAccountState(CreateAccountState value);
}  // namespace CreateAccountStateMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
