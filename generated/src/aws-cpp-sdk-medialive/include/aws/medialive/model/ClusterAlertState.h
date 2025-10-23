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
  enum class ClusterAlertState
  {
    NOT_SET,
    SET,
    CLEARED
  };

namespace ClusterAlertStateMapper
{
AWS_MEDIALIVE_API ClusterAlertState GetClusterAlertStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForClusterAlertState(ClusterAlertState value);
} // namespace ClusterAlertStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
