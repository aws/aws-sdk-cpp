/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class ContextType { NOT_SET, APPLICATION };

namespace ContextTypeMapper {
AWS_WELLARCHITECTED_API ContextType GetContextTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForContextType(ContextType value);
}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
