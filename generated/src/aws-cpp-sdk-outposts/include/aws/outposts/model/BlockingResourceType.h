/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class BlockingResourceType {
  NOT_SET,
  EC2_INSTANCE,
  OUTPOST_RAM_SHARE,
  LGW_ROUTING_DOMAIN,
  LGW_ROUTE_TABLE,
  LGW_VIRTUAL_INTERFACE_GROUP,
  OUTPOST_ORDER_CANCELLABLE,
  OUTPOST_ORDER_INTERVENTION_REQUIRED
};

namespace BlockingResourceTypeMapper {
AWS_OUTPOSTS_API BlockingResourceType GetBlockingResourceTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForBlockingResourceType(BlockingResourceType value);
}  // namespace BlockingResourceTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
