/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ClientSecretSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ClientSecretSourceTypeMapper {

static const int IDP_PROVIDED_HASH = HashingUtils::HashString("IDP_PROVIDED");

ClientSecretSourceType GetClientSecretSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDP_PROVIDED_HASH) {
    return ClientSecretSourceType::IDP_PROVIDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientSecretSourceType>(hashCode);
  }

  return ClientSecretSourceType::NOT_SET;
}

Aws::String GetNameForClientSecretSourceType(ClientSecretSourceType enumValue) {
  switch (enumValue) {
    case ClientSecretSourceType::NOT_SET:
      return {};
    case ClientSecretSourceType::IDP_PROVIDED:
      return "IDP_PROVIDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientSecretSourceTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
