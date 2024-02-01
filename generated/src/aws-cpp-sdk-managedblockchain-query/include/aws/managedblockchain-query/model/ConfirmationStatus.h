/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{
  enum class ConfirmationStatus
  {
    NOT_SET,
    FINAL,
    NONFINAL
  };

namespace ConfirmationStatusMapper
{
AWS_MANAGEDBLOCKCHAINQUERY_API ConfirmationStatus GetConfirmationStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForConfirmationStatus(ConfirmationStatus value);
} // namespace ConfirmationStatusMapper
} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
