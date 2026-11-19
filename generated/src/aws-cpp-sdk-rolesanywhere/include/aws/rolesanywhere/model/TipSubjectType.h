/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>

namespace Aws {
namespace RolesAnywhere {
namespace Model {
enum class TipSubjectType { NOT_SET, user, workload };

namespace TipSubjectTypeMapper {
AWS_ROLESANYWHERE_API TipSubjectType GetTipSubjectTypeForName(const Aws::String& name);

AWS_ROLESANYWHERE_API Aws::String GetNameForTipSubjectType(TipSubjectType value);
}  // namespace TipSubjectTypeMapper
}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
