/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
enum class TrustCenterDocumentAccessType { NOT_SET, DOWNLOAD, VIEW, REQUEST_ACCESS };

namespace TrustCenterDocumentAccessTypeMapper {
AWS_MARKETPLACEDISCOVERY_API TrustCenterDocumentAccessType GetTrustCenterDocumentAccessTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForTrustCenterDocumentAccessType(TrustCenterDocumentAccessType value);
}  // namespace TrustCenterDocumentAccessTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
