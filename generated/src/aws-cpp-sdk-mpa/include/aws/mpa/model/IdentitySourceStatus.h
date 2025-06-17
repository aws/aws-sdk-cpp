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
  enum class IdentitySourceStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    ERROR_
  };

namespace IdentitySourceStatusMapper
{
AWS_MPA_API IdentitySourceStatus GetIdentitySourceStatusForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForIdentitySourceStatus(IdentitySourceStatus value);
} // namespace IdentitySourceStatusMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
