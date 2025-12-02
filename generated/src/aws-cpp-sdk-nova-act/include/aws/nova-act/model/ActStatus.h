/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Model {
enum class ActStatus { NOT_SET, RUNNING, PENDING_CLIENT_ACTION, PENDING_HUMAN_ACTION, SUCCEEDED, FAILED, TIMED_OUT };

namespace ActStatusMapper {
AWS_NOVAACT_API ActStatus GetActStatusForName(const Aws::String& name);

AWS_NOVAACT_API Aws::String GetNameForActStatus(ActStatus value);
}  // namespace ActStatusMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
