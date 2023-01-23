/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{
  enum class NetworkStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    CREATE_FAILED,
    DELETING,
    DELETED
  };

namespace NetworkStatusMapper
{
AWS_MANAGEDBLOCKCHAIN_API NetworkStatus GetNetworkStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForNetworkStatus(NetworkStatus value);
} // namespace NetworkStatusMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
