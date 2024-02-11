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
  enum class EntityType
  {
    NOT_SET,
    GROUP,
    USER,
    RESOURCE
  };

namespace EntityTypeMapper
{
AWS_WORKMAIL_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForEntityType(EntityType value);
} // namespace EntityTypeMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
