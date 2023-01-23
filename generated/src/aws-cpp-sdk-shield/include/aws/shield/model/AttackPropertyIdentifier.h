/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class AttackPropertyIdentifier
  {
    NOT_SET,
    DESTINATION_URL,
    REFERRER,
    SOURCE_ASN,
    SOURCE_COUNTRY,
    SOURCE_IP_ADDRESS,
    SOURCE_USER_AGENT,
    WORDPRESS_PINGBACK_REFLECTOR,
    WORDPRESS_PINGBACK_SOURCE
  };

namespace AttackPropertyIdentifierMapper
{
AWS_SHIELD_API AttackPropertyIdentifier GetAttackPropertyIdentifierForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForAttackPropertyIdentifier(AttackPropertyIdentifier value);
} // namespace AttackPropertyIdentifierMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
