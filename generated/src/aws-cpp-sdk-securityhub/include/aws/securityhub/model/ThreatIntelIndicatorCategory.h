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
  enum class ThreatIntelIndicatorCategory
  {
    NOT_SET,
    BACKDOOR,
    CARD_STEALER,
    COMMAND_AND_CONTROL,
    DROP_SITE,
    EXPLOIT_SITE,
    KEYLOGGER
  };

namespace ThreatIntelIndicatorCategoryMapper
{
AWS_SECURITYHUB_API ThreatIntelIndicatorCategory GetThreatIntelIndicatorCategoryForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForThreatIntelIndicatorCategory(ThreatIntelIndicatorCategory value);
} // namespace ThreatIntelIndicatorCategoryMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
