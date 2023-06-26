/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class AsyncNotificationTopicTypes
  {
    NOT_SET,
    SUCCESS_NOTIFICATION_TOPIC,
    ERROR_NOTIFICATION_TOPIC
  };

namespace AsyncNotificationTopicTypesMapper
{
AWS_SAGEMAKER_API AsyncNotificationTopicTypes GetAsyncNotificationTopicTypesForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAsyncNotificationTopicTypes(AsyncNotificationTopicTypes value);
} // namespace AsyncNotificationTopicTypesMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
