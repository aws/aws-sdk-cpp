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
  enum class PersonalAccessTokenConfigurationStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace PersonalAccessTokenConfigurationStatusMapper
{
AWS_WORKMAIL_API PersonalAccessTokenConfigurationStatus GetPersonalAccessTokenConfigurationStatusForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForPersonalAccessTokenConfigurationStatus(PersonalAccessTokenConfigurationStatus value);
} // namespace PersonalAccessTokenConfigurationStatusMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
