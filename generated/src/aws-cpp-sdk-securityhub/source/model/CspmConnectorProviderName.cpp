/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/CspmConnectorProviderName.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace CspmConnectorProviderNameMapper {

static const int AZURE_HASH = HashingUtils::HashString("AZURE");
static const int GCP_HASH = HashingUtils::HashString("GCP");

CspmConnectorProviderName GetCspmConnectorProviderNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AZURE_HASH) {
    return CspmConnectorProviderName::AZURE;
  } else if (hashCode == GCP_HASH) {
    return CspmConnectorProviderName::GCP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CspmConnectorProviderName>(hashCode);
  }

  return CspmConnectorProviderName::NOT_SET;
}

Aws::String GetNameForCspmConnectorProviderName(CspmConnectorProviderName enumValue) {
  switch (enumValue) {
    case CspmConnectorProviderName::NOT_SET:
      return {};
    case CspmConnectorProviderName::AZURE:
      return "AZURE";
    case CspmConnectorProviderName::GCP:
      return "GCP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CspmConnectorProviderNameMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
