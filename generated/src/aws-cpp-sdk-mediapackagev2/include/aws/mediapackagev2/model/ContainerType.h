/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class ContainerType
  {
    NOT_SET,
    TS,
    CMAF
  };

namespace ContainerTypeMapper
{
AWS_MEDIAPACKAGEV2_API ContainerType GetContainerTypeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForContainerType(ContainerType value);
} // namespace ContainerTypeMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
