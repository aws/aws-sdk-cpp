/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{
  enum class RegistrationStatus
  {
    NOT_SET,
    COMPLETE,
    INCOMPLETE
  };

namespace RegistrationStatusMapper
{
AWS_SOCIALMESSAGING_API RegistrationStatus GetRegistrationStatusForName(const Aws::String& name);

AWS_SOCIALMESSAGING_API Aws::String GetNameForRegistrationStatus(RegistrationStatus value);
} // namespace RegistrationStatusMapper
} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
