/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class CharacterSetType { NOT_SET, DATABASE, NATIONAL };

namespace CharacterSetTypeMapper {
AWS_ODB_API CharacterSetType GetCharacterSetTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForCharacterSetType(CharacterSetType value);
}  // namespace CharacterSetTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
