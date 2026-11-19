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
enum class CustomerAccountFailureReason { NOT_SET, DUPLICATE_CUSTOMER_MATCH, PROCESSING_ERROR };

namespace CustomerAccountFailureReasonMapper {
AWS_PARTNERCENTRALSELLING_API CustomerAccountFailureReason GetCustomerAccountFailureReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForCustomerAccountFailureReason(CustomerAccountFailureReason value);
}  // namespace CustomerAccountFailureReasonMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
