/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class PrincipalType { NOT_SET, USER, GROUP, ACCOUNT };

namespace PrincipalTypeMapper {
AWS_QUICKSIGHT_API PrincipalType GetPrincipalTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPrincipalType(PrincipalType value);
}  // namespace PrincipalTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
