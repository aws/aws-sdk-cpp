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
  enum class EventSortBy
  {
    NOT_SET,
    EventTime
  };

namespace EventSortByMapper
{
AWS_SAGEMAKER_API EventSortBy GetEventSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForEventSortBy(EventSortBy value);
} // namespace EventSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
