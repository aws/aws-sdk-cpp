/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/ConnectorProvider.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace ConnectorProviderMapper {

static const int AZURE_HASH = HashingUtils::HashString("AZURE");

ConnectorProvider GetConnectorProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AZURE_HASH) {
    return ConnectorProvider::AZURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorProvider>(hashCode);
  }

  return ConnectorProvider::NOT_SET;
}

Aws::String GetNameForConnectorProvider(ConnectorProvider enumValue) {
  switch (enumValue) {
    case ConnectorProvider::NOT_SET:
      return {};
    case ConnectorProvider::AZURE:
      return "AZURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorProviderMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
