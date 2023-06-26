/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
{
namespace Model
{
  enum class IPSetDescriptorType
  {
    NOT_SET,
    IPV4,
    IPV6
  };

namespace IPSetDescriptorTypeMapper
{
AWS_WAF_API IPSetDescriptorType GetIPSetDescriptorTypeForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForIPSetDescriptorType(IPSetDescriptorType value);
} // namespace IPSetDescriptorTypeMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
