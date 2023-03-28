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
  enum class ContactType
  {
    NOT_SET,
    PERSONAL,
    ESCALATION,
    ONCALL_SCHEDULE
  };

namespace ContactTypeMapper
{
AWS_SSMCONTACTS_API ContactType GetContactTypeForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForContactType(ContactType value);
} // namespace ContactTypeMapper
} // namespace Model
} // namespace SSMContacts
} // namespace Aws
