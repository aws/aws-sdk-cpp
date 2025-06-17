/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MPA
{
namespace Model
{
  enum class IdentitySourceType
  {
    NOT_SET,
    IAM_IDENTITY_CENTER
  };

namespace IdentitySourceTypeMapper
{
AWS_MPA_API IdentitySourceType GetIdentitySourceTypeForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForIdentitySourceType(IdentitySourceType value);
} // namespace IdentitySourceTypeMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
