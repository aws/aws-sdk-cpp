﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53resolver/model/ResolverEndpointDirection.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {
namespace ResolverEndpointDirectionMapper {

static const int INBOUND_HASH = HashingUtils::HashString("INBOUND");
static const int OUTBOUND_HASH = HashingUtils::HashString("OUTBOUND");
static const int INBOUND_DELEGATION_HASH = HashingUtils::HashString("INBOUND_DELEGATION");

ResolverEndpointDirection GetResolverEndpointDirectionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INBOUND_HASH) {
    return ResolverEndpointDirection::INBOUND;
  } else if (hashCode == OUTBOUND_HASH) {
    return ResolverEndpointDirection::OUTBOUND;
  } else if (hashCode == INBOUND_DELEGATION_HASH) {
    return ResolverEndpointDirection::INBOUND_DELEGATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResolverEndpointDirection>(hashCode);
  }

  return ResolverEndpointDirection::NOT_SET;
}

Aws::String GetNameForResolverEndpointDirection(ResolverEndpointDirection enumValue) {
  switch (enumValue) {
    case ResolverEndpointDirection::NOT_SET:
      return {};
    case ResolverEndpointDirection::INBOUND:
      return "INBOUND";
    case ResolverEndpointDirection::OUTBOUND:
      return "OUTBOUND";
    case ResolverEndpointDirection::INBOUND_DELEGATION:
      return "INBOUND_DELEGATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResolverEndpointDirectionMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
