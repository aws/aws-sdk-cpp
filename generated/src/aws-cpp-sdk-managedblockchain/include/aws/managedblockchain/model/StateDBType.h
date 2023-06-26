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
  enum class StateDBType
  {
    NOT_SET,
    LevelDB,
    CouchDB
  };

namespace StateDBTypeMapper
{
AWS_MANAGEDBLOCKCHAIN_API StateDBType GetStateDBTypeForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForStateDBType(StateDBType value);
} // namespace StateDBTypeMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
