/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ExtensionHealthIssueCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ExtensionHealthIssueCodeMapper {

static const int InvalidConfiguration_HASH = HashingUtils::HashString("InvalidConfiguration");
static const int ConfigurationConflict_HASH = HashingUtils::HashString("ConfigurationConflict");
static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
static const int ResourceNotFound_HASH = HashingUtils::HashString("ResourceNotFound");
static const int DependencyUnreachable_HASH = HashingUtils::HashString("DependencyUnreachable");
static const int ExtensionUnhealthy_HASH = HashingUtils::HashString("ExtensionUnhealthy");
static const int InternalFailure_HASH = HashingUtils::HashString("InternalFailure");
static const int Other_HASH = HashingUtils::HashString("Other");

ExtensionHealthIssueCode GetExtensionHealthIssueCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InvalidConfiguration_HASH) {
    return ExtensionHealthIssueCode::InvalidConfiguration;
  } else if (hashCode == ConfigurationConflict_HASH) {
    return ExtensionHealthIssueCode::ConfigurationConflict;
  } else if (hashCode == AccessDenied_HASH) {
    return ExtensionHealthIssueCode::AccessDenied;
  } else if (hashCode == ResourceNotFound_HASH) {
    return ExtensionHealthIssueCode::ResourceNotFound;
  } else if (hashCode == DependencyUnreachable_HASH) {
    return ExtensionHealthIssueCode::DependencyUnreachable;
  } else if (hashCode == ExtensionUnhealthy_HASH) {
    return ExtensionHealthIssueCode::ExtensionUnhealthy;
  } else if (hashCode == InternalFailure_HASH) {
    return ExtensionHealthIssueCode::InternalFailure;
  } else if (hashCode == Other_HASH) {
    return ExtensionHealthIssueCode::Other;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExtensionHealthIssueCode>(hashCode);
  }

  return ExtensionHealthIssueCode::NOT_SET;
}

Aws::String GetNameForExtensionHealthIssueCode(ExtensionHealthIssueCode enumValue) {
  switch (enumValue) {
    case ExtensionHealthIssueCode::NOT_SET:
      return {};
    case ExtensionHealthIssueCode::InvalidConfiguration:
      return "InvalidConfiguration";
    case ExtensionHealthIssueCode::ConfigurationConflict:
      return "ConfigurationConflict";
    case ExtensionHealthIssueCode::AccessDenied:
      return "AccessDenied";
    case ExtensionHealthIssueCode::ResourceNotFound:
      return "ResourceNotFound";
    case ExtensionHealthIssueCode::DependencyUnreachable:
      return "DependencyUnreachable";
    case ExtensionHealthIssueCode::ExtensionUnhealthy:
      return "ExtensionUnhealthy";
    case ExtensionHealthIssueCode::InternalFailure:
      return "InternalFailure";
    case ExtensionHealthIssueCode::Other:
      return "Other";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExtensionHealthIssueCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
