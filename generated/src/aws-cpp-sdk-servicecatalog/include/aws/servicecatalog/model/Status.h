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
  enum class Status
  {
    NOT_SET,
    AVAILABLE,
    CREATING,
    FAILED
  };

namespace StatusMapper
{
AWS_SERVICECATALOG_API Status GetStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
