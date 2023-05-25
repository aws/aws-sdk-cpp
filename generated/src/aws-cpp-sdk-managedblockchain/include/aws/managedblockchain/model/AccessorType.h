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
  enum class AccessorType
  {
    NOT_SET,
    BILLING_TOKEN
  };

namespace AccessorTypeMapper
{
AWS_MANAGEDBLOCKCHAIN_API AccessorType GetAccessorTypeForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForAccessorType(AccessorType value);
} // namespace AccessorTypeMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
