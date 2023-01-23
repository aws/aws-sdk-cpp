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
  enum class CopyProductStatus
  {
    NOT_SET,
    SUCCEEDED,
    IN_PROGRESS,
    FAILED
  };

namespace CopyProductStatusMapper
{
AWS_SERVICECATALOG_API CopyProductStatus GetCopyProductStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForCopyProductStatus(CopyProductStatus value);
} // namespace CopyProductStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
