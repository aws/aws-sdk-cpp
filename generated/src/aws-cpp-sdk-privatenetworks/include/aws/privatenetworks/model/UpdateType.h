/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class UpdateType
  {
    NOT_SET,
    REPLACE,
    RETURN,
    COMMITMENT
  };

namespace UpdateTypeMapper
{
AWS_PRIVATENETWORKS_API UpdateType GetUpdateTypeForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForUpdateType(UpdateType value);
} // namespace UpdateTypeMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
