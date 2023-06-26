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
  enum class StackInstanceStatus
  {
    NOT_SET,
    CURRENT,
    OUTDATED,
    INOPERABLE
  };

namespace StackInstanceStatusMapper
{
AWS_SERVICECATALOG_API StackInstanceStatus GetStackInstanceStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForStackInstanceStatus(StackInstanceStatus value);
} // namespace StackInstanceStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
