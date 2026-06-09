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
enum class ExpectedContractDurationTerm { NOT_SET, Months };

namespace ExpectedContractDurationTermMapper {
AWS_PARTNERCENTRALSELLING_API ExpectedContractDurationTerm GetExpectedContractDurationTermForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForExpectedContractDurationTerm(ExpectedContractDurationTerm value);
}  // namespace ExpectedContractDurationTermMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
