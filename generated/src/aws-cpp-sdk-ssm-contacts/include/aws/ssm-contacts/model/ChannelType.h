/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{
  enum class ChannelType
  {
    NOT_SET,
    SMS,
    VOICE,
    EMAIL
  };

namespace ChannelTypeMapper
{
AWS_SSMCONTACTS_API ChannelType GetChannelTypeForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForChannelType(ChannelType value);
} // namespace ChannelTypeMapper
} // namespace Model
} // namespace SSMContacts
} // namespace Aws
