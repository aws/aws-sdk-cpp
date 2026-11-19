/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class JobSubmitPluginType { NOT_SET, STARLARK };

namespace JobSubmitPluginTypeMapper {
AWS_PCS_API JobSubmitPluginType GetJobSubmitPluginTypeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForJobSubmitPluginType(JobSubmitPluginType value);
}  // namespace JobSubmitPluginTypeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
