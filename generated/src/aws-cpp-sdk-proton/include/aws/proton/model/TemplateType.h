/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class TemplateType
  {
    NOT_SET,
    ENVIRONMENT,
    SERVICE
  };

namespace TemplateTypeMapper
{
AWS_PROTON_API TemplateType GetTemplateTypeForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForTemplateType(TemplateType value);
} // namespace TemplateTypeMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
