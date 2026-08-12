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
enum class DlpAction { NOT_SET, ALLOW, WARN, BLOCK };

namespace DlpActionMapper {
AWS_QUICKSIGHT_API DlpAction GetDlpActionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDlpAction(DlpAction value);
}  // namespace DlpActionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
