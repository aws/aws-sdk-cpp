/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class LogDestinationType
  {
    NOT_SET,
    S3,
    CloudWatchLogs,
    KinesisDataFirehose
  };

namespace LogDestinationTypeMapper
{
AWS_NETWORKFIREWALL_API LogDestinationType GetLogDestinationTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForLogDestinationType(LogDestinationType value);
} // namespace LogDestinationTypeMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
