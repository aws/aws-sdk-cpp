/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Model {
enum class LineItemGroupBy { NOT_SET, INVOICE_ID };

namespace LineItemGroupByMapper {
AWS_AGREEMENTSERVICE_API LineItemGroupBy GetLineItemGroupByForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForLineItemGroupBy(LineItemGroupBy value);
}  // namespace LineItemGroupByMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
