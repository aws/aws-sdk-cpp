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
enum class RemoteSourceActionInvocationStatus {
  NOT_SET,
  PENDING,
  IN_PROGRESS,
  DELAYED,
  SUCCESS,
  CANCELLED,
  TIMED_OUT,
  FAILED,
  CANCELLING,
  STALLED
};

namespace RemoteSourceActionInvocationStatusMapper {
AWS_MGN_API RemoteSourceActionInvocationStatus GetRemoteSourceActionInvocationStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForRemoteSourceActionInvocationStatus(RemoteSourceActionInvocationStatus value);
}  // namespace RemoteSourceActionInvocationStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
