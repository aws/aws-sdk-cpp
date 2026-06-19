/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>

namespace Aws {
namespace Synthetics {
namespace Model {
enum class ReplicationState { NOT_SET, InProgress, InSync, Inconsistent };

namespace ReplicationStateMapper {
AWS_SYNTHETICS_API ReplicationState GetReplicationStateForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForReplicationState(ReplicationState value);
}  // namespace ReplicationStateMapper
}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
