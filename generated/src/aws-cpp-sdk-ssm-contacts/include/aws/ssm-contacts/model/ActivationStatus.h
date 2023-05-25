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
  enum class ActivationStatus
  {
    NOT_SET,
    ACTIVATED,
    NOT_ACTIVATED
  };

namespace ActivationStatusMapper
{
AWS_SSMCONTACTS_API ActivationStatus GetActivationStatusForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForActivationStatus(ActivationStatus value);
} // namespace ActivationStatusMapper
} // namespace Model
} // namespace SSMContacts
} // namespace Aws
