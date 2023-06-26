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
  enum class ReplicationRunType
  {
    NOT_SET,
    ON_DEMAND,
    AUTOMATIC
  };

namespace ReplicationRunTypeMapper
{
AWS_SMS_API ReplicationRunType GetReplicationRunTypeForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForReplicationRunType(ReplicationRunType value);
} // namespace ReplicationRunTypeMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
