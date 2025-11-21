/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class SupportedAwsIntegration { NOT_SET, KmsTde };

namespace SupportedAwsIntegrationMapper {
AWS_ODB_API SupportedAwsIntegration GetSupportedAwsIntegrationForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForSupportedAwsIntegration(SupportedAwsIntegration value);
}  // namespace SupportedAwsIntegrationMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
