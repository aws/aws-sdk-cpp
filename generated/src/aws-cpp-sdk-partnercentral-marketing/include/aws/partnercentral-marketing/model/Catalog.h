/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class Catalog { NOT_SET, AWS, Sandbox };

namespace CatalogMapper {
AWS_PARTNERCENTRALMARKETING_API Catalog GetCatalogForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCatalog(Catalog value);
}  // namespace CatalogMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
