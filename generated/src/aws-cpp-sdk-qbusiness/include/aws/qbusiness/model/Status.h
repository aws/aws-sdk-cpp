/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class Status { NOT_SET, ENABLED, DISABLED };

namespace StatusMapper {
AWS_QBUSINESS_API Status GetStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
