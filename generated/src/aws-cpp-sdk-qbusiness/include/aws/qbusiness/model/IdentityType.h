/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class IdentityType
  {
    NOT_SET,
    AWS_IAM_IDP_SAML,
    AWS_IAM_IDP_OIDC,
    AWS_IAM_IDC,
    AWS_QUICKSIGHT_IDP,
    ANONYMOUS
  };

namespace IdentityTypeMapper
{
AWS_QBUSINESS_API IdentityType GetIdentityTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForIdentityType(IdentityType value);
} // namespace IdentityTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
