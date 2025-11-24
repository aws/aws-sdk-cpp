/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/Redshift_EXPORTS.h>

namespace Aws {
namespace Redshift {
namespace Model {
enum class ApplicationType { NOT_SET, None, Lakehouse };

namespace ApplicationTypeMapper {
AWS_REDSHIFT_API ApplicationType GetApplicationTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForApplicationType(ApplicationType value);
}  // namespace ApplicationTypeMapper
}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
