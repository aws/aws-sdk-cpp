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
  enum class ErrorType
  {
    NOT_SET,
    VALIDATION_EXCEPTION,
    RESOURCE_NOT_FOUND_EXCEPTION
  };

namespace ErrorTypeMapper
{
AWS_MANAGEDBLOCKCHAINQUERY_API ErrorType GetErrorTypeForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForErrorType(ErrorType value);
} // namespace ErrorTypeMapper
} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
