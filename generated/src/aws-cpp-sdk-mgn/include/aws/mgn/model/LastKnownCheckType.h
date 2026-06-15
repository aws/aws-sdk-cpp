/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class LastKnownCheckType { NOT_SET, EC2, FSx };

namespace LastKnownCheckTypeMapper {
AWS_MGN_API LastKnownCheckType GetLastKnownCheckTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForLastKnownCheckType(LastKnownCheckType value);
}  // namespace LastKnownCheckTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
