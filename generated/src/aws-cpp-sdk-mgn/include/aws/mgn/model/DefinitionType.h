/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class DefinitionType { NOT_SET, MIGRATION, NEW_NETWORK };

namespace DefinitionTypeMapper {
AWS_MGN_API DefinitionType GetDefinitionTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForDefinitionType(DefinitionType value);
}  // namespace DefinitionTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
