/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class AssessmentResult { NOT_SET, PASS, FAIL };

namespace AssessmentResultMapper {
AWS_MARKETPLACECATALOG_API AssessmentResult GetAssessmentResultForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForAssessmentResult(AssessmentResult value);
}  // namespace AssessmentResultMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
