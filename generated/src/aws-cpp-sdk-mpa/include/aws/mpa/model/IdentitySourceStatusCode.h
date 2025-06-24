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
  enum class IdentitySourceStatusCode
  {
    NOT_SET,
    ACCESS_DENIED,
    DELETION_FAILED,
    IDC_INSTANCE_NOT_FOUND,
    IDC_INSTANCE_NOT_VALID
  };

namespace IdentitySourceStatusCodeMapper
{
AWS_MPA_API IdentitySourceStatusCode GetIdentitySourceStatusCodeForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForIdentitySourceStatusCode(IdentitySourceStatusCode value);
} // namespace IdentitySourceStatusCodeMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
