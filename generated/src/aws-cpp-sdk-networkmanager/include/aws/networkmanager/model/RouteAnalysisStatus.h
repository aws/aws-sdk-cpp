/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class RouteAnalysisStatus
  {
    NOT_SET,
    RUNNING,
    COMPLETED,
    FAILED
  };

namespace RouteAnalysisStatusMapper
{
AWS_NETWORKMANAGER_API RouteAnalysisStatus GetRouteAnalysisStatusForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForRouteAnalysisStatus(RouteAnalysisStatus value);
} // namespace RouteAnalysisStatusMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
