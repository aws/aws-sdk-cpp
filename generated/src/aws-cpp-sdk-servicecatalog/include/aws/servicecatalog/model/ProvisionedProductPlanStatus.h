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
  enum class ProvisionedProductPlanStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_SUCCESS,
    CREATE_FAILED,
    EXECUTE_IN_PROGRESS,
    EXECUTE_SUCCESS,
    EXECUTE_FAILED
  };

namespace ProvisionedProductPlanStatusMapper
{
AWS_SERVICECATALOG_API ProvisionedProductPlanStatus GetProvisionedProductPlanStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProvisionedProductPlanStatus(ProvisionedProductPlanStatus value);
} // namespace ProvisionedProductPlanStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
