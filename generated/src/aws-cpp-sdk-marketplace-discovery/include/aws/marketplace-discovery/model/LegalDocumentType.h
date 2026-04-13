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
enum class LegalDocumentType { NOT_SET, CustomEula, CustomDsa, EnterpriseEula, StandardEula, StandardDsa };

namespace LegalDocumentTypeMapper {
AWS_MARKETPLACEDISCOVERY_API LegalDocumentType GetLegalDocumentTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForLegalDocumentType(LegalDocumentType value);
}  // namespace LegalDocumentTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
