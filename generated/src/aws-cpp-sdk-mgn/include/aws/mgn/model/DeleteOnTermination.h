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
enum class DeleteOnTermination { NOT_SET, ENABLED, DISABLED };

namespace DeleteOnTerminationMapper {
AWS_MGN_API DeleteOnTermination GetDeleteOnTerminationForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForDeleteOnTermination(DeleteOnTermination value);
}  // namespace DeleteOnTerminationMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
