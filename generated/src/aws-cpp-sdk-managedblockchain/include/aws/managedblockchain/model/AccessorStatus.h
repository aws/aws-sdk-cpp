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
  enum class AccessorStatus
  {
    NOT_SET,
    AVAILABLE,
    PENDING_DELETION,
    DELETED
  };

namespace AccessorStatusMapper
{
AWS_MANAGEDBLOCKCHAIN_API AccessorStatus GetAccessorStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForAccessorStatus(AccessorStatus value);
} // namespace AccessorStatusMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
