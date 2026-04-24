/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/MPA_EXPORTS.h>

namespace Aws {
namespace MPA {
namespace Model {
enum class ApproverLastActivity { NOT_SET, VOTED, BASELINED, RESPONDED_TO_INVITATION };

namespace ApproverLastActivityMapper {
AWS_MPA_API ApproverLastActivity GetApproverLastActivityForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForApproverLastActivity(ApproverLastActivity value);
}  // namespace ApproverLastActivityMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
