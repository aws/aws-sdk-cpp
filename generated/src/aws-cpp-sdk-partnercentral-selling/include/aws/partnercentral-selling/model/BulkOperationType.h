/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class BulkOperationType { NOT_SET, BULK_CREATE, BULK_UPDATE };

namespace BulkOperationTypeMapper {
AWS_PARTNERCENTRALSELLING_API BulkOperationType GetBulkOperationTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForBulkOperationType(BulkOperationType value);
}  // namespace BulkOperationTypeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
