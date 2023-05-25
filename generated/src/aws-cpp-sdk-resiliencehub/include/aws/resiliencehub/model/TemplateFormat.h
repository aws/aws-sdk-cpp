/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class TemplateFormat
  {
    NOT_SET,
    CfnYaml,
    CfnJson
  };

namespace TemplateFormatMapper
{
AWS_RESILIENCEHUB_API TemplateFormat GetTemplateFormatForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForTemplateFormat(TemplateFormat value);
} // namespace TemplateFormatMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
