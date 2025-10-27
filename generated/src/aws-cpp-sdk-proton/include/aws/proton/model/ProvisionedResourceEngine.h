/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/Proton_EXPORTS.h>

namespace Aws {
namespace Proton {
namespace Model {
enum class ProvisionedResourceEngine { NOT_SET, CLOUDFORMATION, TERRAFORM };

namespace ProvisionedResourceEngineMapper {
AWS_PROTON_API ProvisionedResourceEngine GetProvisionedResourceEngineForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForProvisionedResourceEngine(ProvisionedResourceEngine value);
}  // namespace ProvisionedResourceEngineMapper
}  // namespace Model
}  // namespace Proton
}  // namespace Aws
