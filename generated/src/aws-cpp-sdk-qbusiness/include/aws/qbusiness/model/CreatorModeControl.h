/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class CreatorModeControl { NOT_SET, ENABLED, DISABLED };

namespace CreatorModeControlMapper {
AWS_QBUSINESS_API CreatorModeControl GetCreatorModeControlForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForCreatorModeControl(CreatorModeControl value);
}  // namespace CreatorModeControlMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
