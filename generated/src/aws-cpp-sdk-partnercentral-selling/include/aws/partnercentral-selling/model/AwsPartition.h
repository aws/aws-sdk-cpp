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
enum class AwsPartition { NOT_SET, aws_eusc };

namespace AwsPartitionMapper {
AWS_PARTNERCENTRALSELLING_API AwsPartition GetAwsPartitionForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForAwsPartition(AwsPartition value);
}  // namespace AwsPartitionMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
