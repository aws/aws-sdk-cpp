/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class ProfileNotificationType
  {
    NOT_SET,
    PROFILE_ANSWERS_UPDATED,
    PROFILE_DELETED
  };

namespace ProfileNotificationTypeMapper
{
AWS_WELLARCHITECTED_API ProfileNotificationType GetProfileNotificationTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForProfileNotificationType(ProfileNotificationType value);
} // namespace ProfileNotificationTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
