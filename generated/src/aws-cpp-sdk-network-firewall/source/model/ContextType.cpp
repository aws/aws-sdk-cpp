/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ContextType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ContextTypeMapper {

static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
static const int SegmentId_HASH = HashingUtils::HashString("SegmentId");
static const int Subnet_HASH = HashingUtils::HashString("Subnet");
static const int Attachment_HASH = HashingUtils::HashString("Attachment");

ContextType GetContextTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ResourceId_HASH) {
    return ContextType::ResourceId;
  } else if (hashCode == SegmentId_HASH) {
    return ContextType::SegmentId;
  } else if (hashCode == Subnet_HASH) {
    return ContextType::Subnet;
  } else if (hashCode == Attachment_HASH) {
    return ContextType::Attachment;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextType>(hashCode);
  }

  return ContextType::NOT_SET;
}

Aws::String GetNameForContextType(ContextType enumValue) {
  switch (enumValue) {
    case ContextType::NOT_SET:
      return {};
    case ContextType::ResourceId:
      return "ResourceId";
    case ContextType::SegmentId:
      return "SegmentId";
    case ContextType::Subnet:
      return "Subnet";
    case ContextType::Attachment:
      return "Attachment";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
