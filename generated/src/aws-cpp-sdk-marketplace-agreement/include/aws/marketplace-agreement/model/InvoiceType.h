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
enum class InvoiceType { NOT_SET, INVOICE, CREDIT_MEMO };

namespace InvoiceTypeMapper {
AWS_AGREEMENTSERVICE_API InvoiceType GetInvoiceTypeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForInvoiceType(InvoiceType value);
}  // namespace InvoiceTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
