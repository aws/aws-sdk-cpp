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
  enum class ListServiceInstancesFilterBy
  {
    NOT_SET,
    name,
    deploymentStatus,
    templateName,
    serviceName,
    deployedTemplateVersionStatus,
    environmentName,
    lastDeploymentAttemptedAtBefore,
    lastDeploymentAttemptedAtAfter,
    createdAtBefore,
    createdAtAfter
  };

namespace ListServiceInstancesFilterByMapper
{
AWS_PROTON_API ListServiceInstancesFilterBy GetListServiceInstancesFilterByForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForListServiceInstancesFilterBy(ListServiceInstancesFilterBy value);
} // namespace ListServiceInstancesFilterByMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
