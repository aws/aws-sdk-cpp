/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class AutomaticUpdatePolicy
  {
    NOT_SET,
    ALL_VERSIONS,
    EMERGENCY_VERSIONS_ONLY
  };

namespace AutomaticUpdatePolicyMapper
{
AWS_STORAGEGATEWAY_API AutomaticUpdatePolicy GetAutomaticUpdatePolicyForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForAutomaticUpdatePolicy(AutomaticUpdatePolicy value);
} // namespace AutomaticUpdatePolicyMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
