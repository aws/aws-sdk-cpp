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
enum class QAppsControlMode { NOT_SET, ENABLED, DISABLED };

namespace QAppsControlModeMapper {
AWS_QBUSINESS_API QAppsControlMode GetQAppsControlModeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForQAppsControlMode(QAppsControlMode value);
}  // namespace QAppsControlModeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
