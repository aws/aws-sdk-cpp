/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class ImportJobType
  {
    NOT_SET,
    QUICK_RESPONSES
  };

namespace ImportJobTypeMapper
{
AWS_QCONNECT_API ImportJobType GetImportJobTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForImportJobType(ImportJobType value);
} // namespace ImportJobTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
