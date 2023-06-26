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
  enum class EngineWorkflowStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED
  };

namespace EngineWorkflowStatusMapper
{
AWS_SERVICECATALOG_API EngineWorkflowStatus GetEngineWorkflowStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForEngineWorkflowStatus(EngineWorkflowStatus value);
} // namespace EngineWorkflowStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
