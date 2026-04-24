/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>

namespace Aws {
namespace Omics {
namespace Model {
enum class ConfigurationStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, DELETED, FAILED };

namespace ConfigurationStatusMapper {
AWS_OMICS_API ConfigurationStatus GetConfigurationStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForConfigurationStatus(ConfigurationStatus value);
}  // namespace ConfigurationStatusMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
