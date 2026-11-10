/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws {
namespace S3Control {
namespace Model {
enum class InstanceScope { NOT_SET, SELF, ALL };

namespace InstanceScopeMapper {
AWS_S3CONTROL_API InstanceScope GetInstanceScopeForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForInstanceScope(InstanceScope value);
}  // namespace InstanceScopeMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
