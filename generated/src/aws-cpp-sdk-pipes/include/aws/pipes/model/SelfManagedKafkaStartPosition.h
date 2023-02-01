/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class SelfManagedKafkaStartPosition
  {
    NOT_SET,
    TRIM_HORIZON,
    LATEST
  };

namespace SelfManagedKafkaStartPositionMapper
{
AWS_PIPES_API SelfManagedKafkaStartPosition GetSelfManagedKafkaStartPositionForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForSelfManagedKafkaStartPosition(SelfManagedKafkaStartPosition value);
} // namespace SelfManagedKafkaStartPositionMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
