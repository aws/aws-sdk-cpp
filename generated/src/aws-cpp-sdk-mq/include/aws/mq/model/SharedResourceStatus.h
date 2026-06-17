/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/MQ_EXPORTS.h>

namespace Aws {
namespace MQ {
namespace Model {
enum class SharedResourceStatus { NOT_SET, AVAILABLE, SETUP_IN_PROGRESS, DELETION_IN_PROGRESS, PENDING_CREATE, PENDING_DELETE, ERROR_ };

namespace SharedResourceStatusMapper {
AWS_MQ_API SharedResourceStatus GetSharedResourceStatusForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForSharedResourceStatus(SharedResourceStatus value);
}  // namespace SharedResourceStatusMapper
}  // namespace Model
}  // namespace MQ
}  // namespace Aws
