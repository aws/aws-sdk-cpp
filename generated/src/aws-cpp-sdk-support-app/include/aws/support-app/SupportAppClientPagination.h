/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/support-app/SupportAppClient.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsPaginationTraits.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsPaginationTraits.h>

namespace Aws {
namespace SupportApp {

using ListSlackChannelConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<SupportAppClient, Model::ListSlackChannelConfigurationsRequest,
                                      Pagination::ListSlackChannelConfigurationsPaginationTraits<SupportAppClient>>;
using ListSlackWorkspaceConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<SupportAppClient, Model::ListSlackWorkspaceConfigurationsRequest,
                                      Pagination::ListSlackWorkspaceConfigurationsPaginationTraits<SupportAppClient>>;

}  // namespace SupportApp
}  // namespace Aws
