/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class AnalysisErrorType
  {
    NOT_SET,
    ACCESS_DENIED,
    SOURCE_NOT_FOUND,
    DATA_SET_NOT_FOUND,
    INTERNAL_FAILURE,
    PARAMETER_VALUE_INCOMPATIBLE,
    PARAMETER_TYPE_INVALID,
    PARAMETER_NOT_FOUND,
    COLUMN_TYPE_MISMATCH,
    COLUMN_GEOGRAPHIC_ROLE_MISMATCH,
    COLUMN_REPLACEMENT_MISSING
  };

namespace AnalysisErrorTypeMapper
{
AWS_QUICKSIGHT_API AnalysisErrorType GetAnalysisErrorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAnalysisErrorType(AnalysisErrorType value);
} // namespace AnalysisErrorTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
