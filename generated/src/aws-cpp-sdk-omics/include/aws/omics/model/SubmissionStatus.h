/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>

namespace Aws {
namespace Omics {
namespace Model {
enum class SubmissionStatus { NOT_SET, SUCCESS, FAILED, CANCEL_SUCCESS, CANCEL_FAILED, DELETE_SUCCESS, DELETE_FAILED };

namespace SubmissionStatusMapper {
AWS_OMICS_API SubmissionStatus GetSubmissionStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForSubmissionStatus(SubmissionStatus value);
}  // namespace SubmissionStatusMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
