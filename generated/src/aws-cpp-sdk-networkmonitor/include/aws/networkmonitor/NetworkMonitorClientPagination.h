/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/networkmonitor/NetworkMonitorClient.h>
#include <aws/networkmonitor/model/ListMonitorsPaginationTraits.h>

namespace Aws {
namespace NetworkMonitor {

using ListMonitorsPaginator = Aws::Utils::Pagination::Paginator<NetworkMonitorClient, Model::ListMonitorsRequest,
                                                                Pagination::ListMonitorsPaginationTraits<NetworkMonitorClient>>;

}  // namespace NetworkMonitor
}  // namespace Aws
