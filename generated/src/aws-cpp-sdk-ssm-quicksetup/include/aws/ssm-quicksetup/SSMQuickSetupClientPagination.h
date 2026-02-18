/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm-quicksetup/SSMQuickSetupClient.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersPaginationTraits.h>
#include <aws/ssm-quicksetup/model/ListConfigurationsPaginationTraits.h>

namespace Aws {
namespace SSMQuickSetup {

using ListConfigurationManagersPaginator =
    Aws::Utils::Pagination::Paginator<SSMQuickSetupClient, Model::ListConfigurationManagersRequest,
                                      Pagination::ListConfigurationManagersPaginationTraits<SSMQuickSetupClient>>;
using ListConfigurationsPaginator = Aws::Utils::Pagination::Paginator<SSMQuickSetupClient, Model::ListConfigurationsRequest,
                                                                      Pagination::ListConfigurationsPaginationTraits<SSMQuickSetupClient>>;

}  // namespace SSMQuickSetup
}  // namespace Aws
