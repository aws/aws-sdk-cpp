/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{
  enum class DestinationCategory
  {
    NOT_SET,
    INTRA_AZ,
    INTER_AZ,
    INTER_VPC,
    UNCLASSIFIED,
    AMAZON_S3,
    AMAZON_DYNAMODB,
    INTER_REGION
  };

namespace DestinationCategoryMapper
{
AWS_NETWORKFLOWMONITOR_API DestinationCategory GetDestinationCategoryForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForDestinationCategory(DestinationCategory value);
} // namespace DestinationCategoryMapper
} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
