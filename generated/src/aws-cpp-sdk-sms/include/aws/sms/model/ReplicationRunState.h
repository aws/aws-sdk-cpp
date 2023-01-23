/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class ReplicationRunState
  {
    NOT_SET,
    PENDING,
    MISSED,
    ACTIVE,
    FAILED,
    COMPLETED,
    DELETING,
    DELETED
  };

namespace ReplicationRunStateMapper
{
AWS_SMS_API ReplicationRunState GetReplicationRunStateForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForReplicationRunState(ReplicationRunState value);
} // namespace ReplicationRunStateMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
