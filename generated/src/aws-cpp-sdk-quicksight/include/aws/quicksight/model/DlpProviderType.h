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
enum class DlpProviderType { NOT_SET, MICROSOFT_PURVIEW };

namespace DlpProviderTypeMapper {
AWS_QUICKSIGHT_API DlpProviderType GetDlpProviderTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDlpProviderType(DlpProviderType value);
}  // namespace DlpProviderTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
