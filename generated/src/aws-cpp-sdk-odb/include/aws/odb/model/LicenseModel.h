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
enum class LicenseModel { NOT_SET, BRING_YOUR_OWN_LICENSE, LICENSE_INCLUDED };

namespace LicenseModelMapper {
AWS_ODB_API LicenseModel GetLicenseModelForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForLicenseModel(LicenseModel value);
}  // namespace LicenseModelMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
