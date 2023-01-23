/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QLDB
{
namespace Model
{
  enum class LedgerState
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    DELETED
  };

namespace LedgerStateMapper
{
AWS_QLDB_API LedgerState GetLedgerStateForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForLedgerState(LedgerState value);
} // namespace LedgerStateMapper
} // namespace Model
} // namespace QLDB
} // namespace Aws
