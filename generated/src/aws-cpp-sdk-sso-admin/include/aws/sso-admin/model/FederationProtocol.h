/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class FederationProtocol
  {
    NOT_SET,
    SAML,
    OAUTH
  };

namespace FederationProtocolMapper
{
AWS_SSOADMIN_API FederationProtocol GetFederationProtocolForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForFederationProtocol(FederationProtocol value);
} // namespace FederationProtocolMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
