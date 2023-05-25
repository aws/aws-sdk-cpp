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
  enum class EngineType
  {
    NOT_SET,
    ACTIVEMQ,
    RABBITMQ
  };

namespace EngineTypeMapper
{
AWS_MQ_API EngineType GetEngineTypeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForEngineType(EngineType value);
} // namespace EngineTypeMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
