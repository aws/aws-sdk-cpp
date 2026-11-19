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
enum class BulkFileFormat { NOT_SET, CSV };

namespace BulkFileFormatMapper {
AWS_PARTNERCENTRALSELLING_API BulkFileFormat GetBulkFileFormatForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForBulkFileFormat(BulkFileFormat value);
}  // namespace BulkFileFormatMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
