/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class SuppressionListImportAction { NOT_SET, DELETE_, PUT };

namespace SuppressionListImportActionMapper {
AWS_SESV2_API SuppressionListImportAction GetSuppressionListImportActionForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForSuppressionListImportAction(SuppressionListImportAction value);
}  // namespace SuppressionListImportActionMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
