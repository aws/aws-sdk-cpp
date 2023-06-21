/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MQ
{
namespace Model
{
  enum class DataReplicationMode
  {
    NOT_SET,
    NONE,
    CRDR
  };

namespace DataReplicationModeMapper
{
AWS_MQ_API DataReplicationMode GetDataReplicationModeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForDataReplicationMode(DataReplicationMode value);
} // namespace DataReplicationModeMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
