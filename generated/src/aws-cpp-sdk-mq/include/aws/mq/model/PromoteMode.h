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
  enum class PromoteMode
  {
    NOT_SET,
    SWITCHOVER,
    FAILOVER
  };

namespace PromoteModeMapper
{
AWS_MQ_API PromoteMode GetPromoteModeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForPromoteMode(PromoteMode value);
} // namespace PromoteModeMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
