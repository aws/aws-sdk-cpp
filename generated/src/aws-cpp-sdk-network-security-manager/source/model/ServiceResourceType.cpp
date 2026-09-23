/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/ServiceResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace ServiceResourceTypeMapper {

static const int Rule_HASH = HashingUtils::HashString("Rule");
static const int Template_HASH = HashingUtils::HashString("Template");
static const int Policy_HASH = HashingUtils::HashString("Policy");
static const int Deployment_HASH = HashingUtils::HashString("Deployment");
static const int Scope_HASH = HashingUtils::HashString("Scope");

ServiceResourceType GetServiceResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Rule_HASH) {
    return ServiceResourceType::Rule;
  } else if (hashCode == Template_HASH) {
    return ServiceResourceType::Template;
  } else if (hashCode == Policy_HASH) {
    return ServiceResourceType::Policy;
  } else if (hashCode == Deployment_HASH) {
    return ServiceResourceType::Deployment;
  } else if (hashCode == Scope_HASH) {
    return ServiceResourceType::Scope;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceResourceType>(hashCode);
  }

  return ServiceResourceType::NOT_SET;
}

Aws::String GetNameForServiceResourceType(ServiceResourceType enumValue) {
  switch (enumValue) {
    case ServiceResourceType::NOT_SET:
      return {};
    case ServiceResourceType::Rule:
      return "Rule";
    case ServiceResourceType::Template:
      return "Template";
    case ServiceResourceType::Policy:
      return "Policy";
    case ServiceResourceType::Deployment:
      return "Deployment";
    case ServiceResourceType::Scope:
      return "Scope";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceResourceTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
