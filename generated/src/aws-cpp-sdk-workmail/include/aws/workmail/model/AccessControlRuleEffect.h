/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class AccessControlRuleEffect
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace AccessControlRuleEffectMapper
{
AWS_WORKMAIL_API AccessControlRuleEffect GetAccessControlRuleEffectForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForAccessControlRuleEffect(AccessControlRuleEffect value);
} // namespace AccessControlRuleEffectMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
