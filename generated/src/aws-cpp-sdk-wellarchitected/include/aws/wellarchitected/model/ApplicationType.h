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
enum class ApplicationType { NOT_SET, SAS, DESKTOP_APPLICATION, OTHER };

namespace ApplicationTypeMapper {
AWS_WELLARCHITECTED_API ApplicationType GetApplicationTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForApplicationType(ApplicationType value);
}  // namespace ApplicationTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
