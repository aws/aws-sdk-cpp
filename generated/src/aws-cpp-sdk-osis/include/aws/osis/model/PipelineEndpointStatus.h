/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OSIS
{
namespace Model
{
  enum class PipelineEndpointStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    CREATE_FAILED,
    DELETING,
    REVOKING,
    REVOKED
  };

namespace PipelineEndpointStatusMapper
{
AWS_OSIS_API PipelineEndpointStatus GetPipelineEndpointStatusForName(const Aws::String& name);

AWS_OSIS_API Aws::String GetNameForPipelineEndpointStatus(PipelineEndpointStatus value);
} // namespace PipelineEndpointStatusMapper
} // namespace Model
} // namespace OSIS
} // namespace Aws
