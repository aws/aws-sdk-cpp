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
  enum class IdentityStatus
  {
    NOT_SET,
    PENDING,
    ACCEPTED,
    REJECTED,
    INVALID
  };

namespace IdentityStatusMapper
{
AWS_MPA_API IdentityStatus GetIdentityStatusForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForIdentityStatus(IdentityStatus value);
} // namespace IdentityStatusMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
