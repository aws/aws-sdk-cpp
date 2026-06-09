/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/InputSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace InputSourceTypeMapper {

static const int CFN_STACK_HASH = HashingUtils::HashString("CFN_STACK");
static const int TAGS_HASH = HashingUtils::HashString("TAGS");
static const int EKS_HASH = HashingUtils::HashString("EKS");
static const int TERRAFORM_HASH = HashingUtils::HashString("TERRAFORM");
static const int DESIGN_FILE_HASH = HashingUtils::HashString("DESIGN_FILE");
static const int MONITORING_HASH = HashingUtils::HashString("MONITORING");

InputSourceType GetInputSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CFN_STACK_HASH) {
    return InputSourceType::CFN_STACK;
  } else if (hashCode == TAGS_HASH) {
    return InputSourceType::TAGS;
  } else if (hashCode == EKS_HASH) {
    return InputSourceType::EKS;
  } else if (hashCode == TERRAFORM_HASH) {
    return InputSourceType::TERRAFORM;
  } else if (hashCode == DESIGN_FILE_HASH) {
    return InputSourceType::DESIGN_FILE;
  } else if (hashCode == MONITORING_HASH) {
    return InputSourceType::MONITORING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InputSourceType>(hashCode);
  }

  return InputSourceType::NOT_SET;
}

Aws::String GetNameForInputSourceType(InputSourceType enumValue) {
  switch (enumValue) {
    case InputSourceType::NOT_SET:
      return {};
    case InputSourceType::CFN_STACK:
      return "CFN_STACK";
    case InputSourceType::TAGS:
      return "TAGS";
    case InputSourceType::EKS:
      return "EKS";
    case InputSourceType::TERRAFORM:
      return "TERRAFORM";
    case InputSourceType::DESIGN_FILE:
      return "DESIGN_FILE";
    case InputSourceType::MONITORING:
      return "MONITORING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InputSourceTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
