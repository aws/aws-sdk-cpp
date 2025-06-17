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
  enum class IntegrationV2Type
  {
    NOT_SET,
    SEND_FINDINGS_TO_SECURITY_HUB,
    RECEIVE_FINDINGS_FROM_SECURITY_HUB,
    UPDATE_FINDINGS_IN_SECURITY_HUB
  };

namespace IntegrationV2TypeMapper
{
AWS_SECURITYHUB_API IntegrationV2Type GetIntegrationV2TypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForIntegrationV2Type(IntegrationV2Type value);
} // namespace IntegrationV2TypeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
