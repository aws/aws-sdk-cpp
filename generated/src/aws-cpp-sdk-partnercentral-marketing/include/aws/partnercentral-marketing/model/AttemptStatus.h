/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class AttemptStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace AttemptStatusMapper {
AWS_PARTNERCENTRALMARKETING_API AttemptStatus GetAttemptStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForAttemptStatus(AttemptStatus value);
}  // namespace AttemptStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
