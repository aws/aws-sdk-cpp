/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClient.h>
#include <aws/sagemaker-featurestore-runtime/model/ListRecordsPaginationTraits.h>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {

using ListRecordsPaginator = Aws::Utils::Pagination::Paginator<SageMakerFeatureStoreRuntimeClient, Model::ListRecordsRequest,
                                                               Pagination::ListRecordsPaginationTraits<SageMakerFeatureStoreRuntimeClient>>;

}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
