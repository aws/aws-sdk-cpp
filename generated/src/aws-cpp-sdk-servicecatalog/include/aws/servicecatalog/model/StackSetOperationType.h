/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class StackSetOperationType
  {
    NOT_SET,
    CREATE,
    UPDATE,
    DELETE_
  };

namespace StackSetOperationTypeMapper
{
AWS_SERVICECATALOG_API StackSetOperationType GetStackSetOperationTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForStackSetOperationType(StackSetOperationType value);
} // namespace StackSetOperationTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
