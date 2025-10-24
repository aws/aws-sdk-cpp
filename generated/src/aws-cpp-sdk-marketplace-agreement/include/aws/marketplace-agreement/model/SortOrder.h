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
enum class SortOrder { NOT_SET, ASCENDING, DESCENDING };

namespace SortOrderMapper {
AWS_AGREEMENTSERVICE_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForSortOrder(SortOrder value);
}  // namespace SortOrderMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
