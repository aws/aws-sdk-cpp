/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class ImportErrorType
  {
    NOT_SET,
    VALIDATION_ERROR,
    PROCESSING_ERROR
  };

namespace ImportErrorTypeMapper
{
AWS_MGN_API ImportErrorType GetImportErrorTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForImportErrorType(ImportErrorType value);
} // namespace ImportErrorTypeMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
