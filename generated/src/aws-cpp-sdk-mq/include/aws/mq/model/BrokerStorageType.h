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
  enum class BrokerStorageType
  {
    NOT_SET,
    EBS,
    EFS
  };

namespace BrokerStorageTypeMapper
{
AWS_MQ_API BrokerStorageType GetBrokerStorageTypeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForBrokerStorageType(BrokerStorageType value);
} // namespace BrokerStorageTypeMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
