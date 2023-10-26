/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Textract
{
namespace Model
{
  enum class AdapterVersionStatus
  {
    NOT_SET,
    ACTIVE,
    AT_RISK,
    DEPRECATED,
    CREATION_ERROR,
    CREATION_IN_PROGRESS
  };

namespace AdapterVersionStatusMapper
{
AWS_TEXTRACT_API AdapterVersionStatus GetAdapterVersionStatusForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForAdapterVersionStatus(AdapterVersionStatus value);
} // namespace AdapterVersionStatusMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
