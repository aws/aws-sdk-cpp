/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{
  enum class ModelState
  {
    NOT_SET,
    DEPLOY,
    UNDEPLOY
  };

namespace ModelStateMapper
{
AWS_SAGEMAKEREDGEMANAGER_API ModelState GetModelStateForName(const Aws::String& name);

AWS_SAGEMAKEREDGEMANAGER_API Aws::String GetNameForModelState(ModelState value);
} // namespace ModelStateMapper
} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
