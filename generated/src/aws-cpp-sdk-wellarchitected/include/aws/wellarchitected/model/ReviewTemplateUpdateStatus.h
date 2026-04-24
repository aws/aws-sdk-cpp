/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class ReviewTemplateUpdateStatus { NOT_SET, CURRENT, LENS_NOT_CURRENT };

namespace ReviewTemplateUpdateStatusMapper {
AWS_WELLARCHITECTED_API ReviewTemplateUpdateStatus GetReviewTemplateUpdateStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForReviewTemplateUpdateStatus(ReviewTemplateUpdateStatus value);
}  // namespace ReviewTemplateUpdateStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
