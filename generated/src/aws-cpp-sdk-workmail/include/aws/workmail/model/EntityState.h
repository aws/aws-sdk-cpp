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
  enum class EntityState
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    DELETED
  };

namespace EntityStateMapper
{
AWS_WORKMAIL_API EntityState GetEntityStateForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForEntityState(EntityState value);
} // namespace EntityStateMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
