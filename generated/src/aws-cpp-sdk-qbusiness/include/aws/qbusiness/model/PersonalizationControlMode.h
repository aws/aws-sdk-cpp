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
enum class PersonalizationControlMode { NOT_SET, ENABLED, DISABLED };

namespace PersonalizationControlModeMapper {
AWS_QBUSINESS_API PersonalizationControlMode GetPersonalizationControlModeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForPersonalizationControlMode(PersonalizationControlMode value);
}  // namespace PersonalizationControlModeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
