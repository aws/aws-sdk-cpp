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
enum class AdminPasswordSource { NOT_SET, CUSTOMER_MANAGED_AWS_SECRET, API_REQUEST_PARAMETER };

namespace AdminPasswordSourceMapper {
AWS_ODB_API AdminPasswordSource GetAdminPasswordSourceForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForAdminPasswordSource(AdminPasswordSource value);
}  // namespace AdminPasswordSourceMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
