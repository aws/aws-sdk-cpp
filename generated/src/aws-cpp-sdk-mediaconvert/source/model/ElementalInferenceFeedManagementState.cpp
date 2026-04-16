/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/ElementalInferenceFeedManagementState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace ElementalInferenceFeedManagementStateMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

ElementalInferenceFeedManagementState GetElementalInferenceFeedManagementStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return ElementalInferenceFeedManagementState::CREATED;
  } else if (hashCode == ASSOCIATED_HASH) {
    return ElementalInferenceFeedManagementState::ASSOCIATED;
  } else if (hashCode == PENDING_DELETION_HASH) {
    return ElementalInferenceFeedManagementState::PENDING_DELETION;
  } else if (hashCode == DELETED_HASH) {
    return ElementalInferenceFeedManagementState::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ElementalInferenceFeedManagementState>(hashCode);
  }

  return ElementalInferenceFeedManagementState::NOT_SET;
}

Aws::String GetNameForElementalInferenceFeedManagementState(ElementalInferenceFeedManagementState enumValue) {
  switch (enumValue) {
    case ElementalInferenceFeedManagementState::NOT_SET:
      return {};
    case ElementalInferenceFeedManagementState::CREATED:
      return "CREATED";
    case ElementalInferenceFeedManagementState::ASSOCIATED:
      return "ASSOCIATED";
    case ElementalInferenceFeedManagementState::PENDING_DELETION:
      return "PENDING_DELETION";
    case ElementalInferenceFeedManagementState::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ElementalInferenceFeedManagementStateMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
