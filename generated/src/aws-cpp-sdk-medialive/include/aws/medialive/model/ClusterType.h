/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class ClusterType
  {
    NOT_SET,
    ON_PREMISES
  };

namespace ClusterTypeMapper
{
AWS_MEDIALIVE_API ClusterType GetClusterTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForClusterType(ClusterType value);
} // namespace ClusterTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
