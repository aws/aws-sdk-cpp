/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>

namespace Aws {
namespace S3Files {
namespace Model {
enum class LifeCycleState { NOT_SET, available, creating, deleting, deleted, error, updating };

namespace LifeCycleStateMapper {
AWS_S3FILES_API LifeCycleState GetLifeCycleStateForName(const Aws::String& name);

AWS_S3FILES_API Aws::String GetNameForLifeCycleState(LifeCycleState value);
}  // namespace LifeCycleStateMapper
}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
