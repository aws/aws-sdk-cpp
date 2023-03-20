/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class AdditionalResponseFieldType
  {
    NOT_SET,
    WEBURL
  };

namespace AdditionalResponseFieldTypeMapper
{
AWS_WORKDOCS_API AdditionalResponseFieldType GetAdditionalResponseFieldTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForAdditionalResponseFieldType(AdditionalResponseFieldType value);
} // namespace AdditionalResponseFieldTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
