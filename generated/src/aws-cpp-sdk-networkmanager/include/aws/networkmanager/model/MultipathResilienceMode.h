/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

namespace Aws {
namespace NetworkManager {
namespace Model {
enum class MultipathResilienceMode { NOT_SET, best_effort, disabled };

namespace MultipathResilienceModeMapper {
AWS_NETWORKMANAGER_API MultipathResilienceMode GetMultipathResilienceModeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForMultipathResilienceMode(MultipathResilienceMode value);
}  // namespace MultipathResilienceModeMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
