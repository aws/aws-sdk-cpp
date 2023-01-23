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
  enum class AvailabilityProviderType
  {
    NOT_SET,
    EWS,
    LAMBDA
  };

namespace AvailabilityProviderTypeMapper
{
AWS_WORKMAIL_API AvailabilityProviderType GetAvailabilityProviderTypeForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForAvailabilityProviderType(AvailabilityProviderType value);
} // namespace AvailabilityProviderTypeMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
