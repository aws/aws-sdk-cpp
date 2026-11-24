/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/TemplateOwner.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace TemplateOwnerMapper {

static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
static const int AWS_HASH = HashingUtils::HashString("AWS");

TemplateOwner GetTemplateOwnerForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_HASH) {
    return TemplateOwner::CUSTOMER;
  } else if (hashCode == AWS_HASH) {
    return TemplateOwner::AWS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TemplateOwner>(hashCode);
  }

  return TemplateOwner::NOT_SET;
}

Aws::String GetNameForTemplateOwner(TemplateOwner enumValue) {
  switch (enumValue) {
    case TemplateOwner::NOT_SET:
      return {};
    case TemplateOwner::CUSTOMER:
      return "CUSTOMER";
    case TemplateOwner::AWS:
      return "AWS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TemplateOwnerMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
