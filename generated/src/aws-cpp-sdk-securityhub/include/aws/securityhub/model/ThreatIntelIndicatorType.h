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
  enum class ThreatIntelIndicatorType
  {
    NOT_SET,
    DOMAIN_,
    EMAIL_ADDRESS,
    HASH_MD5,
    HASH_SHA1,
    HASH_SHA256,
    HASH_SHA512,
    IPV4_ADDRESS,
    IPV6_ADDRESS,
    MUTEX,
    PROCESS,
    URL
  };

namespace ThreatIntelIndicatorTypeMapper
{
AWS_SECURITYHUB_API ThreatIntelIndicatorType GetThreatIntelIndicatorTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForThreatIntelIndicatorType(ThreatIntelIndicatorType value);
} // namespace ThreatIntelIndicatorTypeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
