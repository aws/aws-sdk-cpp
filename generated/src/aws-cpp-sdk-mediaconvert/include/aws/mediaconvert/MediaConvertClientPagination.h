/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediaconvert/MediaConvertClient.h>
#include <aws/mediaconvert/model/ListJobTemplatesPaginationTraits.h>
#include <aws/mediaconvert/model/ListJobsPaginationTraits.h>
#include <aws/mediaconvert/model/ListPresetsPaginationTraits.h>
#include <aws/mediaconvert/model/ListQueuesPaginationTraits.h>
#include <aws/mediaconvert/model/ListVersionsPaginationTraits.h>
#include <aws/mediaconvert/model/SearchJobsPaginationTraits.h>

namespace Aws {
namespace MediaConvert {

using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<MediaConvertClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<MediaConvertClient>>;
using ListJobTemplatesPaginator = Aws::Utils::Pagination::Paginator<MediaConvertClient, Model::ListJobTemplatesRequest,
                                                                    Pagination::ListJobTemplatesPaginationTraits<MediaConvertClient>>;
using ListPresetsPaginator = Aws::Utils::Pagination::Paginator<MediaConvertClient, Model::ListPresetsRequest,
                                                               Pagination::ListPresetsPaginationTraits<MediaConvertClient>>;
using ListQueuesPaginator = Aws::Utils::Pagination::Paginator<MediaConvertClient, Model::ListQueuesRequest,
                                                              Pagination::ListQueuesPaginationTraits<MediaConvertClient>>;
using ListVersionsPaginator = Aws::Utils::Pagination::Paginator<MediaConvertClient, Model::ListVersionsRequest,
                                                                Pagination::ListVersionsPaginationTraits<MediaConvertClient>>;
using SearchJobsPaginator = Aws::Utils::Pagination::Paginator<MediaConvertClient, Model::SearchJobsRequest,
                                                              Pagination::SearchJobsPaginationTraits<MediaConvertClient>>;

}  // namespace MediaConvert
}  // namespace Aws
