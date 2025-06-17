/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class OcsfMapField
  {
    NOT_SET,
    resources_tags
  };

namespace OcsfMapFieldMapper
{
AWS_SECURITYHUB_API OcsfMapField GetOcsfMapFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOcsfMapField(OcsfMapField value);
} // namespace OcsfMapFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
