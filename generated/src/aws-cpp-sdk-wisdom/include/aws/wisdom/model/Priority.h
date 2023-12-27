/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class Priority
  {
    NOT_SET,
    HIGH,
    MEDIUM,
    LOW
  };

namespace PriorityMapper
{
AWS_CONNECTWISDOMSERVICE_API Priority GetPriorityForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForPriority(Priority value);
} // namespace PriorityMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
