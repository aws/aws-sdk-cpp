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
enum class ControlAssessmentResult { NOT_SET, PASS, FAIL, NOT_EXECUTED, EXEMPTION_PASS };

namespace ControlAssessmentResultMapper {
AWS_MARKETPLACECATALOG_API ControlAssessmentResult GetControlAssessmentResultForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForControlAssessmentResult(ControlAssessmentResult value);
}  // namespace ControlAssessmentResultMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
