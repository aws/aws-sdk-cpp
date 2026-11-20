/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/TrustCenterDocumentAccessType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace TrustCenterDocumentAccessTypeMapper {

static const int DOWNLOAD_HASH = HashingUtils::HashString("DOWNLOAD");
static const int VIEW_HASH = HashingUtils::HashString("VIEW");
static const int REQUEST_ACCESS_HASH = HashingUtils::HashString("REQUEST_ACCESS");

TrustCenterDocumentAccessType GetTrustCenterDocumentAccessTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DOWNLOAD_HASH) {
    return TrustCenterDocumentAccessType::DOWNLOAD;
  } else if (hashCode == VIEW_HASH) {
    return TrustCenterDocumentAccessType::VIEW;
  } else if (hashCode == REQUEST_ACCESS_HASH) {
    return TrustCenterDocumentAccessType::REQUEST_ACCESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrustCenterDocumentAccessType>(hashCode);
  }

  return TrustCenterDocumentAccessType::NOT_SET;
}

Aws::String GetNameForTrustCenterDocumentAccessType(TrustCenterDocumentAccessType enumValue) {
  switch (enumValue) {
    case TrustCenterDocumentAccessType::NOT_SET:
      return {};
    case TrustCenterDocumentAccessType::DOWNLOAD:
      return "DOWNLOAD";
    case TrustCenterDocumentAccessType::VIEW:
      return "VIEW";
    case TrustCenterDocumentAccessType::REQUEST_ACCESS:
      return "REQUEST_ACCESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrustCenterDocumentAccessTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
