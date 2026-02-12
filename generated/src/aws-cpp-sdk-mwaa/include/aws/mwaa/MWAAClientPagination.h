/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mwaa/MWAAClient.h>
#include <aws/mwaa/model/ListEnvironmentsPaginationTraits.h>

namespace Aws {
namespace MWAA {

using ListEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<MWAAClient, Model::ListEnvironmentsRequest, Pagination::ListEnvironmentsPaginationTraits<MWAAClient>>;

}  // namespace MWAA
}  // namespace Aws
