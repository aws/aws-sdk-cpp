/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class HandshakeResourceType
  {
    NOT_SET,
    ACCOUNT,
    ORGANIZATION,
    ORGANIZATION_FEATURE_SET,
    EMAIL,
    MASTER_EMAIL,
    MASTER_NAME,
    NOTES,
    PARENT_HANDSHAKE
  };

namespace HandshakeResourceTypeMapper
{
AWS_ORGANIZATIONS_API HandshakeResourceType GetHandshakeResourceTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForHandshakeResourceType(HandshakeResourceType value);
} // namespace HandshakeResourceTypeMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
