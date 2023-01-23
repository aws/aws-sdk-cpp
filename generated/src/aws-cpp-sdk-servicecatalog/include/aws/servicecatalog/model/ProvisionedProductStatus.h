﻿/**
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
  enum class ProvisionedProductStatus
  {
    NOT_SET,
    AVAILABLE,
    UNDER_CHANGE,
    TAINTED,
    ERROR_,
    PLAN_IN_PROGRESS
  };

namespace ProvisionedProductStatusMapper
{
AWS_SERVICECATALOG_API ProvisionedProductStatus GetProvisionedProductStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProvisionedProductStatus(ProvisionedProductStatus value);
} // namespace ProvisionedProductStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
