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
  enum class ShareStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETED,
    COMPLETED_WITH_ERRORS,
    ERROR_
  };

namespace ShareStatusMapper
{
AWS_SERVICECATALOG_API ShareStatus GetShareStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForShareStatus(ShareStatus value);
} // namespace ShareStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
