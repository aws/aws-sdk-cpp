/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class ListServiceInstancesSortBy
  {
    NOT_SET,
    name,
    deploymentStatus,
    templateName,
    serviceName,
    environmentName,
    lastDeploymentAttemptedAt,
    createdAt
  };

namespace ListServiceInstancesSortByMapper
{
AWS_PROTON_API ListServiceInstancesSortBy GetListServiceInstancesSortByForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForListServiceInstancesSortBy(ListServiceInstancesSortBy value);
} // namespace ListServiceInstancesSortByMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
