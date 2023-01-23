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
  enum class BooleanEnumType
  {
    NOT_SET,
    TRUE,
    FALSE
  };

namespace BooleanEnumTypeMapper
{
AWS_WORKDOCS_API BooleanEnumType GetBooleanEnumTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForBooleanEnumType(BooleanEnumType value);
} // namespace BooleanEnumTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
