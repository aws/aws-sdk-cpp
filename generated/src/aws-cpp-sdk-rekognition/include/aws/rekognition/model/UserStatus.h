/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class UserStatus
  {
    NOT_SET,
    ACTIVE,
    UPDATING,
    CREATING,
    CREATED
  };

namespace UserStatusMapper
{
AWS_REKOGNITION_API UserStatus GetUserStatusForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForUserStatus(UserStatus value);
} // namespace UserStatusMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
