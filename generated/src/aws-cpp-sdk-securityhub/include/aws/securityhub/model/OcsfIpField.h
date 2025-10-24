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
  enum class OcsfIpField
  {
    NOT_SET,
    evidences_dst_endpoint_ip,
    evidences_src_endpoint_ip
  };

namespace OcsfIpFieldMapper
{
AWS_SECURITYHUB_API OcsfIpField GetOcsfIpFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOcsfIpField(OcsfIpField value);
} // namespace OcsfIpFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
